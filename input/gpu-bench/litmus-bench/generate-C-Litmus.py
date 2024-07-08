#!/usr/bin/python3

# Copyright (C) 2022 Omkar
# Based on source code of Carl Leonardsson

import datetime
import subprocess
import sys
import tempfile
import os

curDir = os.getcwd()

CBIN = curDir + '/C-litmus'
LITCBIN = curDir + '/litmus-to-C.py'
PYTHONBIN = 'python3'
LITMUSDIR= curDir + '/litmus-tests'
EXPECTEDLISTFILE= curDir+'/cc.herd.results.txt'

LOGFILENAME='generate-C-Litmus.log'

def get_expected(fname):
    f = open(fname,'r')
    l=[]
    for ln in f:
        ln = ln.strip()
        if len(ln) and not(ln[0] == '#'):
            #print(ln)
            [tst,exp] = ln.split()
            assert(exp == 'Allow' or exp == 'Forbid')
            l.append({'tstname':tst,'expect allow':(exp=='Allow')})
    f.close()
    return l

def res_to_string(tst):
    s=tst['tstname']+' '
    if not('litc done' in tst):
        s=s+'FAILURE: '
        if 'failure' in tst:
            s=s+tst['failure']
        else:
            s=s+'(unknown)'
        return s
    s=s+' is translated to C'
    return s

def runall():
    logfile=open(LOGFILENAME,'w')
    tests = get_expected(EXPECTEDLISTFILE)
    n=0
    for tst in tests:
        n=n+1
        try:
            out=subprocess.check_output([PYTHONBIN,LITCBIN,LITMUSDIR+'/'+tst['tstname']+'.litmus'],stderr=subprocess.STDOUT).decode()
            litirfile=open(CBIN+'/'+tst['tstname']+'.c','w')
            litirfile.write(out)
            litirfile.flush()
            tst['litc done']=True
        except subprocess.CalledProcessError:
            tst['failure']='litc'
            continue
        finally:
            #litirfile.close()
            print('{0:4}: '.format(n),end='')
            print(res_to_string(tst))
            logfile.write(res_to_string(tst)+'\n')
    logfile.close()

runall()

