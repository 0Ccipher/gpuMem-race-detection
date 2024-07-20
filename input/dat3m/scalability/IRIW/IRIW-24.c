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
atomic_int vars[12]; 
atomic_int atom_12_r0_1_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_0_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_12_r7_0_eq; 
atomic_int atom_12_r8_0_eq; 
atomic_int atom_12_r9_0_eq; 
atomic_int atom_12_r10_0_eq; 
atomic_int atom_12_r11_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_1_eq; 
atomic_int atom_13_r2_0_eq; 
atomic_int atom_13_r3_0_eq; 
atomic_int atom_13_r4_0_eq; 
atomic_int atom_13_r5_0_eq; 
atomic_int atom_13_r6_0_eq; 
atomic_int atom_13_r7_0_eq; 
atomic_int atom_13_r8_0_eq; 
atomic_int atom_13_r9_0_eq; 
atomic_int atom_13_r10_0_eq; 
atomic_int atom_13_r11_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_0_eq; 
atomic_int atom_14_r2_1_eq; 
atomic_int atom_14_r3_0_eq; 
atomic_int atom_14_r4_0_eq; 
atomic_int atom_14_r5_0_eq; 
atomic_int atom_14_r6_0_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_14_r8_0_eq; 
atomic_int atom_14_r9_0_eq; 
atomic_int atom_14_r10_0_eq; 
atomic_int atom_14_r11_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_0_eq; 
atomic_int atom_15_r3_1_eq; 
atomic_int atom_15_r4_0_eq; 
atomic_int atom_15_r5_0_eq; 
atomic_int atom_15_r6_0_eq; 
atomic_int atom_15_r7_0_eq; 
atomic_int atom_15_r8_0_eq; 
atomic_int atom_15_r9_0_eq; 
atomic_int atom_15_r10_0_eq; 
atomic_int atom_15_r11_0_eq; 
atomic_int atom_16_r0_0_eq; 
atomic_int atom_16_r1_0_eq; 
atomic_int atom_16_r2_0_eq; 
atomic_int atom_16_r3_0_eq; 
atomic_int atom_16_r4_1_eq; 
atomic_int atom_16_r5_0_eq; 
atomic_int atom_16_r6_0_eq; 
atomic_int atom_16_r7_0_eq; 
atomic_int atom_16_r8_0_eq; 
atomic_int atom_16_r9_0_eq; 
atomic_int atom_16_r10_0_eq; 
atomic_int atom_16_r11_0_eq; 
atomic_int atom_17_r0_0_eq; 
atomic_int atom_17_r1_0_eq; 
atomic_int atom_17_r2_0_eq; 
atomic_int atom_17_r3_0_eq; 
atomic_int atom_17_r4_0_eq; 
atomic_int atom_17_r5_1_eq; 
atomic_int atom_17_r6_0_eq; 
atomic_int atom_17_r7_0_eq; 
atomic_int atom_17_r8_0_eq; 
atomic_int atom_17_r9_0_eq; 
atomic_int atom_17_r10_0_eq; 
atomic_int atom_17_r11_0_eq; 
atomic_int atom_18_r0_0_eq; 
atomic_int atom_18_r1_0_eq; 
atomic_int atom_18_r2_0_eq; 
atomic_int atom_18_r3_0_eq; 
atomic_int atom_18_r4_0_eq; 
atomic_int atom_18_r5_0_eq; 
atomic_int atom_18_r6_1_eq; 
atomic_int atom_18_r7_0_eq; 
atomic_int atom_18_r8_0_eq; 
atomic_int atom_18_r9_0_eq; 
atomic_int atom_18_r10_0_eq; 
atomic_int atom_18_r11_0_eq; 
atomic_int atom_19_r0_0_eq; 
atomic_int atom_19_r1_0_eq; 
atomic_int atom_19_r2_0_eq; 
atomic_int atom_19_r3_0_eq; 
atomic_int atom_19_r4_0_eq; 
atomic_int atom_19_r5_0_eq; 
atomic_int atom_19_r6_0_eq; 
atomic_int atom_19_r7_1_eq; 
atomic_int atom_19_r8_0_eq; 
atomic_int atom_19_r9_0_eq; 
atomic_int atom_19_r10_0_eq; 
atomic_int atom_19_r11_0_eq; 
atomic_int atom_20_r0_0_eq; 
atomic_int atom_20_r1_0_eq; 
atomic_int atom_20_r2_0_eq; 
atomic_int atom_20_r3_0_eq; 
atomic_int atom_20_r4_0_eq; 
atomic_int atom_20_r5_0_eq; 
atomic_int atom_20_r6_0_eq; 
atomic_int atom_20_r7_0_eq; 
atomic_int atom_20_r8_1_eq; 
atomic_int atom_20_r9_0_eq; 
atomic_int atom_20_r10_0_eq; 
atomic_int atom_20_r11_0_eq; 
atomic_int atom_21_r0_0_eq; 
atomic_int atom_21_r1_0_eq; 
atomic_int atom_21_r2_0_eq; 
atomic_int atom_21_r3_0_eq; 
atomic_int atom_21_r4_0_eq; 
atomic_int atom_21_r5_0_eq; 
atomic_int atom_21_r6_0_eq; 
atomic_int atom_21_r7_0_eq; 
atomic_int atom_21_r8_0_eq; 
atomic_int atom_21_r9_1_eq; 
atomic_int atom_21_r10_0_eq; 
atomic_int atom_21_r11_0_eq; 
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
atomic_int atom_22_r10_1_eq; 
atomic_int atom_22_r11_0_eq; 
atomic_int atom_23_r0_0_eq; 
atomic_int atom_23_r1_0_eq; 
atomic_int atom_23_r2_0_eq; 
atomic_int atom_23_r3_0_eq; 
atomic_int atom_23_r4_0_eq; 
atomic_int atom_23_r5_0_eq; 
atomic_int atom_23_r6_0_eq; 
atomic_int atom_23_r7_0_eq; 
atomic_int atom_23_r8_0_eq; 
atomic_int atom_23_r9_0_eq; 
atomic_int atom_23_r10_0_eq; 
atomic_int atom_23_r11_1_eq; 



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
  atomic_store_explicit(&vars[11], 1, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
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
__VERIFIER_memory_scope_device();
  int v24_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v576 = (v2_r0==1);
  atomic_store_explicit(&atom_12_r0_1_eq, v576, memory_order_release);
  int v577 = (v4_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v577, memory_order_release);
  int v578 = (v6_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v578, memory_order_release);
  int v579 = (v8_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v579, memory_order_release);
  int v580 = (v10_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v580, memory_order_release);
  int v581 = (v12_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v581, memory_order_release);
  int v582 = (v14_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v582, memory_order_release);
  int v583 = (v16_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v583, memory_order_release);
  int v584 = (v18_r8==0);
  atomic_store_explicit(&atom_12_r8_0_eq, v584, memory_order_release);
  int v585 = (v20_r9==0);
  atomic_store_explicit(&atom_12_r9_0_eq, v585, memory_order_release);
  int v586 = (v22_r10==0);
  atomic_store_explicit(&atom_12_r10_0_eq, v586, memory_order_release);
  int v587 = (v24_r11==0);
  atomic_store_explicit(&atom_12_r11_0_eq, v587, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v26_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v588 = (v28_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v588, memory_order_release);
  int v589 = (v26_r1==1);
  atomic_store_explicit(&atom_13_r1_1_eq, v589, memory_order_release);
  int v590 = (v30_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v590, memory_order_release);
  int v591 = (v32_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v591, memory_order_release);
  int v592 = (v34_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v592, memory_order_release);
  int v593 = (v36_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v593, memory_order_release);
  int v594 = (v38_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v594, memory_order_release);
  int v595 = (v40_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v595, memory_order_release);
  int v596 = (v42_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v596, memory_order_release);
  int v597 = (v44_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v597, memory_order_release);
  int v598 = (v46_r10==0);
  atomic_store_explicit(&atom_13_r10_0_eq, v598, memory_order_release);
  int v599 = (v48_r11==0);
  atomic_store_explicit(&atom_13_r11_0_eq, v599, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v50_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v600 = (v54_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v600, memory_order_release);
  int v601 = (v52_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v601, memory_order_release);
  int v602 = (v50_r2==1);
  atomic_store_explicit(&atom_14_r2_1_eq, v602, memory_order_release);
  int v603 = (v56_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v603, memory_order_release);
  int v604 = (v58_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v604, memory_order_release);
  int v605 = (v60_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v605, memory_order_release);
  int v606 = (v62_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v606, memory_order_release);
  int v607 = (v64_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v607, memory_order_release);
  int v608 = (v66_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v608, memory_order_release);
  int v609 = (v68_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v609, memory_order_release);
  int v610 = (v70_r10==0);
  atomic_store_explicit(&atom_14_r10_0_eq, v610, memory_order_release);
  int v611 = (v72_r11==0);
  atomic_store_explicit(&atom_14_r11_0_eq, v611, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v74_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v612 = (v80_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v612, memory_order_release);
  int v613 = (v76_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v613, memory_order_release);
  int v614 = (v78_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v614, memory_order_release);
  int v615 = (v74_r3==1);
  atomic_store_explicit(&atom_15_r3_1_eq, v615, memory_order_release);
  int v616 = (v82_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v616, memory_order_release);
  int v617 = (v84_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v617, memory_order_release);
  int v618 = (v86_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v618, memory_order_release);
  int v619 = (v88_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v619, memory_order_release);
  int v620 = (v90_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v620, memory_order_release);
  int v621 = (v92_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v621, memory_order_release);
  int v622 = (v94_r10==0);
  atomic_store_explicit(&atom_15_r10_0_eq, v622, memory_order_release);
  int v623 = (v96_r11==0);
  atomic_store_explicit(&atom_15_r11_0_eq, v623, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v98_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v102_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v106_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v110_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v112_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v114_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v624 = (v106_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v624, memory_order_release);
  int v625 = (v100_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v625, memory_order_release);
  int v626 = (v102_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v626, memory_order_release);
  int v627 = (v104_r3==0);
  atomic_store_explicit(&atom_16_r3_0_eq, v627, memory_order_release);
  int v628 = (v98_r4==1);
  atomic_store_explicit(&atom_16_r4_1_eq, v628, memory_order_release);
  int v629 = (v108_r5==0);
  atomic_store_explicit(&atom_16_r5_0_eq, v629, memory_order_release);
  int v630 = (v110_r6==0);
  atomic_store_explicit(&atom_16_r6_0_eq, v630, memory_order_release);
  int v631 = (v112_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v631, memory_order_release);
  int v632 = (v114_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v632, memory_order_release);
  int v633 = (v116_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v633, memory_order_release);
  int v634 = (v118_r10==0);
  atomic_store_explicit(&atom_16_r10_0_eq, v634, memory_order_release);
  int v635 = (v120_r11==0);
  atomic_store_explicit(&atom_16_r11_0_eq, v635, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v122_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v128_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v130_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v132_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v134_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v136_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v138_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v140_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v142_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v144_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v636 = (v132_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v636, memory_order_release);
  int v637 = (v124_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v637, memory_order_release);
  int v638 = (v126_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v638, memory_order_release);
  int v639 = (v128_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v639, memory_order_release);
  int v640 = (v130_r4==0);
  atomic_store_explicit(&atom_17_r4_0_eq, v640, memory_order_release);
  int v641 = (v122_r5==1);
  atomic_store_explicit(&atom_17_r5_1_eq, v641, memory_order_release);
  int v642 = (v134_r6==0);
  atomic_store_explicit(&atom_17_r6_0_eq, v642, memory_order_release);
  int v643 = (v136_r7==0);
  atomic_store_explicit(&atom_17_r7_0_eq, v643, memory_order_release);
  int v644 = (v138_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v644, memory_order_release);
  int v645 = (v140_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v645, memory_order_release);
  int v646 = (v142_r10==0);
  atomic_store_explicit(&atom_17_r10_0_eq, v646, memory_order_release);
  int v647 = (v144_r11==0);
  atomic_store_explicit(&atom_17_r11_0_eq, v647, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v146_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
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
  int v158_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v160_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v162_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v164_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v166_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v168_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v648 = (v158_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v648, memory_order_release);
  int v649 = (v148_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v649, memory_order_release);
  int v650 = (v150_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v650, memory_order_release);
  int v651 = (v152_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v651, memory_order_release);
  int v652 = (v154_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v652, memory_order_release);
  int v653 = (v156_r5==0);
  atomic_store_explicit(&atom_18_r5_0_eq, v653, memory_order_release);
  int v654 = (v146_r6==1);
  atomic_store_explicit(&atom_18_r6_1_eq, v654, memory_order_release);
  int v655 = (v160_r7==0);
  atomic_store_explicit(&atom_18_r7_0_eq, v655, memory_order_release);
  int v656 = (v162_r8==0);
  atomic_store_explicit(&atom_18_r8_0_eq, v656, memory_order_release);
  int v657 = (v164_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v657, memory_order_release);
  int v658 = (v166_r10==0);
  atomic_store_explicit(&atom_18_r10_0_eq, v658, memory_order_release);
  int v659 = (v168_r11==0);
  atomic_store_explicit(&atom_18_r11_0_eq, v659, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v170_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v172_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v174_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v176_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v178_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v180_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v182_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v184_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v186_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v188_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v190_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v192_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v660 = (v184_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v660, memory_order_release);
  int v661 = (v172_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v661, memory_order_release);
  int v662 = (v174_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v662, memory_order_release);
  int v663 = (v176_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v663, memory_order_release);
  int v664 = (v178_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v664, memory_order_release);
  int v665 = (v180_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v665, memory_order_release);
  int v666 = (v182_r6==0);
  atomic_store_explicit(&atom_19_r6_0_eq, v666, memory_order_release);
  int v667 = (v170_r7==1);
  atomic_store_explicit(&atom_19_r7_1_eq, v667, memory_order_release);
  int v668 = (v186_r8==0);
  atomic_store_explicit(&atom_19_r8_0_eq, v668, memory_order_release);
  int v669 = (v188_r9==0);
  atomic_store_explicit(&atom_19_r9_0_eq, v669, memory_order_release);
  int v670 = (v190_r10==0);
  atomic_store_explicit(&atom_19_r10_0_eq, v670, memory_order_release);
  int v671 = (v192_r11==0);
  atomic_store_explicit(&atom_19_r11_0_eq, v671, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v194_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v196_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v198_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v200_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v202_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v204_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v206_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v208_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v210_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v212_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v214_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v216_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v672 = (v210_r0==0);
  atomic_store_explicit(&atom_20_r0_0_eq, v672, memory_order_release);
  int v673 = (v196_r1==0);
  atomic_store_explicit(&atom_20_r1_0_eq, v673, memory_order_release);
  int v674 = (v198_r2==0);
  atomic_store_explicit(&atom_20_r2_0_eq, v674, memory_order_release);
  int v675 = (v200_r3==0);
  atomic_store_explicit(&atom_20_r3_0_eq, v675, memory_order_release);
  int v676 = (v202_r4==0);
  atomic_store_explicit(&atom_20_r4_0_eq, v676, memory_order_release);
  int v677 = (v204_r5==0);
  atomic_store_explicit(&atom_20_r5_0_eq, v677, memory_order_release);
  int v678 = (v206_r6==0);
  atomic_store_explicit(&atom_20_r6_0_eq, v678, memory_order_release);
  int v679 = (v208_r7==0);
  atomic_store_explicit(&atom_20_r7_0_eq, v679, memory_order_release);
  int v680 = (v194_r8==1);
  atomic_store_explicit(&atom_20_r8_1_eq, v680, memory_order_release);
  int v681 = (v212_r9==0);
  atomic_store_explicit(&atom_20_r9_0_eq, v681, memory_order_release);
  int v682 = (v214_r10==0);
  atomic_store_explicit(&atom_20_r10_0_eq, v682, memory_order_release);
  int v683 = (v216_r11==0);
  atomic_store_explicit(&atom_20_r11_0_eq, v683, memory_order_release);
  return NULL;
}




void *t21(void *arg){
label_22:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(21);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v218_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v220_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v222_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v224_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v226_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v228_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v230_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v232_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v234_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v236_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v238_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v240_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v684 = (v236_r0==0);
  atomic_store_explicit(&atom_21_r0_0_eq, v684, memory_order_release);
  int v685 = (v220_r1==0);
  atomic_store_explicit(&atom_21_r1_0_eq, v685, memory_order_release);
  int v686 = (v222_r2==0);
  atomic_store_explicit(&atom_21_r2_0_eq, v686, memory_order_release);
  int v687 = (v224_r3==0);
  atomic_store_explicit(&atom_21_r3_0_eq, v687, memory_order_release);
  int v688 = (v226_r4==0);
  atomic_store_explicit(&atom_21_r4_0_eq, v688, memory_order_release);
  int v689 = (v228_r5==0);
  atomic_store_explicit(&atom_21_r5_0_eq, v689, memory_order_release);
  int v690 = (v230_r6==0);
  atomic_store_explicit(&atom_21_r6_0_eq, v690, memory_order_release);
  int v691 = (v232_r7==0);
  atomic_store_explicit(&atom_21_r7_0_eq, v691, memory_order_release);
  int v692 = (v234_r8==0);
  atomic_store_explicit(&atom_21_r8_0_eq, v692, memory_order_release);
  int v693 = (v218_r9==1);
  atomic_store_explicit(&atom_21_r9_1_eq, v693, memory_order_release);
  int v694 = (v238_r10==0);
  atomic_store_explicit(&atom_21_r10_0_eq, v694, memory_order_release);
  int v695 = (v240_r11==0);
  atomic_store_explicit(&atom_21_r11_0_eq, v695, memory_order_release);
  return NULL;
}




void *t22(void *arg){
label_23:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(22);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v242_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
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
  int v262_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v264_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v696 = (v262_r0==0);
  atomic_store_explicit(&atom_22_r0_0_eq, v696, memory_order_release);
  int v697 = (v244_r1==0);
  atomic_store_explicit(&atom_22_r1_0_eq, v697, memory_order_release);
  int v698 = (v246_r2==0);
  atomic_store_explicit(&atom_22_r2_0_eq, v698, memory_order_release);
  int v699 = (v248_r3==0);
  atomic_store_explicit(&atom_22_r3_0_eq, v699, memory_order_release);
  int v700 = (v250_r4==0);
  atomic_store_explicit(&atom_22_r4_0_eq, v700, memory_order_release);
  int v701 = (v252_r5==0);
  atomic_store_explicit(&atom_22_r5_0_eq, v701, memory_order_release);
  int v702 = (v254_r6==0);
  atomic_store_explicit(&atom_22_r6_0_eq, v702, memory_order_release);
  int v703 = (v256_r7==0);
  atomic_store_explicit(&atom_22_r7_0_eq, v703, memory_order_release);
  int v704 = (v258_r8==0);
  atomic_store_explicit(&atom_22_r8_0_eq, v704, memory_order_release);
  int v705 = (v260_r9==0);
  atomic_store_explicit(&atom_22_r9_0_eq, v705, memory_order_release);
  int v706 = (v242_r10==1);
  atomic_store_explicit(&atom_22_r10_1_eq, v706, memory_order_release);
  int v707 = (v264_r11==0);
  atomic_store_explicit(&atom_22_r11_0_eq, v707, memory_order_release);
  return NULL;
}




void *t23(void *arg){
label_24:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(23);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v266_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v268_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v270_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v272_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v274_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v276_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v278_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v280_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v282_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v284_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v286_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v288_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v708 = (v288_r0==0);
  atomic_store_explicit(&atom_23_r0_0_eq, v708, memory_order_release);
  int v709 = (v268_r1==0);
  atomic_store_explicit(&atom_23_r1_0_eq, v709, memory_order_release);
  int v710 = (v270_r2==0);
  atomic_store_explicit(&atom_23_r2_0_eq, v710, memory_order_release);
  int v711 = (v272_r3==0);
  atomic_store_explicit(&atom_23_r3_0_eq, v711, memory_order_release);
  int v712 = (v274_r4==0);
  atomic_store_explicit(&atom_23_r4_0_eq, v712, memory_order_release);
  int v713 = (v276_r5==0);
  atomic_store_explicit(&atom_23_r5_0_eq, v713, memory_order_release);
  int v714 = (v278_r6==0);
  atomic_store_explicit(&atom_23_r6_0_eq, v714, memory_order_release);
  int v715 = (v280_r7==0);
  atomic_store_explicit(&atom_23_r7_0_eq, v715, memory_order_release);
  int v716 = (v282_r8==0);
  atomic_store_explicit(&atom_23_r8_0_eq, v716, memory_order_release);
  int v717 = (v284_r9==0);
  atomic_store_explicit(&atom_23_r9_0_eq, v717, memory_order_release);
  int v718 = (v286_r10==0);
  atomic_store_explicit(&atom_23_r10_0_eq, v718, memory_order_release);
  int v719 = (v266_r11==1);
  atomic_store_explicit(&atom_23_r11_1_eq, v719, memory_order_release);
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
  atomic_init(&vars[11], 0);
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
  pthread_t thr23; 


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
  pthread_create(&thr23, NULL , t23, NULL);

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
  pthread_join(thr23,NULL);

  int v289 = atomic_load_explicit(&atom_12_r0_1_eq, memory_order_acquire);
  int v290 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v291 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v292 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v293 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v294 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v295 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v296 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v297 = atomic_load_explicit(&atom_12_r8_0_eq, memory_order_acquire);
  int v298 = atomic_load_explicit(&atom_12_r9_0_eq, memory_order_acquire);
  int v299 = atomic_load_explicit(&atom_12_r10_0_eq, memory_order_acquire);
  int v300 = atomic_load_explicit(&atom_12_r11_0_eq, memory_order_acquire);
  int v301 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v302 = atomic_load_explicit(&atom_13_r1_1_eq, memory_order_acquire);
  int v303 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v304 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v305 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v306 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v307 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v308 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v309 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v310 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v311 = atomic_load_explicit(&atom_13_r10_0_eq, memory_order_acquire);
  int v312 = atomic_load_explicit(&atom_13_r11_0_eq, memory_order_acquire);
  int v313 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v314 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v315 = atomic_load_explicit(&atom_14_r2_1_eq, memory_order_acquire);
  int v316 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v317 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v318 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v319 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v320 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v321 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v322 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v323 = atomic_load_explicit(&atom_14_r10_0_eq, memory_order_acquire);
  int v324 = atomic_load_explicit(&atom_14_r11_0_eq, memory_order_acquire);
  int v325 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v326 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v327 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v328 = atomic_load_explicit(&atom_15_r3_1_eq, memory_order_acquire);
  int v329 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v330 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v331 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v332 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v333 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v334 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v335 = atomic_load_explicit(&atom_15_r10_0_eq, memory_order_acquire);
  int v336 = atomic_load_explicit(&atom_15_r11_0_eq, memory_order_acquire);
  int v337 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v338 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v339 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v340 = atomic_load_explicit(&atom_16_r3_0_eq, memory_order_acquire);
  int v341 = atomic_load_explicit(&atom_16_r4_1_eq, memory_order_acquire);
  int v342 = atomic_load_explicit(&atom_16_r5_0_eq, memory_order_acquire);
  int v343 = atomic_load_explicit(&atom_16_r6_0_eq, memory_order_acquire);
  int v344 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v345 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v346 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v347 = atomic_load_explicit(&atom_16_r10_0_eq, memory_order_acquire);
  int v348 = atomic_load_explicit(&atom_16_r11_0_eq, memory_order_acquire);
  int v349 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v350 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v351 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v352 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v353 = atomic_load_explicit(&atom_17_r4_0_eq, memory_order_acquire);
  int v354 = atomic_load_explicit(&atom_17_r5_1_eq, memory_order_acquire);
  int v355 = atomic_load_explicit(&atom_17_r6_0_eq, memory_order_acquire);
  int v356 = atomic_load_explicit(&atom_17_r7_0_eq, memory_order_acquire);
  int v357 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v358 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v359 = atomic_load_explicit(&atom_17_r10_0_eq, memory_order_acquire);
  int v360 = atomic_load_explicit(&atom_17_r11_0_eq, memory_order_acquire);
  int v361 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v362 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v363 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v364 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v365 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v366 = atomic_load_explicit(&atom_18_r5_0_eq, memory_order_acquire);
  int v367 = atomic_load_explicit(&atom_18_r6_1_eq, memory_order_acquire);
  int v368 = atomic_load_explicit(&atom_18_r7_0_eq, memory_order_acquire);
  int v369 = atomic_load_explicit(&atom_18_r8_0_eq, memory_order_acquire);
  int v370 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v371 = atomic_load_explicit(&atom_18_r10_0_eq, memory_order_acquire);
  int v372 = atomic_load_explicit(&atom_18_r11_0_eq, memory_order_acquire);
  int v373 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v374 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v375 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v376 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v377 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v378 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v379 = atomic_load_explicit(&atom_19_r6_0_eq, memory_order_acquire);
  int v380 = atomic_load_explicit(&atom_19_r7_1_eq, memory_order_acquire);
  int v381 = atomic_load_explicit(&atom_19_r8_0_eq, memory_order_acquire);
  int v382 = atomic_load_explicit(&atom_19_r9_0_eq, memory_order_acquire);
  int v383 = atomic_load_explicit(&atom_19_r10_0_eq, memory_order_acquire);
  int v384 = atomic_load_explicit(&atom_19_r11_0_eq, memory_order_acquire);
  int v385 = atomic_load_explicit(&atom_20_r0_0_eq, memory_order_acquire);
  int v386 = atomic_load_explicit(&atom_20_r1_0_eq, memory_order_acquire);
  int v387 = atomic_load_explicit(&atom_20_r2_0_eq, memory_order_acquire);
  int v388 = atomic_load_explicit(&atom_20_r3_0_eq, memory_order_acquire);
  int v389 = atomic_load_explicit(&atom_20_r4_0_eq, memory_order_acquire);
  int v390 = atomic_load_explicit(&atom_20_r5_0_eq, memory_order_acquire);
  int v391 = atomic_load_explicit(&atom_20_r6_0_eq, memory_order_acquire);
  int v392 = atomic_load_explicit(&atom_20_r7_0_eq, memory_order_acquire);
  int v393 = atomic_load_explicit(&atom_20_r8_1_eq, memory_order_acquire);
  int v394 = atomic_load_explicit(&atom_20_r9_0_eq, memory_order_acquire);
  int v395 = atomic_load_explicit(&atom_20_r10_0_eq, memory_order_acquire);
  int v396 = atomic_load_explicit(&atom_20_r11_0_eq, memory_order_acquire);
  int v397 = atomic_load_explicit(&atom_21_r0_0_eq, memory_order_acquire);
  int v398 = atomic_load_explicit(&atom_21_r1_0_eq, memory_order_acquire);
  int v399 = atomic_load_explicit(&atom_21_r2_0_eq, memory_order_acquire);
  int v400 = atomic_load_explicit(&atom_21_r3_0_eq, memory_order_acquire);
  int v401 = atomic_load_explicit(&atom_21_r4_0_eq, memory_order_acquire);
  int v402 = atomic_load_explicit(&atom_21_r5_0_eq, memory_order_acquire);
  int v403 = atomic_load_explicit(&atom_21_r6_0_eq, memory_order_acquire);
  int v404 = atomic_load_explicit(&atom_21_r7_0_eq, memory_order_acquire);
  int v405 = atomic_load_explicit(&atom_21_r8_0_eq, memory_order_acquire);
  int v406 = atomic_load_explicit(&atom_21_r9_1_eq, memory_order_acquire);
  int v407 = atomic_load_explicit(&atom_21_r10_0_eq, memory_order_acquire);
  int v408 = atomic_load_explicit(&atom_21_r11_0_eq, memory_order_acquire);
  int v409 = atomic_load_explicit(&atom_22_r0_0_eq, memory_order_acquire);
  int v410 = atomic_load_explicit(&atom_22_r1_0_eq, memory_order_acquire);
  int v411 = atomic_load_explicit(&atom_22_r2_0_eq, memory_order_acquire);
  int v412 = atomic_load_explicit(&atom_22_r3_0_eq, memory_order_acquire);
  int v413 = atomic_load_explicit(&atom_22_r4_0_eq, memory_order_acquire);
  int v414 = atomic_load_explicit(&atom_22_r5_0_eq, memory_order_acquire);
  int v415 = atomic_load_explicit(&atom_22_r6_0_eq, memory_order_acquire);
  int v416 = atomic_load_explicit(&atom_22_r7_0_eq, memory_order_acquire);
  int v417 = atomic_load_explicit(&atom_22_r8_0_eq, memory_order_acquire);
  int v418 = atomic_load_explicit(&atom_22_r9_0_eq, memory_order_acquire);
  int v419 = atomic_load_explicit(&atom_22_r10_1_eq, memory_order_acquire);
  int v420 = atomic_load_explicit(&atom_22_r11_0_eq, memory_order_acquire);
  int v421 = atomic_load_explicit(&atom_23_r0_0_eq, memory_order_acquire);
  int v422 = atomic_load_explicit(&atom_23_r1_0_eq, memory_order_acquire);
  int v423 = atomic_load_explicit(&atom_23_r2_0_eq, memory_order_acquire);
  int v424 = atomic_load_explicit(&atom_23_r3_0_eq, memory_order_acquire);
  int v425 = atomic_load_explicit(&atom_23_r4_0_eq, memory_order_acquire);
  int v426 = atomic_load_explicit(&atom_23_r5_0_eq, memory_order_acquire);
  int v427 = atomic_load_explicit(&atom_23_r6_0_eq, memory_order_acquire);
  int v428 = atomic_load_explicit(&atom_23_r7_0_eq, memory_order_acquire);
  int v429 = atomic_load_explicit(&atom_23_r8_0_eq, memory_order_acquire);
  int v430 = atomic_load_explicit(&atom_23_r9_0_eq, memory_order_acquire);
  int v431 = atomic_load_explicit(&atom_23_r10_0_eq, memory_order_acquire);
  int v432 = atomic_load_explicit(&atom_23_r11_1_eq, memory_order_acquire);
  int v433_conj = v431 & v432;
  int v434_conj = v430 & v433_conj;
  int v435_conj = v429 & v434_conj;
  int v436_conj = v428 & v435_conj;
  int v437_conj = v427 & v436_conj;
  int v438_conj = v426 & v437_conj;
  int v439_conj = v425 & v438_conj;
  int v440_conj = v424 & v439_conj;
  int v441_conj = v423 & v440_conj;
  int v442_conj = v422 & v441_conj;
  int v443_conj = v421 & v442_conj;
  int v444_conj = v420 & v443_conj;
  int v445_conj = v419 & v444_conj;
  int v446_conj = v418 & v445_conj;
  int v447_conj = v417 & v446_conj;
  int v448_conj = v416 & v447_conj;
  int v449_conj = v415 & v448_conj;
  int v450_conj = v414 & v449_conj;
  int v451_conj = v413 & v450_conj;
  int v452_conj = v412 & v451_conj;
  int v453_conj = v411 & v452_conj;
  int v454_conj = v410 & v453_conj;
  int v455_conj = v409 & v454_conj;
  int v456_conj = v408 & v455_conj;
  int v457_conj = v407 & v456_conj;
  int v458_conj = v406 & v457_conj;
  int v459_conj = v405 & v458_conj;
  int v460_conj = v404 & v459_conj;
  int v461_conj = v403 & v460_conj;
  int v462_conj = v402 & v461_conj;
  int v463_conj = v401 & v462_conj;
  int v464_conj = v400 & v463_conj;
  int v465_conj = v399 & v464_conj;
  int v466_conj = v398 & v465_conj;
  int v467_conj = v397 & v466_conj;
  int v468_conj = v396 & v467_conj;
  int v469_conj = v395 & v468_conj;
  int v470_conj = v394 & v469_conj;
  int v471_conj = v393 & v470_conj;
  int v472_conj = v392 & v471_conj;
  int v473_conj = v391 & v472_conj;
  int v474_conj = v390 & v473_conj;
  int v475_conj = v389 & v474_conj;
  int v476_conj = v388 & v475_conj;
  int v477_conj = v387 & v476_conj;
  int v478_conj = v386 & v477_conj;
  int v479_conj = v385 & v478_conj;
  int v480_conj = v384 & v479_conj;
  int v481_conj = v383 & v480_conj;
  int v482_conj = v382 & v481_conj;
  int v483_conj = v381 & v482_conj;
  int v484_conj = v380 & v483_conj;
  int v485_conj = v379 & v484_conj;
  int v486_conj = v378 & v485_conj;
  int v487_conj = v377 & v486_conj;
  int v488_conj = v376 & v487_conj;
  int v489_conj = v375 & v488_conj;
  int v490_conj = v374 & v489_conj;
  int v491_conj = v373 & v490_conj;
  int v492_conj = v372 & v491_conj;
  int v493_conj = v371 & v492_conj;
  int v494_conj = v370 & v493_conj;
  int v495_conj = v369 & v494_conj;
  int v496_conj = v368 & v495_conj;
  int v497_conj = v367 & v496_conj;
  int v498_conj = v366 & v497_conj;
  int v499_conj = v365 & v498_conj;
  int v500_conj = v364 & v499_conj;
  int v501_conj = v363 & v500_conj;
  int v502_conj = v362 & v501_conj;
  int v503_conj = v361 & v502_conj;
  int v504_conj = v360 & v503_conj;
  int v505_conj = v359 & v504_conj;
  int v506_conj = v358 & v505_conj;
  int v507_conj = v357 & v506_conj;
  int v508_conj = v356 & v507_conj;
  int v509_conj = v355 & v508_conj;
  int v510_conj = v354 & v509_conj;
  int v511_conj = v353 & v510_conj;
  int v512_conj = v352 & v511_conj;
  int v513_conj = v351 & v512_conj;
  int v514_conj = v350 & v513_conj;
  int v515_conj = v349 & v514_conj;
  int v516_conj = v348 & v515_conj;
  int v517_conj = v347 & v516_conj;
  int v518_conj = v346 & v517_conj;
  int v519_conj = v345 & v518_conj;
  int v520_conj = v344 & v519_conj;
  int v521_conj = v343 & v520_conj;
  int v522_conj = v342 & v521_conj;
  int v523_conj = v341 & v522_conj;
  int v524_conj = v340 & v523_conj;
  int v525_conj = v339 & v524_conj;
  int v526_conj = v338 & v525_conj;
  int v527_conj = v337 & v526_conj;
  int v528_conj = v336 & v527_conj;
  int v529_conj = v335 & v528_conj;
  int v530_conj = v334 & v529_conj;
  int v531_conj = v333 & v530_conj;
  int v532_conj = v332 & v531_conj;
  int v533_conj = v331 & v532_conj;
  int v534_conj = v330 & v533_conj;
  int v535_conj = v329 & v534_conj;
  int v536_conj = v328 & v535_conj;
  int v537_conj = v327 & v536_conj;
  int v538_conj = v326 & v537_conj;
  int v539_conj = v325 & v538_conj;
  int v540_conj = v324 & v539_conj;
  int v541_conj = v323 & v540_conj;
  int v542_conj = v322 & v541_conj;
  int v543_conj = v321 & v542_conj;
  int v544_conj = v320 & v543_conj;
  int v545_conj = v319 & v544_conj;
  int v546_conj = v318 & v545_conj;
  int v547_conj = v317 & v546_conj;
  int v548_conj = v316 & v547_conj;
  int v549_conj = v315 & v548_conj;
  int v550_conj = v314 & v549_conj;
  int v551_conj = v313 & v550_conj;
  int v552_conj = v312 & v551_conj;
  int v553_conj = v311 & v552_conj;
  int v554_conj = v310 & v553_conj;
  int v555_conj = v309 & v554_conj;
  int v556_conj = v308 & v555_conj;
  int v557_conj = v307 & v556_conj;
  int v558_conj = v306 & v557_conj;
  int v559_conj = v305 & v558_conj;
  int v560_conj = v304 & v559_conj;
  int v561_conj = v303 & v560_conj;
  int v562_conj = v302 & v561_conj;
  int v563_conj = v301 & v562_conj;
  int v564_conj = v300 & v563_conj;
  int v565_conj = v299 & v564_conj;
  int v566_conj = v298 & v565_conj;
  int v567_conj = v297 & v566_conj;
  int v568_conj = v296 & v567_conj;
  int v569_conj = v295 & v568_conj;
  int v570_conj = v294 & v569_conj;
  int v571_conj = v293 & v570_conj;
  int v572_conj = v292 & v571_conj;
  int v573_conj = v291 & v572_conj;
  int v574_conj = v290 & v573_conj;
  int v575_conj = v289 & v574_conj;
  if (v575_conj == 1) assert(0);
  return 0;
}
