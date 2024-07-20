#include <pthread.h>
#include <stdatomic.h>
#include <assert.h>

void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_memory_scope_system()           ;
void __VERIFIER_weak_access()                   ;
void __VERIFIER_ret_CAS()                       ;
void __VERIFIER_groupsize(int localWorkSize)    ;
atomic_int vars[9]; 
atomic_int atom_9_r0_1_eq; 
atomic_int atom_9_r1_0_eq; 
atomic_int atom_9_r2_0_eq; 
atomic_int atom_9_r3_0_eq; 
atomic_int atom_9_r4_0_eq; 
atomic_int atom_9_r5_0_eq; 
atomic_int atom_9_r6_0_eq; 
atomic_int atom_9_r7_0_eq; 
atomic_int atom_9_r8_0_eq; 
atomic_int atom_10_r0_0_eq; 
atomic_int atom_10_r1_1_eq; 
atomic_int atom_10_r2_0_eq; 
atomic_int atom_10_r3_0_eq; 
atomic_int atom_10_r4_0_eq; 
atomic_int atom_10_r5_0_eq; 
atomic_int atom_10_r6_0_eq; 
atomic_int atom_10_r7_0_eq; 
atomic_int atom_10_r8_0_eq; 
atomic_int atom_11_r0_0_eq; 
atomic_int atom_11_r1_0_eq; 
atomic_int atom_11_r2_1_eq; 
atomic_int atom_11_r3_0_eq; 
atomic_int atom_11_r4_0_eq; 
atomic_int atom_11_r5_0_eq; 
atomic_int atom_11_r6_0_eq; 
atomic_int atom_11_r7_0_eq; 
atomic_int atom_11_r8_0_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_1_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_0_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_12_r7_0_eq; 
atomic_int atom_12_r8_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_0_eq; 
atomic_int atom_13_r2_0_eq; 
atomic_int atom_13_r3_0_eq; 
atomic_int atom_13_r4_1_eq; 
atomic_int atom_13_r5_0_eq; 
atomic_int atom_13_r6_0_eq; 
atomic_int atom_13_r7_0_eq; 
atomic_int atom_13_r8_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_0_eq; 
atomic_int atom_14_r2_0_eq; 
atomic_int atom_14_r3_0_eq; 
atomic_int atom_14_r4_0_eq; 
atomic_int atom_14_r5_1_eq; 
atomic_int atom_14_r6_0_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_14_r8_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_0_eq; 
atomic_int atom_15_r3_0_eq; 
atomic_int atom_15_r4_0_eq; 
atomic_int atom_15_r5_0_eq; 
atomic_int atom_15_r6_1_eq; 
atomic_int atom_15_r7_0_eq; 
atomic_int atom_15_r8_0_eq; 
atomic_int atom_16_r0_0_eq; 
atomic_int atom_16_r1_0_eq; 
atomic_int atom_16_r2_0_eq; 
atomic_int atom_16_r3_0_eq; 
atomic_int atom_16_r4_0_eq; 
atomic_int atom_16_r5_0_eq; 
atomic_int atom_16_r6_0_eq; 
atomic_int atom_16_r7_1_eq; 
atomic_int atom_16_r8_0_eq; 
atomic_int atom_17_r0_0_eq; 
atomic_int atom_17_r1_0_eq; 
atomic_int atom_17_r2_0_eq; 
atomic_int atom_17_r3_0_eq; 
atomic_int atom_17_r4_0_eq; 
atomic_int atom_17_r5_0_eq; 
atomic_int atom_17_r6_0_eq; 
atomic_int atom_17_r7_0_eq; 
atomic_int atom_17_r8_1_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(2);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[3], 1, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[4], 1, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[5], 1, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[6], 1, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[7], 1, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[8], 1, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v8_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v10_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v12_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v14_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v324 = (v2_r0==1);
  atomic_store_explicit(&atom_9_r0_1_eq, v324, memory_order_release);
  int v325 = (v4_r1==0);
  atomic_store_explicit(&atom_9_r1_0_eq, v325, memory_order_release);
  int v326 = (v6_r2==0);
  atomic_store_explicit(&atom_9_r2_0_eq, v326, memory_order_release);
  int v327 = (v8_r3==0);
  atomic_store_explicit(&atom_9_r3_0_eq, v327, memory_order_release);
  int v328 = (v10_r4==0);
  atomic_store_explicit(&atom_9_r4_0_eq, v328, memory_order_release);
  int v329 = (v12_r5==0);
  atomic_store_explicit(&atom_9_r5_0_eq, v329, memory_order_release);
  int v330 = (v14_r6==0);
  atomic_store_explicit(&atom_9_r6_0_eq, v330, memory_order_release);
  int v331 = (v16_r7==0);
  atomic_store_explicit(&atom_9_r7_0_eq, v331, memory_order_release);
  int v332 = (v18_r8==0);
  atomic_store_explicit(&atom_9_r8_0_eq, v332, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v20_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v333 = (v22_r0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v333, memory_order_release);
  int v334 = (v20_r1==1);
  atomic_store_explicit(&atom_10_r1_1_eq, v334, memory_order_release);
  int v335 = (v24_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v335, memory_order_release);
  int v336 = (v26_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v336, memory_order_release);
  int v337 = (v28_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v337, memory_order_release);
  int v338 = (v30_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v338, memory_order_release);
  int v339 = (v32_r6==0);
  atomic_store_explicit(&atom_10_r6_0_eq, v339, memory_order_release);
  int v340 = (v34_r7==0);
  atomic_store_explicit(&atom_10_r7_0_eq, v340, memory_order_release);
  int v341 = (v36_r8==0);
  atomic_store_explicit(&atom_10_r8_0_eq, v341, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v38_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v342 = (v42_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v342, memory_order_release);
  int v343 = (v40_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v343, memory_order_release);
  int v344 = (v38_r2==1);
  atomic_store_explicit(&atom_11_r2_1_eq, v344, memory_order_release);
  int v345 = (v44_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v345, memory_order_release);
  int v346 = (v46_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v346, memory_order_release);
  int v347 = (v48_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v347, memory_order_release);
  int v348 = (v50_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v348, memory_order_release);
  int v349 = (v52_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v349, memory_order_release);
  int v350 = (v54_r8==0);
  atomic_store_explicit(&atom_11_r8_0_eq, v350, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v56_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v351 = (v62_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v351, memory_order_release);
  int v352 = (v58_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v352, memory_order_release);
  int v353 = (v60_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v353, memory_order_release);
  int v354 = (v56_r3==1);
  atomic_store_explicit(&atom_12_r3_1_eq, v354, memory_order_release);
  int v355 = (v64_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v355, memory_order_release);
  int v356 = (v66_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v356, memory_order_release);
  int v357 = (v68_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v357, memory_order_release);
  int v358 = (v70_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v358, memory_order_release);
  int v359 = (v72_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v359, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v74_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v360 = (v82_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v360, memory_order_release);
  int v361 = (v76_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v361, memory_order_release);
  int v362 = (v78_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v362, memory_order_release);
  int v363 = (v80_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v363, memory_order_release);
  int v364 = (v74_r4==1);
  atomic_store_explicit(&atom_13_r4_1_eq, v364, memory_order_release);
  int v365 = (v84_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v365, memory_order_release);
  int v366 = (v86_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v366, memory_order_release);
  int v367 = (v88_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v367, memory_order_release);
  int v368 = (v90_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v368, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v92_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v98_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v102_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v106_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v369 = (v102_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v369, memory_order_release);
  int v370 = (v94_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v370, memory_order_release);
  int v371 = (v96_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v371, memory_order_release);
  int v372 = (v98_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v372, memory_order_release);
  int v373 = (v100_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v373, memory_order_release);
  int v374 = (v92_r5==1);
  atomic_store_explicit(&atom_14_r5_1_eq, v374, memory_order_release);
  int v375 = (v104_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v375, memory_order_release);
  int v376 = (v106_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v376, memory_order_release);
  int v377 = (v108_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v377, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v110_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v112_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v114_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v122_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v378 = (v122_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v378, memory_order_release);
  int v379 = (v112_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v379, memory_order_release);
  int v380 = (v114_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v380, memory_order_release);
  int v381 = (v116_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v381, memory_order_release);
  int v382 = (v118_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v382, memory_order_release);
  int v383 = (v120_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v383, memory_order_release);
  int v384 = (v110_r6==1);
  atomic_store_explicit(&atom_15_r6_1_eq, v384, memory_order_release);
  int v385 = (v124_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v385, memory_order_release);
  int v386 = (v126_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v386, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v128_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v130_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v132_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v134_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v136_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v138_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v140_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v142_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v144_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v387 = (v142_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v387, memory_order_release);
  int v388 = (v130_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v388, memory_order_release);
  int v389 = (v132_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v389, memory_order_release);
  int v390 = (v134_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v390, memory_order_release);
  int v391 = (v136_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v391, memory_order_release);
  int v392 = (v138_r5==0);
  atomic_store_explicit(&atom_16_r5_0_eq, v392, memory_order_release);
  int v393 = (v140_r6==0);
  atomic_store_explicit(&atom_16_r6_0_eq, v393, memory_order_release);
  int v394 = (v128_r7==1);
  atomic_store_explicit(&atom_16_r7_1_eq, v394, memory_order_release);
  int v395 = (v144_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v395, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v146_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v148_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v150_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v152_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v154_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v156_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v158_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v160_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v162_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v396 = (v162_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v396, memory_order_release);
  int v397 = (v148_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v397, memory_order_release);
  int v398 = (v150_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v398, memory_order_release);
  int v399 = (v152_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v399, memory_order_release);
  int v400 = (v154_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v400, memory_order_release);
  int v401 = (v156_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v401, memory_order_release);
  int v402 = (v158_r6==0);
  atomic_store_explicit(&atom_17_r6_0_eq, v402, memory_order_release);
  int v403 = (v160_r7==0);
  atomic_store_explicit(&atom_17_r7_0_eq, v403, memory_order_release);
  int v404 = (v146_r8==1);
  atomic_store_explicit(&atom_17_r8_1_eq, v404, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  atomic_init(&vars[4], 0);
  atomic_init(&vars[5], 0);
  atomic_init(&vars[6], 0);
  atomic_init(&vars[7], 0);
  atomic_init(&vars[8], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 
  pthread_t thr6; 
  pthread_t thr7; 
  pthread_t thr8; 
  pthread_t thr9; 
  pthread_t thr10; 
  pthread_t thr11; 
  pthread_t thr12; 
  pthread_t thr13; 
  pthread_t thr14; 
  pthread_t thr15; 
  pthread_t thr16; 
  pthread_t thr17; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);
  pthread_create(&thr7, NULL , t7, NULL);
  pthread_create(&thr8, NULL , t8, NULL);
  pthread_create(&thr9, NULL , t9, NULL);
  pthread_create(&thr10, NULL , t10, NULL);
  pthread_create(&thr11, NULL , t11, NULL);
  pthread_create(&thr12, NULL , t12, NULL);
  pthread_create(&thr13, NULL , t13, NULL);
  pthread_create(&thr14, NULL , t14, NULL);
  pthread_create(&thr15, NULL , t15, NULL);
  pthread_create(&thr16, NULL , t16, NULL);
  pthread_create(&thr17, NULL , t17, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);
  pthread_join(thr7,NULL);
  pthread_join(thr8,NULL);
  pthread_join(thr9,NULL);
  pthread_join(thr10,NULL);
  pthread_join(thr11,NULL);
  pthread_join(thr12,NULL);
  pthread_join(thr13,NULL);
  pthread_join(thr14,NULL);
  pthread_join(thr15,NULL);
  pthread_join(thr16,NULL);
  pthread_join(thr17,NULL);

  int v163 = atomic_load_explicit(&atom_9_r0_1_eq, memory_order_acquire);
  int v164 = atomic_load_explicit(&atom_9_r1_0_eq, memory_order_acquire);
  int v165 = atomic_load_explicit(&atom_9_r2_0_eq, memory_order_acquire);
  int v166 = atomic_load_explicit(&atom_9_r3_0_eq, memory_order_acquire);
  int v167 = atomic_load_explicit(&atom_9_r4_0_eq, memory_order_acquire);
  int v168 = atomic_load_explicit(&atom_9_r5_0_eq, memory_order_acquire);
  int v169 = atomic_load_explicit(&atom_9_r6_0_eq, memory_order_acquire);
  int v170 = atomic_load_explicit(&atom_9_r7_0_eq, memory_order_acquire);
  int v171 = atomic_load_explicit(&atom_9_r8_0_eq, memory_order_acquire);
  int v172 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v173 = atomic_load_explicit(&atom_10_r1_1_eq, memory_order_acquire);
  int v174 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v175 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v176 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v177 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v178 = atomic_load_explicit(&atom_10_r6_0_eq, memory_order_acquire);
  int v179 = atomic_load_explicit(&atom_10_r7_0_eq, memory_order_acquire);
  int v180 = atomic_load_explicit(&atom_10_r8_0_eq, memory_order_acquire);
  int v181 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v182 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v183 = atomic_load_explicit(&atom_11_r2_1_eq, memory_order_acquire);
  int v184 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v185 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v186 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v187 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v188 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v189 = atomic_load_explicit(&atom_11_r8_0_eq, memory_order_acquire);
  int v190 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v191 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v192 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v193 = atomic_load_explicit(&atom_12_r3_1_eq, memory_order_acquire);
  int v194 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v195 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v196 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v197 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v198 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v199 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v200 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v201 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v202 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v203 = atomic_load_explicit(&atom_13_r4_1_eq, memory_order_acquire);
  int v204 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v205 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v206 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v207 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v208 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v209 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v210 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v211 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v212 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v213 = atomic_load_explicit(&atom_14_r5_1_eq, memory_order_acquire);
  int v214 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v215 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v216 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v217 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v218 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v219 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v220 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v221 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v222 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v223 = atomic_load_explicit(&atom_15_r6_1_eq, memory_order_acquire);
  int v224 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v225 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v226 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v227 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v228 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v229 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v230 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v231 = atomic_load_explicit(&atom_16_r5_0_eq, memory_order_acquire);
  int v232 = atomic_load_explicit(&atom_16_r6_0_eq, memory_order_acquire);
  int v233 = atomic_load_explicit(&atom_16_r7_1_eq, memory_order_acquire);
  int v234 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v235 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v236 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v237 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v238 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v239 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v240 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v241 = atomic_load_explicit(&atom_17_r6_0_eq, memory_order_acquire);
  int v242 = atomic_load_explicit(&atom_17_r7_0_eq, memory_order_acquire);
  int v243 = atomic_load_explicit(&atom_17_r8_1_eq, memory_order_acquire);
  int v244_conj = v242 & v243;
  int v245_conj = v241 & v244_conj;
  int v246_conj = v240 & v245_conj;
  int v247_conj = v239 & v246_conj;
  int v248_conj = v238 & v247_conj;
  int v249_conj = v237 & v248_conj;
  int v250_conj = v236 & v249_conj;
  int v251_conj = v235 & v250_conj;
  int v252_conj = v234 & v251_conj;
  int v253_conj = v233 & v252_conj;
  int v254_conj = v232 & v253_conj;
  int v255_conj = v231 & v254_conj;
  int v256_conj = v230 & v255_conj;
  int v257_conj = v229 & v256_conj;
  int v258_conj = v228 & v257_conj;
  int v259_conj = v227 & v258_conj;
  int v260_conj = v226 & v259_conj;
  int v261_conj = v225 & v260_conj;
  int v262_conj = v224 & v261_conj;
  int v263_conj = v223 & v262_conj;
  int v264_conj = v222 & v263_conj;
  int v265_conj = v221 & v264_conj;
  int v266_conj = v220 & v265_conj;
  int v267_conj = v219 & v266_conj;
  int v268_conj = v218 & v267_conj;
  int v269_conj = v217 & v268_conj;
  int v270_conj = v216 & v269_conj;
  int v271_conj = v215 & v270_conj;
  int v272_conj = v214 & v271_conj;
  int v273_conj = v213 & v272_conj;
  int v274_conj = v212 & v273_conj;
  int v275_conj = v211 & v274_conj;
  int v276_conj = v210 & v275_conj;
  int v277_conj = v209 & v276_conj;
  int v278_conj = v208 & v277_conj;
  int v279_conj = v207 & v278_conj;
  int v280_conj = v206 & v279_conj;
  int v281_conj = v205 & v280_conj;
  int v282_conj = v204 & v281_conj;
  int v283_conj = v203 & v282_conj;
  int v284_conj = v202 & v283_conj;
  int v285_conj = v201 & v284_conj;
  int v286_conj = v200 & v285_conj;
  int v287_conj = v199 & v286_conj;
  int v288_conj = v198 & v287_conj;
  int v289_conj = v197 & v288_conj;
  int v290_conj = v196 & v289_conj;
  int v291_conj = v195 & v290_conj;
  int v292_conj = v194 & v291_conj;
  int v293_conj = v193 & v292_conj;
  int v294_conj = v192 & v293_conj;
  int v295_conj = v191 & v294_conj;
  int v296_conj = v190 & v295_conj;
  int v297_conj = v189 & v296_conj;
  int v298_conj = v188 & v297_conj;
  int v299_conj = v187 & v298_conj;
  int v300_conj = v186 & v299_conj;
  int v301_conj = v185 & v300_conj;
  int v302_conj = v184 & v301_conj;
  int v303_conj = v183 & v302_conj;
  int v304_conj = v182 & v303_conj;
  int v305_conj = v181 & v304_conj;
  int v306_conj = v180 & v305_conj;
  int v307_conj = v179 & v306_conj;
  int v308_conj = v178 & v307_conj;
  int v309_conj = v177 & v308_conj;
  int v310_conj = v176 & v309_conj;
  int v311_conj = v175 & v310_conj;
  int v312_conj = v174 & v311_conj;
  int v313_conj = v173 & v312_conj;
  int v314_conj = v172 & v313_conj;
  int v315_conj = v171 & v314_conj;
  int v316_conj = v170 & v315_conj;
  int v317_conj = v169 & v316_conj;
  int v318_conj = v168 & v317_conj;
  int v319_conj = v167 & v318_conj;
  int v320_conj = v166 & v319_conj;
  int v321_conj = v165 & v320_conj;
  int v322_conj = v164 & v321_conj;
  int v323_conj = v163 & v322_conj;
  if (v323_conj == 1) assert(0);
  return 0;
}
