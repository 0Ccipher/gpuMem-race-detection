echo "Executing Table-2 Benchmarks"

echo "1dconv_kernel-12"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-12.c > 1dconv_kernel-12.out 2>&1
echo "1dconv_kernel-15"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-15.c > 1dconv_kernel-15.out 2>&1
echo "1dconv_kernel-20"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-20.c > 1dconv_kernel-20.out 2>&1

echo "1dconv_kernel-25"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-25.c > 1dconv_kernel-25.out 2>&1

echo "graph_connectivity-4-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  graph_connectivity-8r.c > graph_connectivity-8.out 2>&1

echo "graph_connectivity-5-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  graph_connectivity-10r.c > graph_connectivity-10.out 2>&1

echo "graph_connectivity-7-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  graph_connectivity-14r.c > graph_connectivity-14.out 2>&1

echo "graph_connectivity-10-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  graph_connectivity-20r.c > graph_connectivity-20.out 2>&1

echo "graph_connectivity-15-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  graph_connectivity-30r.c > graph_connectivity-30.out 2>&1

echo "gcol_kernel-4-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  gcol_kernel-4-2.c > gcol_kernel-4-2.out 2>&1

echo "gcol_kernel-5-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  gcol_kernel-5-2.c > gcol_kernel-5-2.out 2>&1

echo "gcol_kernel-7-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  gcol_kernel-7-2.c > gcol_kernel-7-2.out 2>&1

echo "gcol_kernel-10-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  gcol_kernel-10-2.c > gcol_kernel-10-2.out 2>&1

echo "gcol_kernel-15-2"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  gcol_kernel-15-2.c > gcol_kernel-15-2.out 2>&1

echo "mm_kernel-4-3"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  mm_kernel-4-3.c > mm_kernel-4-3.out 2>&1

echo "mm_kernel-5-3"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  mm_kernel-5-3.c > mm_kernel-5-3.out 2>&1

echo "mm_kernel-7-3"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  mm_kernel-7-3.c > mm_kernel-7-3.out 2>&1

echo "mm_kernel-10-3"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  mm_kernel-10-3.c > mm_kernel-10-3.out 2>&1

echo "mm_kernel-15-3"
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  mm_kernel-15-3.c > mm_kernel-15-3.out 2>&1

echo "Table-2 Benchmarks -Done"
