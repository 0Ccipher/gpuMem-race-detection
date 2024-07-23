import re
import subprocess
import shutil
import sys
import tempfile
import os
import time
import argparse
import multiprocessing

atomic_functions = [
        'atomic_is_lock_free',
        'atomic_store',
        'atomic_store_explicit',
        'atomic_load',
        'atomic_load_explicit',
        'atomic_exchange',
        'atomic_exchange_explicit',
        'atomic_compare_exchange_strong',
        'atomic_compare_exchange_strong_explicit',
        'atomic_compare_exchange_weak',
        'atomic_compare_exchange_weak_explicit',
        'atomic_fetch_add',
        'atomic_fetch_add_explicit',
        'atomic_fetch_sub',
        'atomic_fetch_sub_explicit',
        'atomic_fetch_or',
        'atomic_fetch_or_explicit',
        'atomic_fetch_xor',
        'atomic_fetch_xor_explicit',
        'atomic_fetch_and',
        'atomic_fetch_and_explicit',
        'atomic_flag_test_and_set',
        'atomic_flag_test_and_set_explicit',
        'atomic_flag_clear',
        'atomic_flag_clear_explicit',
        'atomic_thread_fence',
        'atomic_signal_fence'
    ]
line_dict = {}
line_to_scopeLie ={}
rcount = 0
temp_dir = 'temp' 
cfilename = None
already_changed = []
attempts = 100

def isAtomicFun(line):
    patterns = [re.compile(r'\b' + re.escape(func) + r'\b') for func in atomic_functions]
    for pattern in patterns:
        if pattern.search(line):
            return True
    return False

def read_file_to_dict(filename):
    current_scope = 0
    with open(filename, 'r') as file:
        for i, line in enumerate(file, 1):
            line_dict[i] = line
            if "scope" in line:
                current_scope=i
                continue
            if isAtomicFun(line):
                line_to_scopeLie[i]=current_scope
                print(i,current_scope)
    return line_dict
    
def grep_races(lines,start):
    races = []
    start_capture = False
    for line in lines:
        if "Races Detected:" in line:
            start_capture = True
            continue
        if "Total wall-clock time" in line:
            break
        if start_capture:
            races.append(line.strip())
    if start_capture == False:
        return []
    return races

def checkrepair(filename,races):
    global rcount
    newScope = {}
    repairs = 0
    naraces = False
    for race in races:
        race=race.replace('[','')
        race=race.replace(']','')
        line = race.split("-")
        racey1=int(line[0].split("\t")[0].split(".")[1])
        scope1=line[1].split(",")[0]
        racey2=int(line[0].split("\t")[1].split(".")[1])
        scope2=line[1].split(",")[1]
        print("Extracted",racey1,racey2,scope1,scope2)
        if scope1==scope2 and scope2=='SYS':
            print("Non-atomic race")
            naraces = True
            continue
        if scope1==scope2 and scope1=='WG':
            if racey1 in newScope:
                if newScope[racey1] != 'DV':
                    print(f'Two different fixes for Line{racey1} : DV and {newScope[racey1]}')
                    print(f' in file {filename}')
                    return                
            if racey2 in newScope:
                if newScope[racey2] != 'DV':
                    print(f'Two different fixes for Line{racey2} : DV and {newScope[racey2]}')
                    print(f' in file {filename}')
                    return
            if racey2 in newScope or racey1 in newScope:
                continue
            newScope[racey1] = 'DV'
            newScope[racey2] = 'DV'
            repairs = repairs + 1
            continue
        if scope1!=scope2:
            if racey1 in newScope:
                if newScope[racey1] != 'DV':
                    print(f'Two different fixes for Line{racey1} : DV and {newScope[racey1]}')
                    print(f' in file {filename}')
                    return                
            if racey2 in newScope:
                if newScope[racey2] != 'DV':
                    print(f'Two different fixes for Line{racey2} : DV and {newScope[racey2]}')
                    print(f' in file {filename}')
                    return
            if racey2 in newScope or racey1 in newScope:
                continue
            newScope[racey1] = 'DV'
            newScope[racey2] = 'DV'
            repairs = repairs + 1
    if repairs ==0:
        if naraces == True:
            print("Only Non-Atomic Races ")
        print(f'No Scope to Repair-in {filename}')
        return
    rcount=rcount+1
    repair(filename,newScope)

