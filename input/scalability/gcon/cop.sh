echo "gcon start"

/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-1.c > res1.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-2.c > res2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-3.c > res3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-4.c > res4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-5.c > res5.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-6.c > res6.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-7.c > res7.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-8.c > res8.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-9.c > res9.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-10.c > res10.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-11.c > res11.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-12.c > res12.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-13.c > res13.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-14.c > res14.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-15.c > res15.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-16.c > res16.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-17.c > res17.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-18.c > res18.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-19.c > res19.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-20.c > res20.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-21.c > res21.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-22.c > res22.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-23.c > res23.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-24.c > res24.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-25.c > res25.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-26.c > res26.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-27.c > res27.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-28.c > res28.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-29.c > res29.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence graph_connectivity-30.c > res30.out 2>&1

echo "gcon end"
