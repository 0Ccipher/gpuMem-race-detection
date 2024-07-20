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
atomic_int vars[11]; 
atomic_int atom_11_r0_1_eq; 
atomic_int atom_11_r1_0_eq; 
atomic_int atom_11_r2_0_eq; 
atomic_int atom_11_r3_0_eq; 
atomic_int atom_11_r4_0_eq; 
atomic_int atom_11_r5_0_eq; 
atomic_int atom_11_r6_0_eq; 
atomic_int atom_11_r7_0_eq; 
atomic_int atom_11_r8_0_eq; 
atomic_int atom_11_r9_0_eq; 
atomic_int atom_11_r10_0_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_1_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_0_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_12_r7_0_eq; 
atomic_int atom_12_r8_0_eq; 
atomic_int atom_12_r9_0_eq; 
atomic_int atom_12_r10_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_0_eq; 
atomic_int atom_13_r2_1_eq; 
atomic_int atom_13_r3_0_eq; 
atomic_int atom_13_r4_0_eq; 
atomic_int atom_13_r5_0_eq; 
atomic_int atom_13_r6_0_eq; 
atomic_int atom_13_r7_0_eq; 
atomic_int atom_13_r8_0_eq; 
atomic_int atom_13_r9_0_eq; 
atomic_int atom_13_r10_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_0_eq; 
atomic_int atom_14_r2_0_eq; 
atomic_int atom_14_r3_1_eq; 
atomic_int atom_14_r4_0_eq; 
atomic_int atom_14_r5_0_eq; 
atomic_int atom_14_r6_0_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_14_r8_0_eq; 
atomic_int atom_14_r9_0_eq; 
atomic_int atom_14_r10_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_0_eq; 
atomic_int atom_15_r3_0_eq; 
atomic_int atom_15_r4_1_eq; 
atomic_int atom_15_r5_0_eq; 
atomic_int atom_15_r6_0_eq; 
atomic_int atom_15_r7_0_eq; 
atomic_int atom_15_r8_0_eq; 
atomic_int atom_15_r9_0_eq; 
atomic_int atom_15_r10_0_eq; 
atomic_int atom_16_r0_0_eq; 
atomic_int atom_16_r1_0_eq; 
atomic_int atom_16_r2_0_eq; 
atomic_int atom_16_r3_0_eq; 
atomic_int atom_16_r4_0_eq; 
atomic_int atom_16_r5_1_eq; 
atomic_int atom_16_r6_0_eq; 
atomic_int atom_16_r7_0_eq; 
atomic_int atom_16_r8_0_eq; 
atomic_int atom_16_r9_0_eq; 
atomic_int atom_16_r10_0_eq; 
atomic_int atom_17_r0_0_eq; 
atomic_int atom_17_r1_0_eq; 
atomic_int atom_17_r2_0_eq; 
atomic_int atom_17_r3_0_eq; 
atomic_int atom_17_r4_0_eq; 
atomic_int atom_17_r5_0_eq; 
atomic_int atom_17_r6_1_eq; 
atomic_int atom_17_r7_0_eq; 
atomic_int atom_17_r8_0_eq; 
atomic_int atom_17_r9_0_eq; 
atomic_int atom_17_r10_0_eq; 
atomic_int atom_18_r0_0_eq; 
atomic_int atom_18_r1_0_eq; 
atomic_int atom_18_r2_0_eq; 
atomic_int atom_18_r3_0_eq; 
atomic_int atom_18_r4_0_eq; 
atomic_int atom_18_r5_0_eq; 
atomic_int atom_18_r6_0_eq; 
atomic_int atom_18_r7_1_eq; 
atomic_int atom_18_r8_0_eq; 
atomic_int atom_18_r9_0_eq; 
atomic_int atom_18_r10_0_eq; 
atomic_int atom_19_r0_0_eq; 
atomic_int atom_19_r1_0_eq; 
atomic_int atom_19_r2_0_eq; 
atomic_int atom_19_r3_0_eq; 
atomic_int atom_19_r4_0_eq; 
atomic_int atom_19_r5_0_eq; 
atomic_int atom_19_r6_0_eq; 
atomic_int atom_19_r7_0_eq; 
atomic_int atom_19_r8_1_eq; 
atomic_int atom_19_r9_0_eq; 
atomic_int atom_19_r10_0_eq; 
atomic_int atom_20_r0_0_eq; 
atomic_int atom_20_r1_0_eq; 
atomic_int atom_20_r2_0_eq; 
atomic_int atom_20_r3_0_eq; 
atomic_int atom_20_r4_0_eq; 
atomic_int atom_20_r5_0_eq; 
atomic_int atom_20_r6_0_eq; 
atomic_int atom_20_r7_0_eq; 
atomic_int atom_20_r8_0_eq; 
atomic_int atom_20_r9_1_eq; 
atomic_int atom_20_r10_0_eq; 
atomic_int atom_21_r0_0_eq; 
atomic_int atom_21_r1_0_eq; 
atomic_int atom_21_r2_0_eq; 
atomic_int atom_21_r3_0_eq; 
atomic_int atom_21_r4_0_eq; 
atomic_int atom_21_r5_0_eq; 
atomic_int atom_21_r6_0_eq; 
atomic_int atom_21_r7_0_eq; 
atomic_int atom_21_r8_0_eq; 
atomic_int atom_21_r9_0_eq; 
atomic_int atom_21_r10_1_eq; 
atomic_int atom_22_r0_0_eq; 
atomic_int atom_22_r1_0_eq; 
atomic_int atom_22_r2_0_eq; 
atomic_int atom_22_r3_0_eq; 
atomic_int atom_22_r4_0_eq; 
atomic_int atom_22_r5_0_eq; 
atomic_int atom_22_r6_0_eq; 
atomic_int atom_22_r7_0_eq; 
atomic_int atom_22_r8_0_eq; 
atomic_int atom_22_r9_0_eq; 
atomic_int atom_22_r10_0_eq; 



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
  atomic_store_explicit(&vars[10], 1, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
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
__VERIFIER_memory_scope_device();
  int v22_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v526 = (v2_r0==1);
  atomic_store_explicit(&atom_11_r0_1_eq, v526, memory_order_release);
  int v527 = (v4_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v527, memory_order_release);
  int v528 = (v6_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v528, memory_order_release);
  int v529 = (v8_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v529, memory_order_release);
  int v530 = (v10_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v530, memory_order_release);
  int v531 = (v12_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v531, memory_order_release);
  int v532 = (v14_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v532, memory_order_release);
  int v533 = (v16_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v533, memory_order_release);
  int v534 = (v18_r8==0);
  atomic_store_explicit(&atom_11_r8_0_eq, v534, memory_order_release);
  int v535 = (v20_r9==0);
  atomic_store_explicit(&atom_11_r9_0_eq, v535, memory_order_release);
  int v536 = (v22_r10==0);
  atomic_store_explicit(&atom_11_r10_0_eq, v536, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v24_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v537 = (v26_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v537, memory_order_release);
  int v538 = (v24_r1==1);
  atomic_store_explicit(&atom_12_r1_1_eq, v538, memory_order_release);
  int v539 = (v28_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v539, memory_order_release);
  int v540 = (v30_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v540, memory_order_release);
  int v541 = (v32_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v541, memory_order_release);
  int v542 = (v34_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v542, memory_order_release);
  int v543 = (v36_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v543, memory_order_release);
  int v544 = (v38_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v544, memory_order_release);
  int v545 = (v40_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v545, memory_order_release);
  int v546 = (v42_r9==0);
  atomic_store_explicit(&atom_12_r9_0_eq, v546, memory_order_release);
  int v547 = (v44_r10==0);
  atomic_store_explicit(&atom_12_r10_0_eq, v547, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v46_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v548 = (v50_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v548, memory_order_release);
  int v549 = (v48_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v549, memory_order_release);
  int v550 = (v46_r2==1);
  atomic_store_explicit(&atom_13_r2_1_eq, v550, memory_order_release);
  int v551 = (v52_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v551, memory_order_release);
  int v552 = (v54_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v552, memory_order_release);
  int v553 = (v56_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v553, memory_order_release);
  int v554 = (v58_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v554, memory_order_release);
  int v555 = (v60_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v555, memory_order_release);
  int v556 = (v62_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v556, memory_order_release);
  int v557 = (v64_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v557, memory_order_release);
  int v558 = (v66_r10==0);
  atomic_store_explicit(&atom_13_r10_0_eq, v558, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v68_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v74_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v559 = (v74_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v559, memory_order_release);
  int v560 = (v70_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v560, memory_order_release);
  int v561 = (v72_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v561, memory_order_release);
  int v562 = (v68_r3==1);
  atomic_store_explicit(&atom_14_r3_1_eq, v562, memory_order_release);
  int v563 = (v76_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v563, memory_order_release);
  int v564 = (v78_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v564, memory_order_release);
  int v565 = (v80_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v565, memory_order_release);
  int v566 = (v82_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v566, memory_order_release);
  int v567 = (v84_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v567, memory_order_release);
  int v568 = (v86_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v568, memory_order_release);
  int v569 = (v88_r10==0);
  atomic_store_explicit(&atom_14_r10_0_eq, v569, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v90_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v98_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v102_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v106_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v110_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v570 = (v98_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v570, memory_order_release);
  int v571 = (v92_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v571, memory_order_release);
  int v572 = (v94_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v572, memory_order_release);
  int v573 = (v96_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v573, memory_order_release);
  int v574 = (v90_r4==1);
  atomic_store_explicit(&atom_15_r4_1_eq, v574, memory_order_release);
  int v575 = (v100_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v575, memory_order_release);
  int v576 = (v102_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v576, memory_order_release);
  int v577 = (v104_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v577, memory_order_release);
  int v578 = (v106_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v578, memory_order_release);
  int v579 = (v108_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v579, memory_order_release);
  int v580 = (v110_r10==0);
  atomic_store_explicit(&atom_15_r10_0_eq, v580, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v112_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v114_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v122_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v128_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v130_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v132_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v581 = (v122_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v581, memory_order_release);
  int v582 = (v114_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v582, memory_order_release);
  int v583 = (v116_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v583, memory_order_release);
  int v584 = (v118_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v584, memory_order_release);
  int v585 = (v120_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v585, memory_order_release);
  int v586 = (v112_r5==1);
  atomic_store_explicit(&atom_16_r5_1_eq, v586, memory_order_release);
  int v587 = (v124_r6==0);
  atomic_store_explicit(&atom_16_r6_0_eq, v587, memory_order_release);
  int v588 = (v126_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v588, memory_order_release);
  int v589 = (v128_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v589, memory_order_release);
  int v590 = (v130_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v590, memory_order_release);
  int v591 = (v132_r10==0);
  atomic_store_explicit(&atom_16_r10_0_eq, v591, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v134_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v136_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v138_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v140_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v142_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v144_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v146_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v148_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v150_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v152_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v154_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v592 = (v146_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v592, memory_order_release);
  int v593 = (v136_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v593, memory_order_release);
  int v594 = (v138_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v594, memory_order_release);
  int v595 = (v140_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v595, memory_order_release);
  int v596 = (v142_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v596, memory_order_release);
  int v597 = (v144_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v597, memory_order_release);
  int v598 = (v134_r6==1);
  atomic_store_explicit(&atom_17_r6_1_eq, v598, memory_order_release);
  int v599 = (v148_r7==0);
  atomic_store_explicit(&atom_17_r7_0_eq, v599, memory_order_release);
  int v600 = (v150_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v600, memory_order_release);
  int v601 = (v152_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v601, memory_order_release);
  int v602 = (v154_r10==0);
  atomic_store_explicit(&atom_17_r10_0_eq, v602, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v156_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v158_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v160_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v162_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v164_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v166_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v168_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v170_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v172_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v174_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v176_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v603 = (v170_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v603, memory_order_release);
  int v604 = (v158_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v604, memory_order_release);
  int v605 = (v160_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v605, memory_order_release);
  int v606 = (v162_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v606, memory_order_release);
  int v607 = (v164_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v607, memory_order_release);
  int v608 = (v166_r5==0);
  atomic_store_explicit(&atom_18_r5_0_eq, v608, memory_order_release);
  int v609 = (v168_r6==0);
  atomic_store_explicit(&atom_18_r6_0_eq, v609, memory_order_release);
  int v610 = (v156_r7==1);
  atomic_store_explicit(&atom_18_r7_1_eq, v610, memory_order_release);
  int v611 = (v172_r8==0);
  atomic_store_explicit(&atom_18_r8_0_eq, v611, memory_order_release);
  int v612 = (v174_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v612, memory_order_release);
  int v613 = (v176_r10==0);
  atomic_store_explicit(&atom_18_r10_0_eq, v613, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v178_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v180_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v182_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v184_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v186_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v188_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v190_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v192_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v194_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v196_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v198_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v614 = (v194_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v614, memory_order_release);
  int v615 = (v180_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v615, memory_order_release);
  int v616 = (v182_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v616, memory_order_release);
  int v617 = (v184_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v617, memory_order_release);
  int v618 = (v186_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v618, memory_order_release);
  int v619 = (v188_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v619, memory_order_release);
  int v620 = (v190_r6==0);
  atomic_store_explicit(&atom_19_r6_0_eq, v620, memory_order_release);
  int v621 = (v192_r7==0);
  atomic_store_explicit(&atom_19_r7_0_eq, v621, memory_order_release);
  int v622 = (v178_r8==1);
  atomic_store_explicit(&atom_19_r8_1_eq, v622, memory_order_release);
  int v623 = (v196_r9==0);
  atomic_store_explicit(&atom_19_r9_0_eq, v623, memory_order_release);
  int v624 = (v198_r10==0);
  atomic_store_explicit(&atom_19_r10_0_eq, v624, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v200_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
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
  int v218_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v220_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v625 = (v218_r0==0);
  atomic_store_explicit(&atom_20_r0_0_eq, v625, memory_order_release);
  int v626 = (v202_r1==0);
  atomic_store_explicit(&atom_20_r1_0_eq, v626, memory_order_release);
  int v627 = (v204_r2==0);
  atomic_store_explicit(&atom_20_r2_0_eq, v627, memory_order_release);
  int v628 = (v206_r3==0);
  atomic_store_explicit(&atom_20_r3_0_eq, v628, memory_order_release);
  int v629 = (v208_r4==0);
  atomic_store_explicit(&atom_20_r4_0_eq, v629, memory_order_release);
  int v630 = (v210_r5==0);
  atomic_store_explicit(&atom_20_r5_0_eq, v630, memory_order_release);
  int v631 = (v212_r6==0);
  atomic_store_explicit(&atom_20_r6_0_eq, v631, memory_order_release);
  int v632 = (v214_r7==0);
  atomic_store_explicit(&atom_20_r7_0_eq, v632, memory_order_release);
  int v633 = (v216_r8==0);
  atomic_store_explicit(&atom_20_r8_0_eq, v633, memory_order_release);
  int v634 = (v200_r9==1);
  atomic_store_explicit(&atom_20_r9_1_eq, v634, memory_order_release);
  int v635 = (v220_r10==0);
  atomic_store_explicit(&atom_20_r10_0_eq, v635, memory_order_release);
  return NULL;
}




void *t21(void *arg){
label_22:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(21);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v222_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v224_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v226_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v228_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v230_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v232_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v234_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v236_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v238_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v240_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v242_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v636 = (v242_r0==0);
  atomic_store_explicit(&atom_21_r0_0_eq, v636, memory_order_release);
  int v637 = (v224_r1==0);
  atomic_store_explicit(&atom_21_r1_0_eq, v637, memory_order_release);
  int v638 = (v226_r2==0);
  atomic_store_explicit(&atom_21_r2_0_eq, v638, memory_order_release);
  int v639 = (v228_r3==0);
  atomic_store_explicit(&atom_21_r3_0_eq, v639, memory_order_release);
  int v640 = (v230_r4==0);
  atomic_store_explicit(&atom_21_r4_0_eq, v640, memory_order_release);
  int v641 = (v232_r5==0);
  atomic_store_explicit(&atom_21_r5_0_eq, v641, memory_order_release);
  int v642 = (v234_r6==0);
  atomic_store_explicit(&atom_21_r6_0_eq, v642, memory_order_release);
  int v643 = (v236_r7==0);
  atomic_store_explicit(&atom_21_r7_0_eq, v643, memory_order_release);
  int v644 = (v238_r8==0);
  atomic_store_explicit(&atom_21_r8_0_eq, v644, memory_order_release);
  int v645 = (v240_r9==0);
  atomic_store_explicit(&atom_21_r9_0_eq, v645, memory_order_release);
  int v646 = (v222_r10==1);
  atomic_store_explicit(&atom_21_r10_1_eq, v646, memory_order_release);
  return NULL;
}




void *t22(void *arg){
label_23:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(22);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v244_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v246_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v248_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v250_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v252_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v254_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v256_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v258_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v260_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v262_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v647 = (0==0);
  atomic_store_explicit(&atom_22_r0_0_eq, v647, memory_order_release);
  int v648 = (v244_r1==0);
  atomic_store_explicit(&atom_22_r1_0_eq, v648, memory_order_release);
  int v649 = (v246_r2==0);
  atomic_store_explicit(&atom_22_r2_0_eq, v649, memory_order_release);
  int v650 = (v248_r3==0);
  atomic_store_explicit(&atom_22_r3_0_eq, v650, memory_order_release);
  int v651 = (v250_r4==0);
  atomic_store_explicit(&atom_22_r4_0_eq, v651, memory_order_release);
  int v652 = (v252_r5==0);
  atomic_store_explicit(&atom_22_r5_0_eq, v652, memory_order_release);
  int v653 = (v254_r6==0);
  atomic_store_explicit(&atom_22_r6_0_eq, v653, memory_order_release);
  int v654 = (v256_r7==0);
  atomic_store_explicit(&atom_22_r7_0_eq, v654, memory_order_release);
  int v655 = (v258_r8==0);
  atomic_store_explicit(&atom_22_r8_0_eq, v655, memory_order_release);
  int v656 = (v260_r9==0);
  atomic_store_explicit(&atom_22_r9_0_eq, v656, memory_order_release);
  int v657 = (v262_r10==0);
  atomic_store_explicit(&atom_22_r10_0_eq, v657, memory_order_release);
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
  atomic_init(&vars[10], 0);
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
  pthread_t thr21; 
  pthread_t thr22; 


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
  pthread_create(&thr21, NULL , t21, NULL);
  pthread_create(&thr22, NULL , t22, NULL);

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
  pthread_join(thr21,NULL);
  pthread_join(thr22,NULL);

  int v263 = atomic_load_explicit(&atom_11_r0_1_eq, memory_order_acquire);
  int v264 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v265 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v266 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v267 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v268 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v269 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v270 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v271 = atomic_load_explicit(&atom_11_r8_0_eq, memory_order_acquire);
  int v272 = atomic_load_explicit(&atom_11_r9_0_eq, memory_order_acquire);
  int v273 = atomic_load_explicit(&atom_11_r10_0_eq, memory_order_acquire);
  int v274 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v275 = atomic_load_explicit(&atom_12_r1_1_eq, memory_order_acquire);
  int v276 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v277 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v278 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v279 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v280 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v281 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v282 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v283 = atomic_load_explicit(&atom_12_r9_0_eq, memory_order_acquire);
  int v284 = atomic_load_explicit(&atom_12_r10_0_eq, memory_order_acquire);
  int v285 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v286 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v287 = atomic_load_explicit(&atom_13_r2_1_eq, memory_order_acquire);
  int v288 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v289 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v290 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v291 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v292 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v293 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v294 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v295 = atomic_load_explicit(&atom_13_r10_0_eq, memory_order_acquire);
  int v296 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v297 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v298 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v299 = atomic_load_explicit(&atom_14_r3_1_eq, memory_order_acquire);
  int v300 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v301 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v302 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v303 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v304 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v305 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v306 = atomic_load_explicit(&atom_14_r10_0_eq, memory_order_acquire);
  int v307 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v308 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v309 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v310 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v311 = atomic_load_explicit(&atom_15_r4_1_eq, memory_order_acquire);
  int v312 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v313 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v314 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v315 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v316 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v317 = atomic_load_explicit(&atom_15_r10_0_eq, memory_order_acquire);
  int v318 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v319 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v320 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v321 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v322 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v323 = atomic_load_explicit(&atom_16_r5_1_eq, memory_order_acquire);
  int v324 = atomic_load_explicit(&atom_16_r6_0_eq, memory_order_acquire);
  int v325 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v326 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v327 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v328 = atomic_load_explicit(&atom_16_r10_0_eq, memory_order_acquire);
  int v329 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v330 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v331 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v332 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v333 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v334 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v335 = atomic_load_explicit(&atom_17_r6_1_eq, memory_order_acquire);
  int v336 = atomic_load_explicit(&atom_17_r7_0_eq, memory_order_acquire);
  int v337 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v338 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v339 = atomic_load_explicit(&atom_17_r10_0_eq, memory_order_acquire);
  int v340 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v341 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v342 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v343 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v344 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v345 = atomic_load_explicit(&atom_18_r5_0_eq, memory_order_acquire);
  int v346 = atomic_load_explicit(&atom_18_r6_0_eq, memory_order_acquire);
  int v347 = atomic_load_explicit(&atom_18_r7_1_eq, memory_order_acquire);
  int v348 = atomic_load_explicit(&atom_18_r8_0_eq, memory_order_acquire);
  int v349 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v350 = atomic_load_explicit(&atom_18_r10_0_eq, memory_order_acquire);
  int v351 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v352 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v353 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v354 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v355 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v356 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v357 = atomic_load_explicit(&atom_19_r6_0_eq, memory_order_acquire);
  int v358 = atomic_load_explicit(&atom_19_r7_0_eq, memory_order_acquire);
  int v359 = atomic_load_explicit(&atom_19_r8_1_eq, memory_order_acquire);
  int v360 = atomic_load_explicit(&atom_19_r9_0_eq, memory_order_acquire);
  int v361 = atomic_load_explicit(&atom_19_r10_0_eq, memory_order_acquire);
  int v362 = atomic_load_explicit(&atom_20_r0_0_eq, memory_order_acquire);
  int v363 = atomic_load_explicit(&atom_20_r1_0_eq, memory_order_acquire);
  int v364 = atomic_load_explicit(&atom_20_r2_0_eq, memory_order_acquire);
  int v365 = atomic_load_explicit(&atom_20_r3_0_eq, memory_order_acquire);
  int v366 = atomic_load_explicit(&atom_20_r4_0_eq, memory_order_acquire);
  int v367 = atomic_load_explicit(&atom_20_r5_0_eq, memory_order_acquire);
  int v368 = atomic_load_explicit(&atom_20_r6_0_eq, memory_order_acquire);
  int v369 = atomic_load_explicit(&atom_20_r7_0_eq, memory_order_acquire);
  int v370 = atomic_load_explicit(&atom_20_r8_0_eq, memory_order_acquire);
  int v371 = atomic_load_explicit(&atom_20_r9_1_eq, memory_order_acquire);
  int v372 = atomic_load_explicit(&atom_20_r10_0_eq, memory_order_acquire);
  int v373 = atomic_load_explicit(&atom_21_r0_0_eq, memory_order_acquire);
  int v374 = atomic_load_explicit(&atom_21_r1_0_eq, memory_order_acquire);
  int v375 = atomic_load_explicit(&atom_21_r2_0_eq, memory_order_acquire);
  int v376 = atomic_load_explicit(&atom_21_r3_0_eq, memory_order_acquire);
  int v377 = atomic_load_explicit(&atom_21_r4_0_eq, memory_order_acquire);
  int v378 = atomic_load_explicit(&atom_21_r5_0_eq, memory_order_acquire);
  int v379 = atomic_load_explicit(&atom_21_r6_0_eq, memory_order_acquire);
  int v380 = atomic_load_explicit(&atom_21_r7_0_eq, memory_order_acquire);
  int v381 = atomic_load_explicit(&atom_21_r8_0_eq, memory_order_acquire);
  int v382 = atomic_load_explicit(&atom_21_r9_0_eq, memory_order_acquire);
  int v383 = atomic_load_explicit(&atom_21_r10_1_eq, memory_order_acquire);
  int v384 = atomic_load_explicit(&atom_22_r0_0_eq, memory_order_acquire);
  int v385 = atomic_load_explicit(&atom_22_r1_0_eq, memory_order_acquire);
  int v386 = atomic_load_explicit(&atom_22_r2_0_eq, memory_order_acquire);
  int v387 = atomic_load_explicit(&atom_22_r3_0_eq, memory_order_acquire);
  int v388 = atomic_load_explicit(&atom_22_r4_0_eq, memory_order_acquire);
  int v389 = atomic_load_explicit(&atom_22_r5_0_eq, memory_order_acquire);
  int v390 = atomic_load_explicit(&atom_22_r6_0_eq, memory_order_acquire);
  int v391 = atomic_load_explicit(&atom_22_r7_0_eq, memory_order_acquire);
  int v392 = atomic_load_explicit(&atom_22_r8_0_eq, memory_order_acquire);
  int v393 = atomic_load_explicit(&atom_22_r9_0_eq, memory_order_acquire);
  int v394 = atomic_load_explicit(&atom_22_r10_0_eq, memory_order_acquire);
  int v395_conj = v393 & v394;
  int v396_conj = v392 & v395_conj;
  int v397_conj = v391 & v396_conj;
  int v398_conj = v390 & v397_conj;
  int v399_conj = v389 & v398_conj;
  int v400_conj = v388 & v399_conj;
  int v401_conj = v387 & v400_conj;
  int v402_conj = v386 & v401_conj;
  int v403_conj = v385 & v402_conj;
  int v404_conj = v384 & v403_conj;
  int v405_conj = v383 & v404_conj;
  int v406_conj = v382 & v405_conj;
  int v407_conj = v381 & v406_conj;
  int v408_conj = v380 & v407_conj;
  int v409_conj = v379 & v408_conj;
  int v410_conj = v378 & v409_conj;
  int v411_conj = v377 & v410_conj;
  int v412_conj = v376 & v411_conj;
  int v413_conj = v375 & v412_conj;
  int v414_conj = v374 & v413_conj;
  int v415_conj = v373 & v414_conj;
  int v416_conj = v372 & v415_conj;
  int v417_conj = v371 & v416_conj;
  int v418_conj = v370 & v417_conj;
  int v419_conj = v369 & v418_conj;
  int v420_conj = v368 & v419_conj;
  int v421_conj = v367 & v420_conj;
  int v422_conj = v366 & v421_conj;
  int v423_conj = v365 & v422_conj;
  int v424_conj = v364 & v423_conj;
  int v425_conj = v363 & v424_conj;
  int v426_conj = v362 & v425_conj;
  int v427_conj = v361 & v426_conj;
  int v428_conj = v360 & v427_conj;
  int v429_conj = v359 & v428_conj;
  int v430_conj = v358 & v429_conj;
  int v431_conj = v357 & v430_conj;
  int v432_conj = v356 & v431_conj;
  int v433_conj = v355 & v432_conj;
  int v434_conj = v354 & v433_conj;
  int v435_conj = v353 & v434_conj;
  int v436_conj = v352 & v435_conj;
  int v437_conj = v351 & v436_conj;
  int v438_conj = v350 & v437_conj;
  int v439_conj = v349 & v438_conj;
  int v440_conj = v348 & v439_conj;
  int v441_conj = v347 & v440_conj;
  int v442_conj = v346 & v441_conj;
  int v443_conj = v345 & v442_conj;
  int v444_conj = v344 & v443_conj;
  int v445_conj = v343 & v444_conj;
  int v446_conj = v342 & v445_conj;
  int v447_conj = v341 & v446_conj;
  int v448_conj = v340 & v447_conj;
  int v449_conj = v339 & v448_conj;
  int v450_conj = v338 & v449_conj;
  int v451_conj = v337 & v450_conj;
  int v452_conj = v336 & v451_conj;
  int v453_conj = v335 & v452_conj;
  int v454_conj = v334 & v453_conj;
  int v455_conj = v333 & v454_conj;
  int v456_conj = v332 & v455_conj;
  int v457_conj = v331 & v456_conj;
  int v458_conj = v330 & v457_conj;
  int v459_conj = v329 & v458_conj;
  int v460_conj = v328 & v459_conj;
  int v461_conj = v327 & v460_conj;
  int v462_conj = v326 & v461_conj;
  int v463_conj = v325 & v462_conj;
  int v464_conj = v324 & v463_conj;
  int v465_conj = v323 & v464_conj;
  int v466_conj = v322 & v465_conj;
  int v467_conj = v321 & v466_conj;
  int v468_conj = v320 & v467_conj;
  int v469_conj = v319 & v468_conj;
  int v470_conj = v318 & v469_conj;
  int v471_conj = v317 & v470_conj;
  int v472_conj = v316 & v471_conj;
  int v473_conj = v315 & v472_conj;
  int v474_conj = v314 & v473_conj;
  int v475_conj = v313 & v474_conj;
  int v476_conj = v312 & v475_conj;
  int v477_conj = v311 & v476_conj;
  int v478_conj = v310 & v477_conj;
  int v479_conj = v309 & v478_conj;
  int v480_conj = v308 & v479_conj;
  int v481_conj = v307 & v480_conj;
  int v482_conj = v306 & v481_conj;
  int v483_conj = v305 & v482_conj;
  int v484_conj = v304 & v483_conj;
  int v485_conj = v303 & v484_conj;
  int v486_conj = v302 & v485_conj;
  int v487_conj = v301 & v486_conj;
  int v488_conj = v300 & v487_conj;
  int v489_conj = v299 & v488_conj;
  int v490_conj = v298 & v489_conj;
  int v491_conj = v297 & v490_conj;
  int v492_conj = v296 & v491_conj;
  int v493_conj = v295 & v492_conj;
  int v494_conj = v294 & v493_conj;
  int v495_conj = v293 & v494_conj;
  int v496_conj = v292 & v495_conj;
  int v497_conj = v291 & v496_conj;
  int v498_conj = v290 & v497_conj;
  int v499_conj = v289 & v498_conj;
  int v500_conj = v288 & v499_conj;
  int v501_conj = v287 & v500_conj;
  int v502_conj = v286 & v501_conj;
  int v503_conj = v285 & v502_conj;
  int v504_conj = v284 & v503_conj;
  int v505_conj = v283 & v504_conj;
  int v506_conj = v282 & v505_conj;
  int v507_conj = v281 & v506_conj;
  int v508_conj = v280 & v507_conj;
  int v509_conj = v279 & v508_conj;
  int v510_conj = v278 & v509_conj;
  int v511_conj = v277 & v510_conj;
  int v512_conj = v276 & v511_conj;
  int v513_conj = v275 & v512_conj;
  int v514_conj = v274 & v513_conj;
  int v515_conj = v273 & v514_conj;
  int v516_conj = v272 & v515_conj;
  int v517_conj = v271 & v516_conj;
  int v518_conj = v270 & v517_conj;
  int v519_conj = v269 & v518_conj;
  int v520_conj = v268 & v519_conj;
  int v521_conj = v267 & v520_conj;
  int v522_conj = v266 & v521_conj;
  int v523_conj = v265 & v522_conj;
  int v524_conj = v264 & v523_conj;
  int v525_conj = v263 & v524_conj;
  if (v525_conj == 1) assert(0);
  return 0;
}
