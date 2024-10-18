python3 check_repair.py -test bench-1.c > res1.out 2>&1
python3 check_repair.py -test bench-2.c > res2.out 2>&1
python3 check_repair.py -test bench-3.c > res3.out 2>&1
python3 check_repair.py -test bench-4.c > res4.out 2>&1
# python3 check_repair.py -test graph_connectivity.c > res5.out 2>&1
# python3 check_repair.py -test gcol_kernel.c > res6.out 2>&1
# python3 check_repair.py -test mm_kernel.c > res7.out 2>&1
# python3 check_repair.py -test 1dconv_kernel.c > res8.out 2>&1