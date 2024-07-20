#!/usr/bin/python3

# Copyright (C) 2024 Omkar
# Based on source code of Carl Leonardsson

import re
import sys
from collections import defaultdict


varnumMap = {}
threadMap = {}
barriers = {}
barriers_init = defaultdict(list)
pidToDVWG = {}

def parse_init(init):
    init=re.sub('([^;\\s])\\s*$','\\1;',init) # Add semi-colon at the end if missing
    inits = re.findall('([^=;\\s]*)\\s*=\\s*([^;\\s]*)\\s*;',init)
    vs = {}
    rs = {}
    crs= {}
    allvars = []
    for pr in inits:
        # print("pr\n")
        m = re.fullmatch('P?(\\d+):(.+)',pr[0])
        # print("m\n")
        # print(m)
        try:
            val = str(int(pr[1]))
        except ValueError:
            varName = 'var_'+pr[1]
            val = 'vars['+str(len(varnumMap))+']'
            if varName in varnumMap:
                val = 'vars['+str(varnumMap[varName])+']' # this is the index of the varialbe
            else:
                varnumMap[varName] = len(varnumMap)               
            allvars.append(varName)
        if m == None:
            m = re.fullmatch('(%.+)',pr[0])
            if m == None:
                # Variable
                varName = 'var_'+pr[0]
                if pr[0].startswith('['):
                    assert(pr[0].endswith(']'))
                    varName='var_'+pr[0][1:-1] # Remove brackets [ ]
                if varName in varnumMap:
                    val = 'vars['+str(varnumMap[varName])+']' # this is the index of the varialbe
                else:
                    varnumMap[varName] = len(varnumMap)
                var = 'vars['+str(varnumMap[varName])+']'    
                vs[var] = val
            else:
                # Register common to all threads
                reg=pr[0]
                crs[reg]=val
        else:
            # Register
            pid = int(m.group(1))
            reg = m.group(2)
            if not(pid in rs):
                rs[pid] = {}
            rs[pid][reg] = val
    for v in allvars:
        vv = 'vars['+str(varnumMap[v])+']'
        if not(vv in vs):
            vs[vv] = '0'
    return (vs,rs,crs)

def split_codes(code):
    codes = []
    lines = code.split(';')
    for ln in lines:
        ln = ln.strip()
        if len(ln) == 0: continue
        ins = ln.split('|')
        pid = 0
        for instr in ins:
            if len(codes) <= pid:
                codes.append([])
            instr = instr.strip()
            if len(instr) > 0:
                codes[pid].append(instr)
            pid = pid+1
    return codes

reg_counter = 0
def get_fresh_reg(r=''):
    #if len(r) and r[0]=='%':
    #    r=r[1:]
    global reg_counter
    reg_counter = reg_counter+1
    if len(r):
        return 'v'+str(reg_counter)+'_'+r
    else:
        return 'v'+str(reg_counter)

lbl_counter = 0
def get_fresh_label(l=''):
    global lbl_counter
    lbl_counter = lbl_counter+1
    if len(l):
        return 'label_'+str(lbl_counter)+'_'+l
    else:
        return 'label_'+str(lbl_counter)

def ptx_addi(reg_init,toks):
    tgt=get_fresh_reg(toks[1])
    if toks[2] in reg_init:
        left=reg_init[toks[2]]
    else:
        left='0'
    right=str(int(toks[3]))
    reg_init[toks[1]] = tgt
    return '  int '+tgt+' = '+left+' + '+right+';\n'

def ptx_beq(pc,reg_init,labels,toks):
    if toks[1] in reg_init:
        op1=reg_init[toks[1]]
    else:
        op1='0'
    if toks[2] in reg_init:
        #op2=reg_init[toks[3]][4:] # remove type
        op2=reg_init[toks[2]]
    else:
        try:
            op2 = str(int(toks[2]))
        except ValueError:
            # value is register or variable:TODO
            print(op2)
    lbl1='lbl_'+toks[3]
    # assert((pc+1) in labels)
    # lbl2=''+labels[pc+1]
    # return '  if ('+op1+'=='+op2+')  goto '+lbl1+'; else goto '+lbl2+';\n'
    return '  if ('+op1+'=='+op2+')  goto '+lbl1+';\n'

