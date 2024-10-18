
echo "table barrier-div start"

/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection histogram-4-2.c  > res1.out 2>&1 
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection histogram-6-4.c  > res2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full  --disable-race-detection tr-xf-barrier4-2.c  > res3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection  tr-xf-barrier6-4.c  > res4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection  arrayfire-sm.c  > res5.out 2>&1 
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection  arrayfire-wr.c  > res6.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection  gklee-test-1.c  > res7.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --disable-race-detection  gklee-test-2.c  > res8.out 2>&1


echo "table barrier-div done"
