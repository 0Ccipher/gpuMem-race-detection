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
  int v400 = (v2_r0==1);
  atomic_store_explicit(&atom_10_r0_1_eq, v400, memory_order_release);
  int v401 = (v4_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v401, memory_order_release);
  int v402 = (v6_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v402, memory_order_release);
  int v403 = (v8_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v403, memory_order_release);
  int v404 = (v10_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v404, memory_order_release);
  int v405 = (v12_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v405, memory_order_release);
  int v406 = (v14_r6==0);
  atomic_store_explicit(&atom_10_r6_0_eq, v406, memory_order_release);
  int v407 = (v16_r7==0);
  atomic_store_explicit(&atom_10_r7_0_eq, v407, memory_order_release);
  int v408 = (v18_r8==0);
  atomic_store_explicit(&atom_10_r8_0_eq, v408, memory_order_release);
  int v409 = (v20_r9==0);
  atomic_store_explicit(&atom_10_r9_0_eq, v409, memory_order_release);
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
  int v410 = (v24_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v410, memory_order_release);
  int v411 = (v22_r1==1);
  atomic_store_explicit(&atom_11_r1_1_eq, v411, memory_order_release);
  int v412 = (v26_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v412, memory_order_release);
  int v413 = (v28_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v413, memory_order_release);
  int v414 = (v30_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v414, memory_order_release);
  int v415 = (v32_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v415, memory_order_release);
  int v416 = (v34_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v416, memory_order_release);
  int v417 = (v36_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v417, memory_order_release);
  int v418 = (v38_r8==0);
  atomic_store_explicit(&atom_11_r8_0_eq, v418, memory_order_release);
  int v419 = (v40_r9==0);
  atomic_store_explicit(&atom_11_r9_0_eq, v419, memory_order_release);
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
  int v420 = (v46_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v420, memory_order_release);
  int v421 = (v44_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v421, memory_order_release);
  int v422 = (v42_r2==1);
  atomic_store_explicit(&atom_12_r2_1_eq, v422, memory_order_release);
  int v423 = (v48_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v423, memory_order_release);
  int v424 = (v50_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v424, memory_order_release);
  int v425 = (v52_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v425, memory_order_release);
  int v426 = (v54_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v426, memory_order_release);
  int v427 = (v56_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v427, memory_order_release);
  int v428 = (v58_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v428, memory_order_release);
  int v429 = (v60_r9==0);
  atomic_store_explicit(&atom_12_r9_0_eq, v429, memory_order_release);
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
  int v430 = (v68_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v430, memory_order_release);
  int v431 = (v64_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v431, memory_order_release);
  int v432 = (v66_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v432, memory_order_release);
  int v433 = (v62_r3==1);
  atomic_store_explicit(&atom_13_r3_1_eq, v433, memory_order_release);
  int v434 = (v70_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v434, memory_order_release);
  int v435 = (v72_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v435, memory_order_release);
  int v436 = (v74_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v436, memory_order_release);
  int v437 = (v76_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v437, memory_order_release);
  int v438 = (v78_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v438, memory_order_release);
  int v439 = (v80_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v439, memory_order_release);
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
  int v440 = (v90_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v440, memory_order_release);
  int v441 = (v84_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v441, memory_order_release);
  int v442 = (v86_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v442, memory_order_release);
  int v443 = (v88_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v443, memory_order_release);
  int v444 = (v82_r4==1);
  atomic_store_explicit(&atom_14_r4_1_eq, v444, memory_order_release);
  int v445 = (v92_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v445, memory_order_release);
  int v446 = (v94_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v446, memory_order_release);
  int v447 = (v96_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v447, memory_order_release);
  int v448 = (v98_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v448, memory_order_release);
  int v449 = (v100_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v449, memory_order_release);
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
  int v450 = (v112_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v450, memory_order_release);
  int v451 = (v104_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v451, memory_order_release);
  int v452 = (v106_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v452, memory_order_release);
  int v453 = (v108_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v453, memory_order_release);
  int v454 = (v110_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v454, memory_order_release);
  int v455 = (v102_r5==1);
  atomic_store_explicit(&atom_15_r5_1_eq, v455, memory_order_release);
  int v456 = (v114_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v456, memory_order_release);
  int v457 = (v116_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v457, memory_order_release);
  int v458 = (v118_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v458, memory_order_release);
  int v459 = (v120_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v459, memory_order_release);
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
  int v460 = (v134_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v460, memory_order_release);
  int v461 = (v124_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v461, memory_order_release);
  int v462 = (v126_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v462, memory_order_release);
  int v463 = (v128_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v463, memory_order_release);
  int v464 = (v130_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v464, memory_order_release);
  int v465 = (v132_r5==0);
  atomic_store_explicit(&atom_16_r5_0_eq, v465, memory_order_release);
  int v466 = (v122_r6==1);
  atomic_store_explicit(&atom_16_r6_1_eq, v466, memory_order_release);
  int v467 = (v136_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v467, memory_order_release);
  int v468 = (v138_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v468, memory_order_release);
  int v469 = (v140_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v469, memory_order_release);
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
  int v470 = (v156_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v470, memory_order_release);
  int v471 = (v144_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v471, memory_order_release);
  int v472 = (v146_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v472, memory_order_release);
  int v473 = (v148_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v473, memory_order_release);
  int v474 = (v150_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v474, memory_order_release);
  int v475 = (v152_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v475, memory_order_release);
  int v476 = (v154_r6==0);
  atomic_store_explicit(&atom_17_r6_0_eq, v476, memory_order_release);
  int v477 = (v142_r7==1);
  atomic_store_explicit(&atom_17_r7_1_eq, v477, memory_order_release);
  int v478 = (v158_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v478, memory_order_release);
  int v479 = (v160_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v479, memory_order_release);
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
  int v480 = (v178_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v480, memory_order_release);
  int v481 = (v164_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v481, memory_order_release);
  int v482 = (v166_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v482, memory_order_release);
  int v483 = (v168_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v483, memory_order_release);
  int v484 = (v170_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v484, memory_order_release);
  int v485 = (v172_r5==0);
  atomic_store_explicit(&atom_18_r5_0_eq, v485, memory_order_release);
  int v486 = (v174_r6==0);
  atomic_store_explicit(&atom_18_r6_0_eq, v486, memory_order_release);
  int v487 = (v176_r7==0);
  atomic_store_explicit(&atom_18_r7_0_eq, v487, memory_order_release);
  int v488 = (v162_r8==1);
  atomic_store_explicit(&atom_18_r8_1_eq, v488, memory_order_release);
  int v489 = (v180_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v489, memory_order_release);
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
  int v490 = (v200_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v490, memory_order_release);
  int v491 = (v184_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v491, memory_order_release);
  int v492 = (v186_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v492, memory_order_release);
  int v493 = (v188_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v493, memory_order_release);
  int v494 = (v190_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v494, memory_order_release);
  int v495 = (v192_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v495, memory_order_release);
  int v496 = (v194_r6==0);
  atomic_store_explicit(&atom_19_r6_0_eq, v496, memory_order_release);
  int v497 = (v196_r7==0);
  atomic_store_explicit(&atom_19_r7_0_eq, v497, memory_order_release);
  int v498 = (v198_r8==0);
  atomic_store_explicit(&atom_19_r8_0_eq, v498, memory_order_release);
  int v499 = (v182_r9==1);
  atomic_store_explicit(&atom_19_r9_1_eq, v499, memory_order_release);
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

  int v201 = atomic_load_explicit(&atom_10_r0_1_eq, memory_order_acquire);
  int v202 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v203 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v204 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v205 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v206 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v207 = atomic_load_explicit(&atom_10_r6_0_eq, memory_order_acquire);
  int v208 = atomic_load_explicit(&atom_10_r7_0_eq, memory_order_acquire);
  int v209 = atomic_load_explicit(&atom_10_r8_0_eq, memory_order_acquire);
  int v210 = atomic_load_explicit(&atom_10_r9_0_eq, memory_order_acquire);
  int v211 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v212 = atomic_load_explicit(&atom_11_r1_1_eq, memory_order_acquire);
  int v213 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v214 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v215 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v216 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v217 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v218 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v219 = atomic_load_explicit(&atom_11_r8_0_eq, memory_order_acquire);
  int v220 = atomic_load_explicit(&atom_11_r9_0_eq, memory_order_acquire);
  int v221 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v222 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v223 = atomic_load_explicit(&atom_12_r2_1_eq, memory_order_acquire);
  int v224 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v225 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v226 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v227 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v228 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v229 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v230 = atomic_load_explicit(&atom_12_r9_0_eq, memory_order_acquire);
  int v231 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v232 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v233 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v234 = atomic_load_explicit(&atom_13_r3_1_eq, memory_order_acquire);
  int v235 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v236 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v237 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v238 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v239 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v240 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v241 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v242 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v243 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v244 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v245 = atomic_load_explicit(&atom_14_r4_1_eq, memory_order_acquire);
  int v246 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v247 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v248 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v249 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v250 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v251 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v252 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v253 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v254 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v255 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v256 = atomic_load_explicit(&atom_15_r5_1_eq, memory_order_acquire);
  int v257 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v258 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v259 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v260 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v261 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v262 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v263 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v264 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v265 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v266 = atomic_load_explicit(&atom_16_r5_0_eq, memory_order_acquire);
  int v267 = atomic_load_explicit(&atom_16_r6_1_eq, memory_order_acquire);
  int v268 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v269 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v270 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v271 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v272 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v273 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v274 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v275 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v276 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v277 = atomic_load_explicit(&atom_17_r6_0_eq, memory_order_acquire);
  int v278 = atomic_load_explicit(&atom_17_r7_1_eq, memory_order_acquire);
  int v279 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v280 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v281 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v282 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v283 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v284 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v285 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v286 = atomic_load_explicit(&atom_18_r5_0_eq, memory_order_acquire);
  int v287 = atomic_load_explicit(&atom_18_r6_0_eq, memory_order_acquire);
  int v288 = atomic_load_explicit(&atom_18_r7_0_eq, memory_order_acquire);
  int v289 = atomic_load_explicit(&atom_18_r8_1_eq, memory_order_acquire);
  int v290 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v291 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v292 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v293 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v294 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v295 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v296 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v297 = atomic_load_explicit(&atom_19_r6_0_eq, memory_order_acquire);
  int v298 = atomic_load_explicit(&atom_19_r7_0_eq, memory_order_acquire);
  int v299 = atomic_load_explicit(&atom_19_r8_0_eq, memory_order_acquire);
  int v300 = atomic_load_explicit(&atom_19_r9_1_eq, memory_order_acquire);
  int v301_conj = v299 & v300;
  int v302_conj = v298 & v301_conj;
  int v303_conj = v297 & v302_conj;
  int v304_conj = v296 & v303_conj;
  int v305_conj = v295 & v304_conj;
  int v306_conj = v294 & v305_conj;
  int v307_conj = v293 & v306_conj;
  int v308_conj = v292 & v307_conj;
  int v309_conj = v291 & v308_conj;
  int v310_conj = v290 & v309_conj;
  int v311_conj = v289 & v310_conj;
  int v312_conj = v288 & v311_conj;
  int v313_conj = v287 & v312_conj;
  int v314_conj = v286 & v313_conj;
  int v315_conj = v285 & v314_conj;
  int v316_conj = v284 & v315_conj;
  int v317_conj = v283 & v316_conj;
  int v318_conj = v282 & v317_conj;
  int v319_conj = v281 & v318_conj;
  int v320_conj = v280 & v319_conj;
  int v321_conj = v279 & v320_conj;
  int v322_conj = v278 & v321_conj;
  int v323_conj = v277 & v322_conj;
  int v324_conj = v276 & v323_conj;
  int v325_conj = v275 & v324_conj;
  int v326_conj = v274 & v325_conj;
  int v327_conj = v273 & v326_conj;
  int v328_conj = v272 & v327_conj;
  int v329_conj = v271 & v328_conj;
  int v330_conj = v270 & v329_conj;
  int v331_conj = v269 & v330_conj;
  int v332_conj = v268 & v331_conj;
  int v333_conj = v267 & v332_conj;
  int v334_conj = v266 & v333_conj;
  int v335_conj = v265 & v334_conj;
  int v336_conj = v264 & v335_conj;
  int v337_conj = v263 & v336_conj;
  int v338_conj = v262 & v337_conj;
  int v339_conj = v261 & v338_conj;
  int v340_conj = v260 & v339_conj;
  int v341_conj = v259 & v340_conj;
  int v342_conj = v258 & v341_conj;
  int v343_conj = v257 & v342_conj;
  int v344_conj = v256 & v343_conj;
  int v345_conj = v255 & v344_conj;
  int v346_conj = v254 & v345_conj;
  int v347_conj = v253 & v346_conj;
  int v348_conj = v252 & v347_conj;
  int v349_conj = v251 & v348_conj;
  int v350_conj = v250 & v349_conj;
  int v351_conj = v249 & v350_conj;
  int v352_conj = v248 & v351_conj;
  int v353_conj = v247 & v352_conj;
  int v354_conj = v246 & v353_conj;
  int v355_conj = v245 & v354_conj;
  int v356_conj = v244 & v355_conj;
  int v357_conj = v243 & v356_conj;
  int v358_conj = v242 & v357_conj;
  int v359_conj = v241 & v358_conj;
  int v360_conj = v240 & v359_conj;
  int v361_conj = v239 & v360_conj;
  int v362_conj = v238 & v361_conj;
  int v363_conj = v237 & v362_conj;
  int v364_conj = v236 & v363_conj;
  int v365_conj = v235 & v364_conj;
  int v366_conj = v234 & v365_conj;
  int v367_conj = v233 & v366_conj;
  int v368_conj = v232 & v367_conj;
  int v369_conj = v231 & v368_conj;
  int v370_conj = v230 & v369_conj;
  int v371_conj = v229 & v370_conj;
  int v372_conj = v228 & v371_conj;
  int v373_conj = v227 & v372_conj;
  int v374_conj = v226 & v373_conj;
  int v375_conj = v225 & v374_conj;
  int v376_conj = v224 & v375_conj;
  int v377_conj = v223 & v376_conj;
  int v378_conj = v222 & v377_conj;
  int v379_conj = v221 & v378_conj;
  int v380_conj = v220 & v379_conj;
  int v381_conj = v219 & v380_conj;
  int v382_conj = v218 & v381_conj;
  int v383_conj = v217 & v382_conj;
  int v384_conj = v216 & v383_conj;
  int v385_conj = v215 & v384_conj;
  int v386_conj = v214 & v385_conj;
  int v387_conj = v213 & v386_conj;
  int v388_conj = v212 & v387_conj;
  int v389_conj = v211 & v388_conj;
  int v390_conj = v210 & v389_conj;
  int v391_conj = v209 & v390_conj;
  int v392_conj = v208 & v391_conj;
  int v393_conj = v207 & v392_conj;
  int v394_conj = v206 & v393_conj;
  int v395_conj = v205 & v394_conj;
  int v396_conj = v204 & v395_conj;
  int v397_conj = v203 & v396_conj;
  int v398_conj = v202 & v397_conj;
  int v399_conj = v201 & v398_conj;
  if (v399_conj == 1) assert(0);
  return 0;
}
