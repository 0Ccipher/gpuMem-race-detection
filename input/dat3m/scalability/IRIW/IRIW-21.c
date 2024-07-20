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
atomic_int vars[10]; 
atomic_int atom_10_r0_1_eq; 
atomic_int atom_10_r1_0_eq; 
atomic_int atom_10_r2_0_eq; 
atomic_int atom_10_r3_0_eq; 
atomic_int atom_10_r4_0_eq; 
atomic_int atom_10_r5_0_eq; 
atomic_int atom_10_r6_0_eq; 
atomic_int atom_10_r7_0_eq; 
atomic_int atom_10_r8_0_eq; 
atomic_int atom_10_r9_0_eq; 
atomic_int atom_11_r0_0_eq; 
atomic_int atom_11_r1_1_eq; 
atomic_int atom_11_r2_0_eq; 
atomic_int atom_11_r3_0_eq; 
atomic_int atom_11_r4_0_eq; 
atomic_int atom_11_r5_0_eq; 
atomic_int atom_11_r6_0_eq; 
atomic_int atom_11_r7_0_eq; 
atomic_int atom_11_r8_0_eq; 
atomic_int atom_11_r9_0_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_1_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_0_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_12_r7_0_eq; 
atomic_int atom_12_r8_0_eq; 
atomic_int atom_12_r9_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_0_eq; 
atomic_int atom_13_r2_0_eq; 
atomic_int atom_13_r3_1_eq; 
atomic_int atom_13_r4_0_eq; 
atomic_int atom_13_r5_0_eq; 
atomic_int atom_13_r6_0_eq; 
atomic_int atom_13_r7_0_eq; 
atomic_int atom_13_r8_0_eq; 
atomic_int atom_13_r9_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_0_eq; 
atomic_int atom_14_r2_0_eq; 
atomic_int atom_14_r3_0_eq; 
atomic_int atom_14_r4_1_eq; 
atomic_int atom_14_r5_0_eq; 
atomic_int atom_14_r6_0_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_14_r8_0_eq; 
atomic_int atom_14_r9_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_0_eq; 
atomic_int atom_15_r3_0_eq; 
atomic_int atom_15_r4_0_eq; 
atomic_int atom_15_r5_1_eq; 
atomic_int atom_15_r6_0_eq; 
atomic_int atom_15_r7_0_eq; 
atomic_int atom_15_r8_0_eq; 
atomic_int atom_15_r9_0_eq; 
atomic_int atom_16_r0_0_eq; 
atomic_int atom_16_r1_0_eq; 
atomic_int atom_16_r2_0_eq; 
atomic_int atom_16_r3_0_eq; 
atomic_int atom_16_r4_0_eq; 
atomic_int atom_16_r5_0_eq; 
atomic_int atom_16_r6_1_eq; 
atomic_int atom_16_r7_0_eq; 
atomic_int atom_16_r8_0_eq; 
atomic_int atom_16_r9_0_eq; 
atomic_int atom_17_r0_0_eq; 
atomic_int atom_17_r1_0_eq; 
atomic_int atom_17_r2_0_eq; 
atomic_int atom_17_r3_0_eq; 
atomic_int atom_17_r4_0_eq; 
atomic_int atom_17_r5_0_eq; 
atomic_int atom_17_r6_0_eq; 
atomic_int atom_17_r7_1_eq; 
atomic_int atom_17_r8_0_eq; 
atomic_int atom_17_r9_0_eq; 
atomic_int atom_18_r0_0_eq; 
atomic_int atom_18_r1_0_eq; 
atomic_int atom_18_r2_0_eq; 
atomic_int atom_18_r3_0_eq; 
atomic_int atom_18_r4_0_eq; 
atomic_int atom_18_r5_0_eq; 
atomic_int atom_18_r6_0_eq; 
atomic_int atom_18_r7_0_eq; 
atomic_int atom_18_r8_1_eq; 
atomic_int atom_18_r9_0_eq; 
atomic_int atom_19_r0_0_eq; 
atomic_int atom_19_r1_0_eq; 
atomic_int atom_19_r2_0_eq; 
atomic_int atom_19_r3_0_eq; 
atomic_int atom_19_r4_0_eq; 
atomic_int atom_19_r5_0_eq; 
atomic_int atom_19_r6_0_eq; 
atomic_int atom_19_r7_0_eq; 
atomic_int atom_19_r8_0_eq; 
atomic_int atom_19_r9_1_eq; 
atomic_int atom_20_r0_0_eq; 
atomic_int atom_20_r1_0_eq; 
atomic_int atom_20_r2_0_eq; 
atomic_int atom_20_r3_0_eq; 
atomic_int atom_20_r4_0_eq; 
atomic_int atom_20_r5_0_eq; 
atomic_int atom_20_r6_0_eq; 
atomic_int atom_20_r7_0_eq; 
atomic_int atom_20_r8_0_eq; 
atomic_int atom_20_r9_0_eq; 



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
  atomic_store_explicit(&vars[9], 1, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
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
__VERIFIER_memory_scope_device();
  int v20_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v438 = (v2_r0==1);
  atomic_store_explicit(&atom_10_r0_1_eq, v438, memory_order_release);
  int v439 = (v4_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v439, memory_order_release);
  int v440 = (v6_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v440, memory_order_release);
  int v441 = (v8_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v441, memory_order_release);
  int v442 = (v10_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v442, memory_order_release);
  int v443 = (v12_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v443, memory_order_release);
  int v444 = (v14_r6==0);
  atomic_store_explicit(&atom_10_r6_0_eq, v444, memory_order_release);
  int v445 = (v16_r7==0);
  atomic_store_explicit(&atom_10_r7_0_eq, v445, memory_order_release);
  int v446 = (v18_r8==0);
  atomic_store_explicit(&atom_10_r8_0_eq, v446, memory_order_release);
  int v447 = (v20_r9==0);
  atomic_store_explicit(&atom_10_r9_0_eq, v447, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v22_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v448 = (v24_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v448, memory_order_release);
  int v449 = (v22_r1==1);
  atomic_store_explicit(&atom_11_r1_1_eq, v449, memory_order_release);
  int v450 = (v26_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v450, memory_order_release);
  int v451 = (v28_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v451, memory_order_release);
  int v452 = (v30_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v452, memory_order_release);
  int v453 = (v32_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v453, memory_order_release);
  int v454 = (v34_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v454, memory_order_release);
  int v455 = (v36_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v455, memory_order_release);
  int v456 = (v38_r8==0);
  atomic_store_explicit(&atom_11_r8_0_eq, v456, memory_order_release);
  int v457 = (v40_r9==0);
  atomic_store_explicit(&atom_11_r9_0_eq, v457, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v42_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v458 = (v46_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v458, memory_order_release);
  int v459 = (v44_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v459, memory_order_release);
  int v460 = (v42_r2==1);
  atomic_store_explicit(&atom_12_r2_1_eq, v460, memory_order_release);
  int v461 = (v48_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v461, memory_order_release);
  int v462 = (v50_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v462, memory_order_release);
  int v463 = (v52_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v463, memory_order_release);
  int v464 = (v54_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v464, memory_order_release);
  int v465 = (v56_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v465, memory_order_release);
  int v466 = (v58_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v466, memory_order_release);
  int v467 = (v60_r9==0);
  atomic_store_explicit(&atom_12_r9_0_eq, v467, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v62_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v74_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v468 = (v68_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v468, memory_order_release);
  int v469 = (v64_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v469, memory_order_release);
  int v470 = (v66_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v470, memory_order_release);
  int v471 = (v62_r3==1);
  atomic_store_explicit(&atom_13_r3_1_eq, v471, memory_order_release);
  int v472 = (v70_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v472, memory_order_release);
  int v473 = (v72_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v473, memory_order_release);
  int v474 = (v74_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v474, memory_order_release);
  int v475 = (v76_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v475, memory_order_release);
  int v476 = (v78_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v476, memory_order_release);
  int v477 = (v80_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v477, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v82_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v98_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v478 = (v90_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v478, memory_order_release);
  int v479 = (v84_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v479, memory_order_release);
  int v480 = (v86_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v480, memory_order_release);
  int v481 = (v88_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v481, memory_order_release);
  int v482 = (v82_r4==1);
  atomic_store_explicit(&atom_14_r4_1_eq, v482, memory_order_release);
  int v483 = (v92_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v483, memory_order_release);
  int v484 = (v94_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v484, memory_order_release);
  int v485 = (v96_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v485, memory_order_release);
  int v486 = (v98_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v486, memory_order_release);
  int v487 = (v100_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v487, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v102_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v106_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v110_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v112_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v114_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v488 = (v112_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v488, memory_order_release);
  int v489 = (v104_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v489, memory_order_release);
  int v490 = (v106_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v490, memory_order_release);
  int v491 = (v108_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v491, memory_order_release);
  int v492 = (v110_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v492, memory_order_release);
  int v493 = (v102_r5==1);
  atomic_store_explicit(&atom_15_r5_1_eq, v493, memory_order_release);
  int v494 = (v114_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v494, memory_order_release);
  int v495 = (v116_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v495, memory_order_release);
  int v496 = (v118_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v496, memory_order_release);
  int v497 = (v120_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v497, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v122_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v128_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v130_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v132_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v134_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v136_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v138_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v140_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v498 = (v134_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v498, memory_order_release);
  int v499 = (v124_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v499, memory_order_release);
  int v500 = (v126_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v500, memory_order_release);
  int v501 = (v128_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v501, memory_order_release);
  int v502 = (v130_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v502, memory_order_release);
  int v503 = (v132_r5==0);
  atomic_store_explicit(&atom_16_r5_0_eq, v503, memory_order_release);
  int v504 = (v122_r6==1);
  atomic_store_explicit(&atom_16_r6_1_eq, v504, memory_order_release);
  int v505 = (v136_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v505, memory_order_release);
  int v506 = (v138_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v506, memory_order_release);
  int v507 = (v140_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v507, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v142_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v144_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v146_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v148_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v150_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v152_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v154_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v156_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v158_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v160_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v508 = (v156_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v508, memory_order_release);
  int v509 = (v144_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v509, memory_order_release);
  int v510 = (v146_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v510, memory_order_release);
  int v511 = (v148_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v511, memory_order_release);
  int v512 = (v150_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v512, memory_order_release);
  int v513 = (v152_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v513, memory_order_release);
  int v514 = (v154_r6==0);
  atomic_store_explicit(&atom_17_r6_0_eq, v514, memory_order_release);
  int v515 = (v142_r7==1);
  atomic_store_explicit(&atom_17_r7_1_eq, v515, memory_order_release);
  int v516 = (v158_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v516, memory_order_release);
  int v517 = (v160_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v517, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v162_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v164_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v166_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v168_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v170_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v172_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v174_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v176_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v178_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v180_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v518 = (v178_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v518, memory_order_release);
  int v519 = (v164_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v519, memory_order_release);
  int v520 = (v166_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v520, memory_order_release);
  int v521 = (v168_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v521, memory_order_release);
  int v522 = (v170_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v522, memory_order_release);
  int v523 = (v172_r5==0);
  atomic_store_explicit(&atom_18_r5_0_eq, v523, memory_order_release);
  int v524 = (v174_r6==0);
  atomic_store_explicit(&atom_18_r6_0_eq, v524, memory_order_release);
  int v525 = (v176_r7==0);
  atomic_store_explicit(&atom_18_r7_0_eq, v525, memory_order_release);
  int v526 = (v162_r8==1);
  atomic_store_explicit(&atom_18_r8_1_eq, v526, memory_order_release);
  int v527 = (v180_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v527, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v182_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v184_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v186_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v188_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v190_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v192_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v194_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v196_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v198_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v200_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v528 = (v200_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v528, memory_order_release);
  int v529 = (v184_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v529, memory_order_release);
  int v530 = (v186_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v530, memory_order_release);
  int v531 = (v188_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v531, memory_order_release);
  int v532 = (v190_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v532, memory_order_release);
  int v533 = (v192_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v533, memory_order_release);
  int v534 = (v194_r6==0);
  atomic_store_explicit(&atom_19_r6_0_eq, v534, memory_order_release);
  int v535 = (v196_r7==0);
  atomic_store_explicit(&atom_19_r7_0_eq, v535, memory_order_release);
  int v536 = (v198_r8==0);
  atomic_store_explicit(&atom_19_r8_0_eq, v536, memory_order_release);
  int v537 = (v182_r9==1);
  atomic_store_explicit(&atom_19_r9_1_eq, v537, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v202_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v204_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v206_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v208_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v210_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v212_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v214_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v216_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v218_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v538 = (0==0);
  atomic_store_explicit(&atom_20_r0_0_eq, v538, memory_order_release);
  int v539 = (v202_r1==0);
  atomic_store_explicit(&atom_20_r1_0_eq, v539, memory_order_release);
  int v540 = (v204_r2==0);
  atomic_store_explicit(&atom_20_r2_0_eq, v540, memory_order_release);
  int v541 = (v206_r3==0);
  atomic_store_explicit(&atom_20_r3_0_eq, v541, memory_order_release);
  int v542 = (v208_r4==0);
  atomic_store_explicit(&atom_20_r4_0_eq, v542, memory_order_release);
  int v543 = (v210_r5==0);
  atomic_store_explicit(&atom_20_r5_0_eq, v543, memory_order_release);
  int v544 = (v212_r6==0);
  atomic_store_explicit(&atom_20_r6_0_eq, v544, memory_order_release);
  int v545 = (v214_r7==0);
  atomic_store_explicit(&atom_20_r7_0_eq, v545, memory_order_release);
  int v546 = (v216_r8==0);
  atomic_store_explicit(&atom_20_r8_0_eq, v546, memory_order_release);
  int v547 = (v218_r9==0);
  atomic_store_explicit(&atom_20_r9_0_eq, v547, memory_order_release);
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
  atomic_init(&vars[9], 0);
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
  pthread_t thr18; 
  pthread_t thr19; 
  pthread_t thr20; 


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
  pthread_create(&thr18, NULL , t18, NULL);
  pthread_create(&thr19, NULL , t19, NULL);
  pthread_create(&thr20, NULL , t20, NULL);

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
  pthread_join(thr18,NULL);
  pthread_join(thr19,NULL);
  pthread_join(thr20,NULL);

  int v219 = atomic_load_explicit(&atom_10_r0_1_eq, memory_order_acquire);
  int v220 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v221 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v222 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v223 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v224 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v225 = atomic_load_explicit(&atom_10_r6_0_eq, memory_order_acquire);
  int v226 = atomic_load_explicit(&atom_10_r7_0_eq, memory_order_acquire);
  int v227 = atomic_load_explicit(&atom_10_r8_0_eq, memory_order_acquire);
  int v228 = atomic_load_explicit(&atom_10_r9_0_eq, memory_order_acquire);
  int v229 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v230 = atomic_load_explicit(&atom_11_r1_1_eq, memory_order_acquire);
  int v231 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v232 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v233 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v234 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v235 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v236 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v237 = atomic_load_explicit(&atom_11_r8_0_eq, memory_order_acquire);
  int v238 = atomic_load_explicit(&atom_11_r9_0_eq, memory_order_acquire);
  int v239 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v240 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v241 = atomic_load_explicit(&atom_12_r2_1_eq, memory_order_acquire);
  int v242 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v243 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v244 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v245 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v246 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v247 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v248 = atomic_load_explicit(&atom_12_r9_0_eq, memory_order_acquire);
  int v249 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v250 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v251 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v252 = atomic_load_explicit(&atom_13_r3_1_eq, memory_order_acquire);
  int v253 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v254 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v255 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v256 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v257 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v258 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v259 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v260 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v261 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v262 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v263 = atomic_load_explicit(&atom_14_r4_1_eq, memory_order_acquire);
  int v264 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v265 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v266 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v267 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v268 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v269 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v270 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v271 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v272 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v273 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v274 = atomic_load_explicit(&atom_15_r5_1_eq, memory_order_acquire);
  int v275 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v276 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v277 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v278 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v279 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v280 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v281 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v282 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v283 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v284 = atomic_load_explicit(&atom_16_r5_0_eq, memory_order_acquire);
  int v285 = atomic_load_explicit(&atom_16_r6_1_eq, memory_order_acquire);
  int v286 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v287 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v288 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v289 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v290 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v291 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v292 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v293 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v294 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v295 = atomic_load_explicit(&atom_17_r6_0_eq, memory_order_acquire);
  int v296 = atomic_load_explicit(&atom_17_r7_1_eq, memory_order_acquire);
  int v297 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v298 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v299 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v300 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v301 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v302 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v303 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v304 = atomic_load_explicit(&atom_18_r5_0_eq, memory_order_acquire);
  int v305 = atomic_load_explicit(&atom_18_r6_0_eq, memory_order_acquire);
  int v306 = atomic_load_explicit(&atom_18_r7_0_eq, memory_order_acquire);
  int v307 = atomic_load_explicit(&atom_18_r8_1_eq, memory_order_acquire);
  int v308 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v309 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v310 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v311 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v312 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v313 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v314 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v315 = atomic_load_explicit(&atom_19_r6_0_eq, memory_order_acquire);
  int v316 = atomic_load_explicit(&atom_19_r7_0_eq, memory_order_acquire);
  int v317 = atomic_load_explicit(&atom_19_r8_0_eq, memory_order_acquire);
  int v318 = atomic_load_explicit(&atom_19_r9_1_eq, memory_order_acquire);
  int v319 = atomic_load_explicit(&atom_20_r0_0_eq, memory_order_acquire);
  int v320 = atomic_load_explicit(&atom_20_r1_0_eq, memory_order_acquire);
  int v321 = atomic_load_explicit(&atom_20_r2_0_eq, memory_order_acquire);
  int v322 = atomic_load_explicit(&atom_20_r3_0_eq, memory_order_acquire);
  int v323 = atomic_load_explicit(&atom_20_r4_0_eq, memory_order_acquire);
  int v324 = atomic_load_explicit(&atom_20_r5_0_eq, memory_order_acquire);
  int v325 = atomic_load_explicit(&atom_20_r6_0_eq, memory_order_acquire);
  int v326 = atomic_load_explicit(&atom_20_r7_0_eq, memory_order_acquire);
  int v327 = atomic_load_explicit(&atom_20_r8_0_eq, memory_order_acquire);
  int v328 = atomic_load_explicit(&atom_20_r9_0_eq, memory_order_acquire);
  int v329_conj = v327 & v328;
  int v330_conj = v326 & v329_conj;
  int v331_conj = v325 & v330_conj;
  int v332_conj = v324 & v331_conj;
  int v333_conj = v323 & v332_conj;
  int v334_conj = v322 & v333_conj;
  int v335_conj = v321 & v334_conj;
  int v336_conj = v320 & v335_conj;
  int v337_conj = v319 & v336_conj;
  int v338_conj = v318 & v337_conj;
  int v339_conj = v317 & v338_conj;
  int v340_conj = v316 & v339_conj;
  int v341_conj = v315 & v340_conj;
  int v342_conj = v314 & v341_conj;
  int v343_conj = v313 & v342_conj;
  int v344_conj = v312 & v343_conj;
  int v345_conj = v311 & v344_conj;
  int v346_conj = v310 & v345_conj;
  int v347_conj = v309 & v346_conj;
  int v348_conj = v308 & v347_conj;
  int v349_conj = v307 & v348_conj;
  int v350_conj = v306 & v349_conj;
  int v351_conj = v305 & v350_conj;
  int v352_conj = v304 & v351_conj;
  int v353_conj = v303 & v352_conj;
  int v354_conj = v302 & v353_conj;
  int v355_conj = v301 & v354_conj;
  int v356_conj = v300 & v355_conj;
  int v357_conj = v299 & v356_conj;
  int v358_conj = v298 & v357_conj;
  int v359_conj = v297 & v358_conj;
  int v360_conj = v296 & v359_conj;
  int v361_conj = v295 & v360_conj;
  int v362_conj = v294 & v361_conj;
  int v363_conj = v293 & v362_conj;
  int v364_conj = v292 & v363_conj;
  int v365_conj = v291 & v364_conj;
  int v366_conj = v290 & v365_conj;
  int v367_conj = v289 & v366_conj;
  int v368_conj = v288 & v367_conj;
  int v369_conj = v287 & v368_conj;
  int v370_conj = v286 & v369_conj;
  int v371_conj = v285 & v370_conj;
  int v372_conj = v284 & v371_conj;
  int v373_conj = v283 & v372_conj;
  int v374_conj = v282 & v373_conj;
  int v375_conj = v281 & v374_conj;
  int v376_conj = v280 & v375_conj;
  int v377_conj = v279 & v376_conj;
  int v378_conj = v278 & v377_conj;
  int v379_conj = v277 & v378_conj;
  int v380_conj = v276 & v379_conj;
  int v381_conj = v275 & v380_conj;
  int v382_conj = v274 & v381_conj;
  int v383_conj = v273 & v382_conj;
  int v384_conj = v272 & v383_conj;
  int v385_conj = v271 & v384_conj;
  int v386_conj = v270 & v385_conj;
  int v387_conj = v269 & v386_conj;
  int v388_conj = v268 & v387_conj;
  int v389_conj = v267 & v388_conj;
  int v390_conj = v266 & v389_conj;
  int v391_conj = v265 & v390_conj;
  int v392_conj = v264 & v391_conj;
  int v393_conj = v263 & v392_conj;
  int v394_conj = v262 & v393_conj;
  int v395_conj = v261 & v394_conj;
  int v396_conj = v260 & v395_conj;
  int v397_conj = v259 & v396_conj;
  int v398_conj = v258 & v397_conj;
  int v399_conj = v257 & v398_conj;
  int v400_conj = v256 & v399_conj;
  int v401_conj = v255 & v400_conj;
  int v402_conj = v254 & v401_conj;
  int v403_conj = v253 & v402_conj;
  int v404_conj = v252 & v403_conj;
  int v405_conj = v251 & v404_conj;
  int v406_conj = v250 & v405_conj;
  int v407_conj = v249 & v406_conj;
  int v408_conj = v248 & v407_conj;
  int v409_conj = v247 & v408_conj;
  int v410_conj = v246 & v409_conj;
  int v411_conj = v245 & v410_conj;
  int v412_conj = v244 & v411_conj;
  int v413_conj = v243 & v412_conj;
  int v414_conj = v242 & v413_conj;
  int v415_conj = v241 & v414_conj;
  int v416_conj = v240 & v415_conj;
  int v417_conj = v239 & v416_conj;
  int v418_conj = v238 & v417_conj;
  int v419_conj = v237 & v418_conj;
  int v420_conj = v236 & v419_conj;
  int v421_conj = v235 & v420_conj;
  int v422_conj = v234 & v421_conj;
  int v423_conj = v233 & v422_conj;
  int v424_conj = v232 & v423_conj;
  int v425_conj = v231 & v424_conj;
  int v426_conj = v230 & v425_conj;
  int v427_conj = v229 & v426_conj;
  int v428_conj = v228 & v427_conj;
  int v429_conj = v227 & v428_conj;
  int v430_conj = v226 & v429_conj;
  int v431_conj = v225 & v430_conj;
  int v432_conj = v224 & v431_conj;
  int v433_conj = v223 & v432_conj;
  int v434_conj = v222 & v433_conj;
  int v435_conj = v221 & v434_conj;
  int v436_conj = v220 & v435_conj;
  int v437_conj = v219 & v436_conj;
  if (v437_conj == 1) assert(0);
  return 0;
}