def ptx_bne(pc,reg_init,labels,toks):
    if toks[1] in reg_init:
        op1=reg_init[toks[1]]
    else:
        op1='0'
    if toks[2] in reg_init:
        #op2=reg_init[toks[3]][4:] # remove type
        op2=reg_init[toks[2]]
    else:
        try:
            op2 = str(int(toks[2]))
        except ValueError:
            # value is register or variable:TODO
            print(op2)
    lbl1='lbl_'+toks[3]
    # assert((pc+1) in labels)
    # lbl2=''+labels[pc+1]
    # return '  if ('+op1+'=='+op2+')  goto '+lbl2+'; else goto '+lbl1+';\n'
    return '  if ('+op1+'!='+op2+')  goto '+lbl1+';\n'

def ptx_goto(pc,reg_init,labels,toks):
    lbl1='lbl_'+toks[1]
    return '  goto '+lbl1+';\n'

def ptx_li(reg_init,toks):
    reg_init[toks[1]] = toks[2]
    return ''


def get_scope(inst):
    r = ''
    if 'gpu' in inst:
        r = r + '__VERIFIER_memory_scope_device();\n'
    elif 'cta' in inst:
        r = r + '__VERIFIER_memory_scope_work_group();\n'
    elif 'sys' in inst:
        r = r + '__VERIFIER_memory_scope_system();\n'
    else:
        raise Exception("The benchmark is containing some unsupported scope operations.")
    return r

def get_mem_order(inst):
    r=''
    if 'acquire' in inst:
        r='memory_order_acquire'
    elif 'relaxed' in inst:
        r = 'memory_order_relaxed'
    elif 'acq_rel' in inst:
        r = 'memory_order_acq_rel'
    elif 'release' in inst:
       r= 'memory_order_release'
    elif 'sc' in inst:
        r = 'memory_order_seq_cst'
    else:
        raise Exception("The benchmark is containing some unsupported memory order.")
    return r

def ptx_ld_weak(reg_init, toks):
    # print('ptx_ld_acquire_dv',reg_init, toks)
    tmp_reg=get_fresh_reg()
    tgt_reg = get_fresh_reg(toks[1])
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    else:
        raise Exception('Uninitialized address used in ld: {0}'.format(toks[2]))
    reg_init[toks[1]] = tgt_reg
    if addr.startswith('vars['): 
        r = '__VERIFIER_memory_scope_system();\n'
        r = r+'__VERIFIER_weak_access();\n'
        r =r +  '  int '+tgt_reg+' = atomic_load_explicit(&'+addr+', memory_order_relaxed);\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")

def ptx_st_weak(reg_init,toks):
    # print('ptx_st_release_dv',reg_init, toks)
    varName = 'var_'+toks[1]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    if toks[2] in reg_init:
        val = reg_init[toks[2]]
    else:
        try:
            val = str(int(toks[2]))
        except ValueError:
            # value is register or variable:
            print(val)
    if addr.startswith('vars['):
        r = '__VERIFIER_memory_scope_system();\n'
        r = r+'__VERIFIER_weak_access();\n'
        r = r +  '  atomic_store_explicit(&'+addr+', '+val+', memory_order_relaxed);\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")
    