def repair(filename,newScope):
    global rcount
    if rcount+1 >= attempts:
        print("\n***Number of repairs exceeded*****\n")
        return
    print(f"\n\n******Repair {rcount}---Repairing following lines from {filename}--")
    for l,nscope in newScope.items():
        print(f'L.{l} : {nscope}')
    n_file = 'r'+str(rcount)+'_'+cfilename
    dest_file = os.path.join(temp_dir, n_file)
    print(f"Repairing and storing into {dest_file}")
    madechanges = False
    for line in newScope:
        linescopeid = line_to_scopeLie[line]
        print(f"changed scope of line {linescopeid}")
        if newScope[line]=='DV' and "work_group" in line_dict[linescopeid]:
            nscope = line_dict[linescopeid]
            nscope = nscope.replace('work_group','device')
            if line in already_changed:
                continue
            already_changed.append(line)
            line_dict[linescopeid] = nscope
            madechanges=True
    if madechanges==False:
        print("No new rapirs possible - Chaned the lines already.")
        return
    with open(dest_file, 'w') as file:
        for key, value in line_dict.items():
            file.write(value)
    print("Repair Done")
    check(dest_file)

def check(dest_file):
    print(f"\n**Checking races in {dest_file}**\n")
    res = None
    try:
        cmd = ['genmc', '--wb', '--check-consistency-type=full', '--check-consistency-point=step', '--stop-on-race','--nthreads=8', dest_file]
        out = subprocess.check_output(cmd,stderr = subprocess.STDOUT)
    except subprocess.CalledProcessError as e:
        if e.returncode != 42:
            res['failure'] = 'genmc'
            res['tracecount'] = -1
            return res
        # allow = True
        out = e.output
    out = out.decode()
    lines = out.split("\n")
    races = grep_races(lines, "Number of complete executions explored: ")
    if (out.find('Assertion violation:') >= 0):
        print("Assertion Violation")
        return
    if len(races) == 0:
        print("No Race Detected")
        return
    if len(races) > 0:
        print("Races Dected:")
        for r in races:
            print(f'\t{r}')
        checkrepair(dest_file,races)

def main(filename,nrepairs):
    # filename = '/home/lab/Downloads/tools/gpuMem-race-detection/input/ScoRD/microbenchmarks/3race_interblock_blklock_waw.c'  # Replace with your file name
    # for line_no, content in line_dict.items():
    #     print(f'{line_no}: {content}')
    # return
    if nrepairs != -1:
        attempts = nrepairs
    if not os.path.exists(temp_dir):
        os.makedirs(temp_dir)
    global cfilename
    cfilename = os.path.basename(filename)
    dest_file = os.path.join(temp_dir, cfilename)
    print(f'Copy {os.path.basename(filename)} to {dest_file}')
    shutil.copy(filename, dest_file)

    line_dict = read_file_to_dict(dest_file)

    res = None
    try:
        cmd = ['genmc', '--wb', '--check-consistency-type=full', '--check-consistency-point=step', '--stop-on-race','--nthreads=8', dest_file]
        out = subprocess.check_output(cmd,stderr = subprocess.STDOUT)
    except subprocess.CalledProcessError as e:
        if e.returncode != 42:
            res['failure'] = 'genmc'
            res['tracecount'] = -1
            return res
        # allow = True
        out = e.output
    out = out.decode()
    lines = out.split("\n")
    races = grep_races(lines, "Number of complete executions explored: ")
    if (out.find('Assertion violation:') >= 0):
        print("Assertion Violation")
        return
    if len(races) == 0:
        print("No Race Detected")
        return
    if len(races) > 0:
        print("Races Dected:")
        for r in races:
            print(f'\t{r}')
        checkrepair(dest_file,races)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument('-r', dest='repairs', metavar='N', type=int,
                        default=int(-1), help='Number of repairs')
    parser.add_argument('-test', dest='file',help='Enter the file')
    args = parser.parse_args()
    if args.file:
        main(args.file,args.repairs)
    else:
        parser.print_help()
   
    # main()
