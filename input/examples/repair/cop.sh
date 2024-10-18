python3 check_repair.py -test /home/lab/Downloads/tools/gpuMem-race-detection/input/ScoRD/graph_connectivity.c > res1.out 2>&1
python3 check_repair.py -test /home/lab/Downloads/tools/gpuMem-race-detection/input/ScoRD/gcol_kernel.c > res2.out 2>&1
python3 check_repair.py -test /home/lab/Downloads/tools/gpuMem-race-detection/input/ScoRD/mm_kernel.c > res3.out 2>&1
python3 check_repair.py -test /home/lab/Downloads/tools/gpuMem-race-detection/input/ScoRD/1dconv_kernel.c > res4.out 2>&1