def ptx_ld_(reg_init, toks):
    # print('ptx_ld_acquire_dv',reg_init, toks)
    tmp_reg=get_fresh_reg()
    tgt_reg = get_fresh_reg(toks[1])
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    else:
        raise Exception('Uninitialized address used in ld: {0}'.format(toks[2]))
    reg_init[toks[1]] = tgt_reg
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_load_explicit(&'+addr+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")


def ptx_st_(reg_init,toks):
    # print('ptx_st_release_dv',reg_init, toks)
    varName = 'var_'+toks[1]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[2]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['):
        r = r +  '  atomic_store_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")



def ptx_thr_data(thr_data,pid):
    pattern = r'\s*P\d+@cta\s*(\d+),\s*gpu\s(\d+)\s*'
    m = re.fullmatch(pattern,thr_data)
    local_id = 0
    key = ''+m.group(1)+','+m.group(2)
    pidToDVWG[pid] = ''+m.group(1)+','+m.group(2)
    if m != None:
        if key not in threadMap:
            threadMap[key] = 0
        else:
            local_id = threadMap[key] + 1
            threadMap[key] = local_id
        r = '  __VERIFIER_thread_local_id('+str(local_id)+');\n'
        r = r+'  __VERIFIER_thread_group_id('+m.group(1)+');\n'
        r = r+'  __VERIFIER_thread_kernel_id('+m.group(2)+');\n'
        return r
    else:
        print('None')
        raise Exception("The benchmark is containing some unsupported @cta , gpu info ")
    
def ptx_add_(reg_init,toks):
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[3]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    tgt_reg = get_fresh_reg(toks[1])
    reg_init[toks[1]] = tgt_reg
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_fetch_add_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")

def ptx_add_red(reg_init,toks):
    varName = 'var_'+toks[1]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[2]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    tgt_reg = get_fresh_reg()
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_fetch_add_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")
    
def ptx_sub_red(reg_init,toks):
    varName = 'var_'+toks[1]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[2]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    tgt_reg = get_fresh_reg()
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_fetch_sub_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")
    
def ptx_sub_(reg_init,toks):
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[3]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    tgt_reg = get_fresh_reg(toks[1])
    reg_init[toks[1]] = tgt_reg
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_fetch_sub_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")
    
def ptx_cas(reg_init,toks):
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[4]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    try:
        exp = str(int(toks[3]))
    except ValueError:
        # value is register or variable:TODO
        print(exp)
    tgt_reg = get_fresh_reg(toks[1])
    tmp_reg = get_fresh_reg()
    r = '  int '+tmp_reg+' = '+exp+';\n'
    r = r+ '  __VERIFIER_ret_CAS();\n'
    reg_init[toks[1]] = tgt_reg
    r = r + get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_compare_exchange_strong_explicit(&'+addr+ ',&'+tmp_reg+', '+val+','+memorder+','+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")

def ptx_exch(reg_init,toks):
    varName = 'var_'+toks[2]
    if varName in varnumMap:
        addr = 'vars['+str(varnumMap[varName])+']'
    try:
        val = str(int(toks[3]))
    except ValueError:
        # value is register or variable:TODO
        print(val)
    tgt_reg = get_fresh_reg(toks[1])
    reg_init[toks[1]] = tgt_reg
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    if addr.startswith('vars['): 
        r =r +  '  int '+tgt_reg+' = atomic_exchange_explicit(&'+addr+', '+val+', '+memorder+');\n'
        return r
    else:
        raise Exception("The benchmark is containing some unsupported address operations.")
    
def ptx_bar_(reg_init,toks,pid):
    if 'arrive' in toks[0]:
        return '  ;;\n'
    dv_wg = pidToDVWG[pid]
    dv_wg = dv_wg.replace(',','_')
    barrid = toks[0].replace('.','_') + '_' +toks[1] + '_dvwg_' + dv_wg
    if barrid not in barriers:
        barriers[barrid] = barrid
    else:
        barrid = barriers[barrid]
    if barrid not in barriers_init:
        barriers_init[barrid].append(pid)
    else:
        if pid not in barriers_init[barrid]:
            barriers_init[barrid].append(pid)
    r = get_scope(toks[0])
    treg = get_fresh_reg()
    r = r + '  int '+treg+'= pthread_barrier_wait(&'+barrid+');\n'
    r = r + '  if ('+treg +'!= 0 && '+treg+' != PTHREAD_BARRIER_SERIAL_THREAD) {\n'
    r = r +    '    printf("Could not wait on barrier\\n");\n'
    r = r +    '    pthread_exit(NULL);\n'
    r = r +'  }\n'
    return r
    

def ptx_fence(reg_init,toks):
    r = get_scope(toks[0])
    memorder = get_mem_order(toks[0])
    r =r +  '  atomic_thread_fence('+memorder+');\n'
    return r


def instrs_to_c(reg_init,instrs,arch,pid):
    # First find all defined labels
    labels={}
    pc=0
    while pc < len(instrs):
        if (instrs[pc].find(':') >= 0) and not(instrs[pc].endswith(':')):
            # Label and instruction on same line -> separate them
            i=instrs[pc].find(':')
            lbl=instrs[pc][:i]
            instr=instrs[pc][i+1:].strip()
            instrs[pc]=instr
            instrs.insert(pc,lbl+':')
        if instrs[pc].endswith(':'):
            # Label
            assert(not(pc in labels))
            lbl='lbl_'+instrs[pc][:-1]
            labels[pc]=lbl
            del instrs[pc]
        pc=pc+1
    # Then split the code into basic blocks
    if not(0 in labels):
        entry_lbl=get_fresh_label()
        labels[0]=entry_lbl
    BBs=[]
    fwd_incoming={}
    pc=0
    while pc <= len(instrs):
        if pc in labels:
            # New basic block
            lbl=labels[pc]
            incoming=[]
            if pc!=0:
                incoming.append(BBs[-1]['lbl'])
            if lbl in fwd_incoming:
                for ilbl in fwd_incoming[lbl]:
                    incoming.append(ilbl)
            BBs.append({'pc':pc,'lbl':lbl,'incoming':incoming})
        if pc==len(instrs): pc=pc+1; continue
        instr = instrs[pc].replace(',',' ').replace('(',' ').replace(')',' ')
        toks = instr.split()
        if toks[0] in ['beq','bne','b','B','bne','BNE','BEQ']:
            tgtlbl='lbl_'+toks[1]
            if not(tgtlbl in fwd_incoming):
                fwd_incoming[tgtlbl]=[]
            fwd_incoming[tgtlbl].append(BBs[-1]['lbl'])
            if not((pc+1) in labels):
                labels[pc+1]=get_fresh_label()
        pc=pc+1
    # Generate code
    src=''
    pc=0
    for i in range(len(BBs)):
        assert(BBs[i]['pc'] == pc)
        src=src+BBs[i]['lbl']+':;\n'
        # Setup registers, generate phi nodes
        regs={}
        if pc==0:
            for r in reg_init:
                regs[r]=reg_init[r]
        else:
            rns=[]
            iidxs=[]
            for j in range(len(BBs)):
                if BBs[j]['lbl'] in BBs[i]['incoming']:
                    iidxs.append(j)
                    for r in BBs[j]['regs']:
                        if not(r in rns):
                            rns.append(r)
            assert(len(iidxs)>0)
            if len(iidxs)>1:
                for r in rns:
                    if r==('cmp','eq'): continue
                    raise Exception('Unsupport phi node operations')
            else:
                for r in rns:
                    regs[r]=BBs[iidxs[0]]['regs'][r]
        BBs[i]['regs']=regs
        while (pc<len(instrs)) and ((i==len(BBs)-1) or (pc<BBs[i+1]['pc'])):
            instr = instrs[pc].replace(',',' ').replace('(',' ').replace(')',' ')
            instr = instr.replace('[',' ').replace(']',' ')
            toks = instr.split()
            did_branch=False
            if arch == 'PTX':
                if toks[0] == 'add': src = src+ptx_addi(regs,toks)
                elif toks[0] == 'beq': src = src+ptx_beq(pc,regs,labels,toks); did_branch=True
                elif toks[0] == 'bne': src = src+ptx_bne(pc,regs,labels,toks); did_branch=True
                elif toks[0] == 'goto': src = src+ptx_goto(pc,regs,labels,toks); did_branch=True
                # loads
                elif 'ld.acquire.' in toks[0]: src = src+ptx_ld_(regs,toks)
                elif 'ld.relaxed.' in toks[0]: src = src+ptx_ld_(regs,toks)
                # elif toks[0] == 'ld.acquire.sys': src = src+ptx_ld_acquire_sys(regs,toks)
                # elif toks[0] == 'ld.relaxed.sys': src = src+ptx_ld_relaxed_sys(regs,toks)
                # elif toks[0] == 'ld.acquire.cta': src = src+ptx_ld_acquire_cta(regs,toks)
                # elif toks[0] == 'ld.relaxed.cta': src = src+ptx_ld_relaxed_cta(regs,toks)
                elif toks[0] == 'ld.weak': src = src+ptx_ld_weak(regs,toks)
                # load to register
                elif toks[0] == 'ld': src = src+ptx_li(regs,toks)
                elif toks[0] == 'li': src = src+ptx_li(regs,toks)

                
                # stores
                elif 'st.release.' in toks[0]: src = src+ptx_st_(regs,toks)
                elif 'st.relaxed.' in toks[0]: src = src+ptx_st_(regs,toks)
                # elif toks[0] == 'st.release.sys': src = src+ptx_st_release_sys(regs,toks)
                # elif toks[0] == 'st.relaxed.sys': src = src+ptx_st_relaxed_sys(regs,toks)
                # elif toks[0] == 'st.release.cta': src = src+ptx_st_release_cta(regs,toks)
                # elif toks[0] == 'st.relaxed.cta': src = src+ptx_st_relaxed_cta(regs,toks)
                elif toks[0] == 'st.weak': src = src+ptx_st_weak(regs,toks)
                
                # atomic functions
                elif '.add' in toks[0] and 'red.' in toks[0]: src = src+ptx_add_red(regs,toks)
                elif '.add' in toks[0]: src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.acq_rel.gpu.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.acq_rel.cta.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.acquire.gpu.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.acquire.cta.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.release.gpu.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.relaxed.gpu.add' : src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'red.acq_rel.gpu.add' : src = src+ptx_add_red(regs,toks)
                # elif toks[0] == 'red.acq_rel.sys.add' : src = src+ptx_add_red(regs,toks)
                # elif toks[0] == 'red.acq_rel.cta.add' : src = src+ptx_add_red(regs,toks)
                
                elif '.sub' in toks[0] and 'red.' in toks[0]: src = src+ptx_add_red(regs,toks)
                elif '.sub' in toks[0]: src = src+ptx_add_(regs,toks)
                # elif toks[0] == 'atom.acq_rel.gpu.sub' : src = src+ptx_sub_(regs,toks)
                # elif toks[0] == 'atom.acq_rel.cta.sub' : src = src+ptx_sub_(regs,toks)
                # elif toks[0] == 'red.acq_rel.gpu.sub' : src = src+ptx_sub_red(regs,toks)
                elif toks[0] == 'atom.acq_rel.gpu.cas' : src = src+ptx_cas(regs,toks)
                elif toks[0] == 'atom.acq_rel.cta.cas' : src = src+ptx_cas(regs,toks)
                elif toks[0] == 'atom.relaxed.gpu.cas' : src = src+ptx_cas(regs,toks)
                elif toks[0] == 'atom.relaxed.cta.cas' : src = src+ptx_cas(regs,toks)
                # elif toks[0] == 'red.acq_rel.gpu.cas' : src = src+ptx_red_acqrel_cas_gpu(regs,toks)
                elif toks[0] == 'atom.acq_rel.gpu.exch' : src = src+ptx_exch(regs,toks)
                elif toks[0] == 'atom.acq_rel.cta.exch' : src = src+ptx_exch(regs,toks)
                elif toks[0] == 'atom.relaxed.gpu.exch' : src = src+ptx_exch(regs,toks)
                elif toks[0] == 'atom.relaxed.cta.exch' : src = src+ptx_exch(regs,toks)
                # elif toks[0] == 'red.acq_rel.gpu.exch' : src = src+ptx_red_acqrel_exch_gpu(regs,toks)
                
                # # barriers
                elif 'bar.' in toks[0] : src = src+ptx_bar_(regs,toks,pid)
                # elif toks[0] == 'bar.cta.sync' : src = src+ptx_bar_sync(regs,toks)
                # elif toks[0] == 'bar.cta.arrive' : src = src+ptx_bar_arrive(regs,toks)
                
                # #fence
                elif 'fence.sc' in toks[0] : src = src+ptx_fence(regs,toks)
                # elif toks[0] == 'fence.sc.gpu' : src = src+ptx_fence.sc.gpu(regs,toks)
                # elif toks[0] == 'fence.sc.cta' : src = src+ptx_fence.sc.cta(regs,toks)
                elif 'fence.acq_rel' in toks[0] : src = src+ptx_fence(regs,toks)
                # elif toks[0] == 'fence.acq_rel.gpu' : src = src+ptx_fence.acq_rel.gpu(regs,toks)
                # elif toks[0] == 'fence.acq_rel.cta' : src = src+ptx_fence.acq_rel.cta(regs,toks)
                
                elif re.fullmatch(r'\s*P\d+@cta\s*\d+,\s*gpu\s\d+\s*',instrs[pc]): src=src+ptx_thr_data(instrs[pc],pid)
                else:
                    raise Exception('Unknown assembly mnemonic: '+toks[0])
            pc=pc+1
        # if not(did_branch) and (i+1<len(BBs)):
        #     src=src+'  goto label '+BBs[i+1]['lbl']+';\n'
    reg_init.clear()
    for r in BBs[-1]['regs']:
        reg_init[r]=BBs[-1]['regs'][r]
    return src

def parse_code(reg_init,common_reg_init,code,arch):
    codes = split_codes(code)
    c_codes = []
    pid=0
    for c in codes:
        if not(pid in reg_init):
            reg_init[pid]={}
        ri = reg_init[pid]
        for r in common_reg_init:
            ri[r] = common_reg_init[r]
        c_codes.append(instrs_to_c(ri,c,arch,pid))
        pid=pid+1
    return c_codes

def get_atom_gvar(pid,reg,val,op):
    match = re.match(r'P(\d+):(.+)',val)
    op = 'ne' if '!=' in op else 'eq'
    if match:
        proc = match.group(1)
        treg = match.group(2)
        val = ''+proc+"_"+treg
    return 'atom_'+str(pid)+'_'+reg+'_'+val+'_'+op

def eval_cond(cond,atoms):
    cond = cond.strip()
    if cond == '0==0':
        condreg = get_fresh_reg()
        code = '  int '+condreg+' = (0 == 0);\n'
        return (code,condreg,'')
    if len(cond) == 0: raise Exception('Failed to parse condition.')
    if cond[0] == '(':
        cond = cond[1:]
        (code,condreg,rest) = eval_cond(cond,atoms)
        rest = rest.strip()
        if (len(rest) == 0 or rest[0] != ')'):
            raise Exception('Failed to parse condition "{0}".'.format(rest))
        rest = rest[1:]
    else:
        m = re.match('^P?(\\d+):\\s*([^=\\s]+)\\s*==\\s*([^/\\)\\s]+)((?:.|\n)*)$',cond)
        if m != None: # Register
            pid=int(m.group(1))
            reg=m.group(2)
            val=m.group(3)
            rest = m.group(4)
            op = '=='
            if not((pid,reg,val,op) in atoms):
                atoms.append((pid,reg,val,op))
            av = get_atom_gvar(pid,reg,val,op)
            condreg = get_fresh_reg()
            code = '  int '+condreg+' = atomic_load_explicit(&'+get_atom_gvar(pid,reg,val,op)+', memory_order_acquire);\n'
        else:
            m1 = re.match('^P?(\\d+):\\s*([^=\\s]+)\\s*!=\\s*([^/\\)\\s]+)((?:.|\n)*)$',cond)
            if m1 != None:
                pid=int(m1.group(1))
                op = '!='
                reg=m1.group(2)
                val=m1.group(3)
                rest=m1.group(4)
                if not((pid,reg,val,op) in atoms):
                    atoms.append((pid,reg,val,op))
                condreg = get_fresh_reg()
                code = '  int '+condreg+' = atomic_load_explicit(&'+get_atom_gvar(pid,reg,val,op)+', memory_order_acquire);\n'
            else:
                m = re.match('\\[?([^=\\s\\]]+)\\]?\\s*([!=]=)\\s*([^/\\)\\s]+)((?:.|\n)*)$',cond)
                varName='var_'+m.group(1)
                var = 'vars['+str(varnumMap[varName])+']'
                op = m.group(2)
                val=m.group(3)
                rest=m.group(4)
                actval = get_fresh_reg()
                condreg = get_fresh_reg()
                try:
                    cmpval=str(int(val))
                except: # variable address
                    raise Exception("The benchmark is containing some unsupported address operations.")
    ##                varName = 'var_'+val
    ##                cmpval = '  atomic_load_explicit(&vars['+str(varnumMap[varName])+'], memory_order_acquire)'
                code = '  int '+actval+' = atomic_load_explicit(&'+var+', memory_order_acquire);\n'
                code = code+'  int '+condreg+' = (' + actval+op+cmpval+');\n'
    rest = rest.strip()
    if rest.startswith('/\\'):
        (code2,condreg2,rest) = eval_cond(rest[2:],atoms)
        condreg3 = get_fresh_reg('conj')
        code3 = code+code2+'  int '+condreg3+' = '+condreg+' & '+condreg2+';\n'
        return (code3,condreg3,rest)
    elif rest.startswith('\\/'):
        (code2,condreg2,rest) = eval_cond(rest[2:],atoms)
        condreg3 = get_fresh_reg('disj')
        code3 = code+code2+'  int '+condreg3+' = '+condreg+' | '+condreg2+';\n'
        return (code3,condreg3,rest)
    else:
        return (code,condreg,rest)

def parse_cond(quantifier,cond,reg_init):
    main_check=''
    sub_checks=[]
    atoms=[]
    (code,condreg,rest) = eval_cond(cond,atoms)
    main_check=code
    if quantifier=='exists':
        main_check=main_check+'  if ('+condreg+' == 1) assert(0);\n'
    elif quantifier=='~exists':
        main_check=main_check+'  if ('+condreg+' == 0) assert(0);\n'
        exit(0)
    else:
        assert(quantifier=='forall')
        main_check=main_check+'  if ('+condreg+' == 0) assert(0);\n'

    atom_gvars=[]
    for (pid,reg,val,op) in atoms:
        atom_gvars.append(get_atom_gvar(pid,reg,val,op))
        while len(sub_checks) <= pid: sub_checks.append('')
        if (pid in reg_init) and (reg in reg_init[pid]):
            actval = reg_init[pid][reg]
        else:
            actval=' 0'
    #    print('val\n')
 #       print(val)
        match = re.match(r'P(\d+):(.+)',val)
        if match:
            proc = match.group(1)
            treg = match.group(2)
            cmpval=reg_init[int(proc)][treg]
        else:
            try:
                cmpval=str(int(val))
            except: # variable address
                # varName = 'var_'+val
                # cmpval = '  atomic_load_explicit(&vars['+str(varnumMap[varName])+'], memory_order_acquire)'
                raise Exception("The benchmark is containing some unsupported address operations.")
        tmp = get_fresh_reg()
        sub_checks[pid] = sub_checks[pid]+'  int '+tmp+' = ('+actval+op+cmpval+');\n'
        sub_checks[pid] = sub_checks[pid]+'  atomic_store_explicit(&'+get_atom_gvar(pid,reg,val,op)+', '+tmp+', memory_order_release);\n'

    return (main_check,sub_checks,atom_gvars)

def preprocess(s):
    s = re.sub('locations\\s*\\[[^]]*\\]','',s)
    while s.find('(*') != -1:
        start=s.find('(*')
        i=start+2
        depth=1
        while (i<len(s)-1) and (0<depth):
            if s[i:i+2] == '(*':
                depth = depth+1
                i=i+2
            elif s[i:i+2] == '*)':
                depth = depth-1
                i=i+2
            else:
                i=i+1
        if depth==0:
            s=s[:start]+s[i:]
        else:
            s=s[:start]
    s = re.sub('final\\s+([^;]+);\\s*with(?:.|\n)*$','exists \\1;',s)
    return s

def litc(fname):
    f = open(fname,'r')
    s=''
    for ln in f:
        s = s+ln
    s = preprocess(s)
    s = s.strip()
    if s.startswith('PTX'):
        arch='PTX'
    else:
        raise Exception("Failed to parse architecture. Should be 'PTX'.")
    # m = re.fullmatch('[^{]*\\{([^}]*)\\}\\s*;?[^;]*;([^~]*)~?\\s*(exists|forall)((?:.|\n)*)',s)
    m = re.fullmatch('[^{]*\\{([^}]*)\\}\\s*;?([^~]*)~?\\s*(exists|forall)((?:.|\n)*)',s)
    if m == None:
        raise Exception("Failed to parse litmus test.")
    init = m.group(1)
    code = m.group(2)
    quantifier = m.group(3)
    condition = m.group(4)
    (vs,rs,crs) = parse_init(init)
    c_codes = parse_code(rs,crs,code,arch)
    (main_cond_check,sub_cond_checks,atom_gvars) = parse_cond(quantifier,condition,rs)
   
    ir='#include <pthread.h>\n'
    ir=ir+'#include <stdatomic.h>\n'
    ir=ir+'#include <assert.h>\n\n'
    ir=ir+'''void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_memory_scope_system()           ;
void __VERIFIER_weak_access()                   ;
void __VERIFIER_ret_CAS()                       ;
void __VERIFIER_groupsize(int localWorkSize)    ;\n'''
##    for v in vs:
##        ir = ir+'atomic_int '+v+'; \n';
    ir = ir+'atomic_int vars['+str(len(varnumMap))+']; \n';  
    for v in atom_gvars:
        ir = ir+'atomic_int '+v+'; \n'
    ir=ir+'\n'
    for v in barriers:
        ir = ir+'pthread_barrier_t '+barriers[v]+'; \n'
    ir=ir+'\n'
    ir=ir+'\n'
    
    pid=0
    for lc in c_codes:
        ir=ir+'void *t'+str(pid)+'(void *arg){\n'
        ir=ir+lc
        if pid < len(sub_cond_checks):
            ir=ir+sub_cond_checks[pid]        
        ir=ir+'  return NULL;\n}\n\n'
        ir=ir+'\n\n\n'
        pid=pid+1
    ir=ir+'int main(int argc, char **argv){\n'
    pid=0
    tds=[]
    var_init = ''
    for v in vs:
        val = vs[v]
        try: # number
            init_val=str(int(val))
            var_init = var_init + '  atomic_init(&' + v + ', ' +init_val+ ');\n' 
        except:
            raise Exception("The benchmark is containing some unsupported address operations.")
##            init_val = 'atomic_load_explicit(&'+val+', memory_order_acquire)'
##            var_init = var_init + '  atomic_init(&' + v + ', ' +init_val+ ');\n' 
    ir = ir + var_init
    pid=0
    for _ in c_codes:
        ir=ir+'  pthread_t thr'+str(pid)+'; \n'
        pid=pid+1
    ir = ir + '\n'
    for v in barriers:
        ir = ir +'''if (pthread_barrier_init(&'''+barriers[v]+''', NULL, '''+ str(len(barriers_init[v]))+''')) {
            printf("Could not create a barrier\\n");
            return -1;
        }\n'''
    ir=ir+'\n'
    
    
    pid=0
    for _ in c_codes:
        ir=ir+'  pthread_create(&thr'+str(pid)+', NULL , t'+str(pid)+', NULL);\n'
        pid=pid+1
    ir = ir + '\n'
    
    pid=0
    for _ in c_codes:
        ir=ir+'  pthread_join(thr'+str(pid)+',NULL);\n'
        pid=pid+1
    ir = ir + '\n'
    
    ir=ir+main_cond_check
    ir=ir+'  return 0;\n'
    ir=ir+'}'
    return ir

if (len(sys.argv) != 2):
    print("Usage: {0} <LITMUS TEST>".format(sys.argv[0]))
    exit(1)

# litc(sys.argv[1])
print(litc(sys.argv[1]))
