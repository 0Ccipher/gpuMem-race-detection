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
  int v484 = (v2_r0==1);
  atomic_store_explicit(&atom_11_r0_1_eq, v484, memory_order_release);
  int v485 = (v4_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v485, memory_order_release);
  int v486 = (v6_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v486, memory_order_release);
  int v487 = (v8_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v487, memory_order_release);
  int v488 = (v10_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v488, memory_order_release);
  int v489 = (v12_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v489, memory_order_release);
  int v490 = (v14_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v490, memory_order_release);
  int v491 = (v16_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v491, memory_order_release);
  int v492 = (v18_r8==0);
  atomic_store_explicit(&atom_11_r8_0_eq, v492, memory_order_release);
  int v493 = (v20_r9==0);
  atomic_store_explicit(&atom_11_r9_0_eq, v493, memory_order_release);
  int v494 = (v22_r10==0);
  atomic_store_explicit(&atom_11_r10_0_eq, v494, memory_order_release);
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
  int v495 = (v26_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v495, memory_order_release);
  int v496 = (v24_r1==1);
  atomic_store_explicit(&atom_12_r1_1_eq, v496, memory_order_release);
  int v497 = (v28_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v497, memory_order_release);
  int v498 = (v30_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v498, memory_order_release);
  int v499 = (v32_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v499, memory_order_release);
  int v500 = (v34_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v500, memory_order_release);
  int v501 = (v36_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v501, memory_order_release);
  int v502 = (v38_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v502, memory_order_release);
  int v503 = (v40_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v503, memory_order_release);
  int v504 = (v42_r9==0);
  atomic_store_explicit(&atom_12_r9_0_eq, v504, memory_order_release);
  int v505 = (v44_r10==0);
  atomic_store_explicit(&atom_12_r10_0_eq, v505, memory_order_release);
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
  int v506 = (v50_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v506, memory_order_release);
  int v507 = (v48_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v507, memory_order_release);
  int v508 = (v46_r2==1);
  atomic_store_explicit(&atom_13_r2_1_eq, v508, memory_order_release);
  int v509 = (v52_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v509, memory_order_release);
  int v510 = (v54_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v510, memory_order_release);
  int v511 = (v56_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v511, memory_order_release);
  int v512 = (v58_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v512, memory_order_release);
  int v513 = (v60_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v513, memory_order_release);
  int v514 = (v62_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v514, memory_order_release);
  int v515 = (v64_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v515, memory_order_release);
  int v516 = (v66_r10==0);
  atomic_store_explicit(&atom_13_r10_0_eq, v516, memory_order_release);
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
  int v517 = (v74_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v517, memory_order_release);
  int v518 = (v70_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v518, memory_order_release);
  int v519 = (v72_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v519, memory_order_release);
  int v520 = (v68_r3==1);
  atomic_store_explicit(&atom_14_r3_1_eq, v520, memory_order_release);
  int v521 = (v76_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v521, memory_order_release);
  int v522 = (v78_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v522, memory_order_release);
  int v523 = (v80_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v523, memory_order_release);
  int v524 = (v82_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v524, memory_order_release);
  int v525 = (v84_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v525, memory_order_release);
  int v526 = (v86_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v526, memory_order_release);
  int v527 = (v88_r10==0);
  atomic_store_explicit(&atom_14_r10_0_eq, v527, memory_order_release);
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
  int v528 = (v98_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v528, memory_order_release);
  int v529 = (v92_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v529, memory_order_release);
  int v530 = (v94_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v530, memory_order_release);
  int v531 = (v96_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v531, memory_order_release);
  int v532 = (v90_r4==1);
  atomic_store_explicit(&atom_15_r4_1_eq, v532, memory_order_release);
  int v533 = (v100_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v533, memory_order_release);
  int v534 = (v102_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v534, memory_order_release);
  int v535 = (v104_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v535, memory_order_release);
  int v536 = (v106_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v536, memory_order_release);
  int v537 = (v108_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v537, memory_order_release);
  int v538 = (v110_r10==0);
  atomic_store_explicit(&atom_15_r10_0_eq, v538, memory_order_release);
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
  int v539 = (v122_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v539, memory_order_release);
  int v540 = (v114_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v540, memory_order_release);
  int v541 = (v116_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v541, memory_order_release);
  int v542 = (v118_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v542, memory_order_release);
  int v543 = (v120_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v543, memory_order_release);
  int v544 = (v112_r5==1);
  atomic_store_explicit(&atom_16_r5_1_eq, v544, memory_order_release);
  int v545 = (v124_r6==0);
  atomic_store_explicit(&atom_16_r6_0_eq, v545, memory_order_release);
  int v546 = (v126_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v546, memory_order_release);
  int v547 = (v128_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v547, memory_order_release);
  int v548 = (v130_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v548, memory_order_release);
  int v549 = (v132_r10==0);
  atomic_store_explicit(&atom_16_r10_0_eq, v549, memory_order_release);
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
  int v550 = (v146_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v550, memory_order_release);
  int v551 = (v136_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v551, memory_order_release);
  int v552 = (v138_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v552, memory_order_release);
  int v553 = (v140_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v553, memory_order_release);
  int v554 = (v142_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v554, memory_order_release);
  int v555 = (v144_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v555, memory_order_release);
  int v556 = (v134_r6==1);
  atomic_store_explicit(&atom_17_r6_1_eq, v556, memory_order_release);
  int v557 = (v148_r7==0);
  atomic_store_explicit(&atom_17_r7_0_eq, v557, memory_order_release);
  int v558 = (v150_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v558, memory_order_release);
  int v559 = (v152_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v559, memory_order_release);
  int v560 = (v154_r10==0);
  atomic_store_explicit(&atom_17_r10_0_eq, v560, memory_order_release);
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
  int v561 = (v170_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v561, memory_order_release);
  int v562 = (v158_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v562, memory_order_release);
  int v563 = (v160_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v563, memory_order_release);
  int v564 = (v162_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v564, memory_order_release);
  int v565 = (v164_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v565, memory_order_release);
  int v566 = (v166_r5==0);
  atomic_store_explicit(&atom_18_r5_0_eq, v566, memory_order_release);
  int v567 = (v168_r6==0);
  atomic_store_explicit(&atom_18_r6_0_eq, v567, memory_order_release);
  int v568 = (v156_r7==1);
  atomic_store_explicit(&atom_18_r7_1_eq, v568, memory_order_release);
  int v569 = (v172_r8==0);
  atomic_store_explicit(&atom_18_r8_0_eq, v569, memory_order_release);
  int v570 = (v174_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v570, memory_order_release);
  int v571 = (v176_r10==0);
  atomic_store_explicit(&atom_18_r10_0_eq, v571, memory_order_release);
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
  int v572 = (v194_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v572, memory_order_release);
  int v573 = (v180_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v573, memory_order_release);
  int v574 = (v182_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v574, memory_order_release);
  int v575 = (v184_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v575, memory_order_release);
  int v576 = (v186_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v576, memory_order_release);
  int v577 = (v188_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v577, memory_order_release);
  int v578 = (v190_r6==0);
  atomic_store_explicit(&atom_19_r6_0_eq, v578, memory_order_release);
  int v579 = (v192_r7==0);
  atomic_store_explicit(&atom_19_r7_0_eq, v579, memory_order_release);
  int v580 = (v178_r8==1);
  atomic_store_explicit(&atom_19_r8_1_eq, v580, memory_order_release);
  int v581 = (v196_r9==0);
  atomic_store_explicit(&atom_19_r9_0_eq, v581, memory_order_release);
  int v582 = (v198_r10==0);
  atomic_store_explicit(&atom_19_r10_0_eq, v582, memory_order_release);
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
  int v583 = (v218_r0==0);
  atomic_store_explicit(&atom_20_r0_0_eq, v583, memory_order_release);
  int v584 = (v202_r1==0);
  atomic_store_explicit(&atom_20_r1_0_eq, v584, memory_order_release);
  int v585 = (v204_r2==0);
  atomic_store_explicit(&atom_20_r2_0_eq, v585, memory_order_release);
  int v586 = (v206_r3==0);
  atomic_store_explicit(&atom_20_r3_0_eq, v586, memory_order_release);
  int v587 = (v208_r4==0);
  atomic_store_explicit(&atom_20_r4_0_eq, v587, memory_order_release);
  int v588 = (v210_r5==0);
  atomic_store_explicit(&atom_20_r5_0_eq, v588, memory_order_release);
  int v589 = (v212_r6==0);
  atomic_store_explicit(&atom_20_r6_0_eq, v589, memory_order_release);
  int v590 = (v214_r7==0);
  atomic_store_explicit(&atom_20_r7_0_eq, v590, memory_order_release);
  int v591 = (v216_r8==0);
  atomic_store_explicit(&atom_20_r8_0_eq, v591, memory_order_release);
  int v592 = (v200_r9==1);
  atomic_store_explicit(&atom_20_r9_1_eq, v592, memory_order_release);
  int v593 = (v220_r10==0);
  atomic_store_explicit(&atom_20_r10_0_eq, v593, memory_order_release);
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
  int v594 = (v242_r0==0);
  atomic_store_explicit(&atom_21_r0_0_eq, v594, memory_order_release);
  int v595 = (v224_r1==0);
  atomic_store_explicit(&atom_21_r1_0_eq, v595, memory_order_release);
  int v596 = (v226_r2==0);
  atomic_store_explicit(&atom_21_r2_0_eq, v596, memory_order_release);
  int v597 = (v228_r3==0);
  atomic_store_explicit(&atom_21_r3_0_eq, v597, memory_order_release);
  int v598 = (v230_r4==0);
  atomic_store_explicit(&atom_21_r4_0_eq, v598, memory_order_release);
  int v599 = (v232_r5==0);
  atomic_store_explicit(&atom_21_r5_0_eq, v599, memory_order_release);
  int v600 = (v234_r6==0);
  atomic_store_explicit(&atom_21_r6_0_eq, v600, memory_order_release);
  int v601 = (v236_r7==0);
  atomic_store_explicit(&atom_21_r7_0_eq, v601, memory_order_release);
  int v602 = (v238_r8==0);
  atomic_store_explicit(&atom_21_r8_0_eq, v602, memory_order_release);
  int v603 = (v240_r9==0);
  atomic_store_explicit(&atom_21_r9_0_eq, v603, memory_order_release);
  int v604 = (v222_r10==1);
  atomic_store_explicit(&atom_21_r10_1_eq, v604, memory_order_release);
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

  int v243 = atomic_load_explicit(&atom_11_r0_1_eq, memory_order_acquire);
  int v244 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v245 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v246 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v247 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v248 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v249 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v250 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v251 = atomic_load_explicit(&atom_11_r8_0_eq, memory_order_acquire);
  int v252 = atomic_load_explicit(&atom_11_r9_0_eq, memory_order_acquire);
  int v253 = atomic_load_explicit(&atom_11_r10_0_eq, memory_order_acquire);
  int v254 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v255 = atomic_load_explicit(&atom_12_r1_1_eq, memory_order_acquire);
  int v256 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v257 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v258 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v259 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v260 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v261 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v262 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v263 = atomic_load_explicit(&atom_12_r9_0_eq, memory_order_acquire);
  int v264 = atomic_load_explicit(&atom_12_r10_0_eq, memory_order_acquire);
  int v265 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v266 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v267 = atomic_load_explicit(&atom_13_r2_1_eq, memory_order_acquire);
  int v268 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v269 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v270 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v271 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v272 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v273 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v274 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v275 = atomic_load_explicit(&atom_13_r10_0_eq, memory_order_acquire);
  int v276 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v277 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v278 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v279 = atomic_load_explicit(&atom_14_r3_1_eq, memory_order_acquire);
  int v280 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v281 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v282 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v283 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v284 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v285 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v286 = atomic_load_explicit(&atom_14_r10_0_eq, memory_order_acquire);
  int v287 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v288 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v289 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v290 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v291 = atomic_load_explicit(&atom_15_r4_1_eq, memory_order_acquire);
  int v292 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v293 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v294 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v295 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v296 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v297 = atomic_load_explicit(&atom_15_r10_0_eq, memory_order_acquire);
  int v298 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v299 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v300 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v301 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v302 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v303 = atomic_load_explicit(&atom_16_r5_1_eq, memory_order_acquire);
  int v304 = atomic_load_explicit(&atom_16_r6_0_eq, memory_order_acquire);
  int v305 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v306 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v307 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v308 = atomic_load_explicit(&atom_16_r10_0_eq, memory_order_acquire);
  int v309 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v310 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v311 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v312 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v313 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v314 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v315 = atomic_load_explicit(&atom_17_r6_1_eq, memory_order_acquire);
  int v316 = atomic_load_explicit(&atom_17_r7_0_eq, memory_order_acquire);
  int v317 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v318 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v319 = atomic_load_explicit(&atom_17_r10_0_eq, memory_order_acquire);
  int v320 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v321 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v322 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v323 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v324 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v325 = atomic_load_explicit(&atom_18_r5_0_eq, memory_order_acquire);
  int v326 = atomic_load_explicit(&atom_18_r6_0_eq, memory_order_acquire);
  int v327 = atomic_load_explicit(&atom_18_r7_1_eq, memory_order_acquire);
  int v328 = atomic_load_explicit(&atom_18_r8_0_eq, memory_order_acquire);
  int v329 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v330 = atomic_load_explicit(&atom_18_r10_0_eq, memory_order_acquire);
  int v331 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v332 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v333 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v334 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v335 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v336 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v337 = atomic_load_explicit(&atom_19_r6_0_eq, memory_order_acquire);
  int v338 = atomic_load_explicit(&atom_19_r7_0_eq, memory_order_acquire);
  int v339 = atomic_load_explicit(&atom_19_r8_1_eq, memory_order_acquire);
  int v340 = atomic_load_explicit(&atom_19_r9_0_eq, memory_order_acquire);
  int v341 = atomic_load_explicit(&atom_19_r10_0_eq, memory_order_acquire);
  int v342 = atomic_load_explicit(&atom_20_r0_0_eq, memory_order_acquire);
  int v343 = atomic_load_explicit(&atom_20_r1_0_eq, memory_order_acquire);
  int v344 = atomic_load_explicit(&atom_20_r2_0_eq, memory_order_acquire);
  int v345 = atomic_load_explicit(&atom_20_r3_0_eq, memory_order_acquire);
  int v346 = atomic_load_explicit(&atom_20_r4_0_eq, memory_order_acquire);
  int v347 = atomic_load_explicit(&atom_20_r5_0_eq, memory_order_acquire);
  int v348 = atomic_load_explicit(&atom_20_r6_0_eq, memory_order_acquire);
  int v349 = atomic_load_explicit(&atom_20_r7_0_eq, memory_order_acquire);
  int v350 = atomic_load_explicit(&atom_20_r8_0_eq, memory_order_acquire);
  int v351 = atomic_load_explicit(&atom_20_r9_1_eq, memory_order_acquire);
  int v352 = atomic_load_explicit(&atom_20_r10_0_eq, memory_order_acquire);
  int v353 = atomic_load_explicit(&atom_21_r0_0_eq, memory_order_acquire);
  int v354 = atomic_load_explicit(&atom_21_r1_0_eq, memory_order_acquire);
  int v355 = atomic_load_explicit(&atom_21_r2_0_eq, memory_order_acquire);
  int v356 = atomic_load_explicit(&atom_21_r3_0_eq, memory_order_acquire);
  int v357 = atomic_load_explicit(&atom_21_r4_0_eq, memory_order_acquire);
  int v358 = atomic_load_explicit(&atom_21_r5_0_eq, memory_order_acquire);
  int v359 = atomic_load_explicit(&atom_21_r6_0_eq, memory_order_acquire);
  int v360 = atomic_load_explicit(&atom_21_r7_0_eq, memory_order_acquire);
  int v361 = atomic_load_explicit(&atom_21_r8_0_eq, memory_order_acquire);
  int v362 = atomic_load_explicit(&atom_21_r9_0_eq, memory_order_acquire);
  int v363 = atomic_load_explicit(&atom_21_r10_1_eq, memory_order_acquire);
  int v364_conj = v362 & v363;
  int v365_conj = v361 & v364_conj;
  int v366_conj = v360 & v365_conj;
  int v367_conj = v359 & v366_conj;
  int v368_conj = v358 & v367_conj;
  int v369_conj = v357 & v368_conj;
  int v370_conj = v356 & v369_conj;
  int v371_conj = v355 & v370_conj;
  int v372_conj = v354 & v371_conj;
  int v373_conj = v353 & v372_conj;
  int v374_conj = v352 & v373_conj;
  int v375_conj = v351 & v374_conj;
  int v376_conj = v350 & v375_conj;
  int v377_conj = v349 & v376_conj;
  int v378_conj = v348 & v377_conj;
  int v379_conj = v347 & v378_conj;
  int v380_conj = v346 & v379_conj;
  int v381_conj = v345 & v380_conj;
  int v382_conj = v344 & v381_conj;
  int v383_conj = v343 & v382_conj;
  int v384_conj = v342 & v383_conj;
  int v385_conj = v341 & v384_conj;
  int v386_conj = v340 & v385_conj;
  int v387_conj = v339 & v386_conj;
  int v388_conj = v338 & v387_conj;
  int v389_conj = v337 & v388_conj;
  int v390_conj = v336 & v389_conj;
  int v391_conj = v335 & v390_conj;
  int v392_conj = v334 & v391_conj;
  int v393_conj = v333 & v392_conj;
  int v394_conj = v332 & v393_conj;
  int v395_conj = v331 & v394_conj;
  int v396_conj = v330 & v395_conj;
  int v397_conj = v329 & v396_conj;
  int v398_conj = v328 & v397_conj;
  int v399_conj = v327 & v398_conj;
  int v400_conj = v326 & v399_conj;
  int v401_conj = v325 & v400_conj;
  int v402_conj = v324 & v401_conj;
  int v403_conj = v323 & v402_conj;
  int v404_conj = v322 & v403_conj;
  int v405_conj = v321 & v404_conj;
  int v406_conj = v320 & v405_conj;
  int v407_conj = v319 & v406_conj;
  int v408_conj = v318 & v407_conj;
  int v409_conj = v317 & v408_conj;
  int v410_conj = v316 & v409_conj;
  int v411_conj = v315 & v410_conj;
  int v412_conj = v314 & v411_conj;
  int v413_conj = v313 & v412_conj;
  int v414_conj = v312 & v413_conj;
  int v415_conj = v311 & v414_conj;
  int v416_conj = v310 & v415_conj;
  int v417_conj = v309 & v416_conj;
  int v418_conj = v308 & v417_conj;
  int v419_conj = v307 & v418_conj;
  int v420_conj = v306 & v419_conj;
  int v421_conj = v305 & v420_conj;
  int v422_conj = v304 & v421_conj;
  int v423_conj = v303 & v422_conj;
  int v424_conj = v302 & v423_conj;
  int v425_conj = v301 & v424_conj;
  int v426_conj = v300 & v425_conj;
  int v427_conj = v299 & v426_conj;
  int v428_conj = v298 & v427_conj;
  int v429_conj = v297 & v428_conj;
  int v430_conj = v296 & v429_conj;
  int v431_conj = v295 & v430_conj;
  int v432_conj = v294 & v431_conj;
  int v433_conj = v293 & v432_conj;
  int v434_conj = v292 & v433_conj;
  int v435_conj = v291 & v434_conj;
  int v436_conj = v290 & v435_conj;
  int v437_conj = v289 & v436_conj;
  int v438_conj = v288 & v437_conj;
  int v439_conj = v287 & v438_conj;
  int v440_conj = v286 & v439_conj;
  int v441_conj = v285 & v440_conj;
  int v442_conj = v284 & v441_conj;
  int v443_conj = v283 & v442_conj;
  int v444_conj = v282 & v443_conj;
  int v445_conj = v281 & v444_conj;
  int v446_conj = v280 & v445_conj;
  int v447_conj = v279 & v446_conj;
  int v448_conj = v278 & v447_conj;
  int v449_conj = v277 & v448_conj;
  int v450_conj = v276 & v449_conj;
  int v451_conj = v275 & v450_conj;
  int v452_conj = v274 & v451_conj;
  int v453_conj = v273 & v452_conj;
  int v454_conj = v272 & v453_conj;
  int v455_conj = v271 & v454_conj;
  int v456_conj = v270 & v455_conj;
  int v457_conj = v269 & v456_conj;
  int v458_conj = v268 & v457_conj;
  int v459_conj = v267 & v458_conj;
  int v460_conj = v266 & v459_conj;
  int v461_conj = v265 & v460_conj;
  int v462_conj = v264 & v461_conj;
  int v463_conj = v263 & v462_conj;
  int v464_conj = v262 & v463_conj;
  int v465_conj = v261 & v464_conj;
  int v466_conj = v260 & v465_conj;
  int v467_conj = v259 & v466_conj;
  int v468_conj = v258 & v467_conj;
  int v469_conj = v257 & v468_conj;
  int v470_conj = v256 & v469_conj;
  int v471_conj = v255 & v470_conj;
  int v472_conj = v254 & v471_conj;
  int v473_conj = v253 & v472_conj;
  int v474_conj = v252 & v473_conj;
  int v475_conj = v251 & v474_conj;
  int v476_conj = v250 & v475_conj;
  int v477_conj = v249 & v476_conj;
  int v478_conj = v248 & v477_conj;
  int v479_conj = v247 & v478_conj;
  int v480_conj = v246 & v479_conj;
  int v481_conj = v245 & v480_conj;
  int v482_conj = v244 & v481_conj;
  int v483_conj = v243 & v482_conj;
  if (v483_conj == 1) assert(0);
  return 0;
}
