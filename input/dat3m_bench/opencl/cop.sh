
echo "table 1 start"

/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-caslock-4-2.c  >> caslock-4-2.out 2>&1 
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-caslockAcqRx-4-2.c  >> caslockAcqRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-caslockAcqRx-6-4.c  >> caslockAcqRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-caslockRelRx-4-2.c  >> caslockRelRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-caslockRelRx-6-4.c  >> caslockRelRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ticketlock-4-2.c  >> ticketlock-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ticketlock-AcqRx-4-2.c  >> ticketlock-AcqRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ticketlock-AcqRx-6-4.c  >> ticketlock-AcqRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ticketlock-RelRx-4-2.c  >> ticketlock-RelRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ticketlock-RelRx-6-4.c  >> ticketlock-RelRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ttaslock-3-2.c  >> ttaslock-3-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ttaslock-AcqRx-4-2.c  >> ttaslock-AcqRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ttaslock-AcqRx-6-4.c  >> ttaslock-AcqRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ttaslock-RelRx-4-2.c  >> ttaslock-RelRx-4-2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-ttaslock-RelRx-6-4.c  >> ttaslock-RelRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-xf-barrier4-3.c  >> xf-barrier4-3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-xf-barrierAcqRx-4-3.c  >> xf-barrierAcqRx-4-3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-xf-barrierAcqRx-6-4.c  >> xf-barrierAcqRx-6-4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-xf-barrierRelRx-4-3.c  >> xf-barrierRelRx-4-3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence tr-xf-barrierRelRx-6-4.c  >> xf-barrierRelRx-6-4.out 2>&1

echo "table 1 done"
