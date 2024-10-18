# #!/bin/bash

# # Source file
# src_file="1dconv_kernel.c"

# for i in {1..30}
# do
#   cp "$src_file" "1dconv_kernel-$i.c"
# done

# echo "Copied $src_file 30 times with names file-1 to file-30."

echo "1dconv start"

/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-1.c  > res1.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-2.c  > res2.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-3.c  > res3.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-4.c  > res4.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-5.c  > res5.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-6.c  > res6.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-7.c  > res7.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-8.c  > res8.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-9.c  > res9.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-10.c  > res10.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-11.c  > res11.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-12.c  > res12.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-13.c  > res13.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-14.c  > res14.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-15.c  > res15.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-16.c  > res16.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-17.c  > res17.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-18.c  > res18.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-19.c  > res19.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-20.c  > res20.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-21.c  > res21.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-22.c  > res22.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-23.c  > res23.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-24.c  > res24.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-25.c  > res25.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-26.c  > res26.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-27.c  > res27.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-28.c  > res28.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-29.c  > res29.out 2>&1
/usr/bin/time -v genmc --wb --check-consistency-point=step --check-consistency-type=full --nthreads=11 --stop-on-race --disable-barrier-divergence  1dconv_kernel-30.c  > res30.out 2>&1

echo "1dconv done"