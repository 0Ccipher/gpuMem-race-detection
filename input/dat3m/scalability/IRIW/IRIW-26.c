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
atomic_int vars[13]; 
atomic_int atom_13_r0_1_eq; 
atomic_int atom_13_r1_0_eq; 
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
atomic_int atom_13_r12_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_1_eq; 
atomic_int atom_14_r2_0_eq; 
atomic_int atom_14_r3_0_eq; 
atomic_int atom_14_r4_0_eq; 
atomic_int atom_14_r5_0_eq; 
atomic_int atom_14_r6_0_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_14_r8_0_eq; 
atomic_int atom_14_r9_0_eq; 
atomic_int atom_14_r10_0_eq; 
atomic_int atom_14_r11_0_eq; 
atomic_int atom_14_r12_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_1_eq; 
atomic_int atom_15_r3_0_eq; 
atomic_int atom_15_r4_0_eq; 
atomic_int atom_15_r5_0_eq; 
atomic_int atom_15_r6_0_eq; 
atomic_int atom_15_r7_0_eq; 
atomic_int atom_15_r8_0_eq; 
atomic_int atom_15_r9_0_eq; 
atomic_int atom_15_r10_0_eq; 
atomic_int atom_15_r11_0_eq; 
atomic_int atom_15_r12_0_eq; 
atomic_int atom_16_r0_0_eq; 
atomic_int atom_16_r1_0_eq; 
atomic_int atom_16_r2_0_eq; 
atomic_int atom_16_r3_1_eq; 
atomic_int atom_16_r4_0_eq; 
atomic_int atom_16_r5_0_eq; 
atomic_int atom_16_r6_0_eq; 
atomic_int atom_16_r7_0_eq; 
atomic_int atom_16_r8_0_eq; 
atomic_int atom_16_r9_0_eq; 
atomic_int atom_16_r10_0_eq; 
atomic_int atom_16_r11_0_eq; 
atomic_int atom_16_r12_0_eq; 
atomic_int atom_17_r0_0_eq; 
atomic_int atom_17_r1_0_eq; 
atomic_int atom_17_r2_0_eq; 
atomic_int atom_17_r3_0_eq; 
atomic_int atom_17_r4_1_eq; 
atomic_int atom_17_r5_0_eq; 
atomic_int atom_17_r6_0_eq; 
atomic_int atom_17_r7_0_eq; 
atomic_int atom_17_r8_0_eq; 
atomic_int atom_17_r9_0_eq; 
atomic_int atom_17_r10_0_eq; 
atomic_int atom_17_r11_0_eq; 
atomic_int atom_17_r12_0_eq; 
atomic_int atom_18_r0_0_eq; 
atomic_int atom_18_r1_0_eq; 
atomic_int atom_18_r2_0_eq; 
atomic_int atom_18_r3_0_eq; 
atomic_int atom_18_r4_0_eq; 
atomic_int atom_18_r5_1_eq; 
atomic_int atom_18_r6_0_eq; 
atomic_int atom_18_r7_0_eq; 
atomic_int atom_18_r8_0_eq; 
atomic_int atom_18_r9_0_eq; 
atomic_int atom_18_r10_0_eq; 
atomic_int atom_18_r11_0_eq; 
atomic_int atom_18_r12_0_eq; 
atomic_int atom_19_r0_0_eq; 
atomic_int atom_19_r1_0_eq; 
atomic_int atom_19_r2_0_eq; 
atomic_int atom_19_r3_0_eq; 
atomic_int atom_19_r4_0_eq; 
atomic_int atom_19_r5_0_eq; 
atomic_int atom_19_r6_1_eq; 
atomic_int atom_19_r7_0_eq; 
atomic_int atom_19_r8_0_eq; 
atomic_int atom_19_r9_0_eq; 
atomic_int atom_19_r10_0_eq; 
atomic_int atom_19_r11_0_eq; 
atomic_int atom_19_r12_0_eq; 
atomic_int atom_20_r0_0_eq; 
atomic_int atom_20_r1_0_eq; 
atomic_int atom_20_r2_0_eq; 
atomic_int atom_20_r3_0_eq; 
atomic_int atom_20_r4_0_eq; 
atomic_int atom_20_r5_0_eq; 
atomic_int atom_20_r6_0_eq; 
atomic_int atom_20_r7_1_eq; 
atomic_int atom_20_r8_0_eq; 
atomic_int atom_20_r9_0_eq; 
atomic_int atom_20_r10_0_eq; 
atomic_int atom_20_r11_0_eq; 
atomic_int atom_20_r12_0_eq; 
atomic_int atom_21_r0_0_eq; 
atomic_int atom_21_r1_0_eq; 
atomic_int atom_21_r2_0_eq; 
atomic_int atom_21_r3_0_eq; 
atomic_int atom_21_r4_0_eq; 
atomic_int atom_21_r5_0_eq; 
atomic_int atom_21_r6_0_eq; 
atomic_int atom_21_r7_0_eq; 
atomic_int atom_21_r8_1_eq; 
atomic_int atom_21_r9_0_eq; 
atomic_int atom_21_r10_0_eq; 
atomic_int atom_21_r11_0_eq; 
atomic_int atom_21_r12_0_eq; 
atomic_int atom_22_r0_0_eq; 
atomic_int atom_22_r1_0_eq; 
atomic_int atom_22_r2_0_eq; 
atomic_int atom_22_r3_0_eq; 
atomic_int atom_22_r4_0_eq; 
atomic_int atom_22_r5_0_eq; 
atomic_int atom_22_r6_0_eq; 
atomic_int atom_22_r7_0_eq; 
atomic_int atom_22_r8_0_eq; 
atomic_int atom_22_r9_1_eq; 
atomic_int atom_22_r10_0_eq; 
atomic_int atom_22_r11_0_eq; 
atomic_int atom_22_r12_0_eq; 
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
atomic_int atom_23_r10_1_eq; 
atomic_int atom_23_r11_0_eq; 
atomic_int atom_23_r12_0_eq; 
atomic_int atom_24_r0_0_eq; 
atomic_int atom_24_r1_0_eq; 
atomic_int atom_24_r2_0_eq; 
atomic_int atom_24_r3_0_eq; 
atomic_int atom_24_r4_0_eq; 
atomic_int atom_24_r5_0_eq; 
atomic_int atom_24_r6_0_eq; 
atomic_int atom_24_r7_0_eq; 
atomic_int atom_24_r8_0_eq; 
atomic_int atom_24_r9_0_eq; 
atomic_int atom_24_r10_0_eq; 
atomic_int atom_24_r11_1_eq; 
atomic_int atom_24_r12_0_eq; 
atomic_int atom_25_r0_0_eq; 
atomic_int atom_25_r1_0_eq; 
atomic_int atom_25_r2_0_eq; 
atomic_int atom_25_r3_0_eq; 
atomic_int atom_25_r4_0_eq; 
atomic_int atom_25_r5_0_eq; 
atomic_int atom_25_r6_0_eq; 
atomic_int atom_25_r7_0_eq; 
atomic_int atom_25_r8_0_eq; 
atomic_int atom_25_r9_0_eq; 
atomic_int atom_25_r10_0_eq; 
atomic_int atom_25_r11_0_eq; 
atomic_int atom_25_r12_1_eq; 



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
  atomic_store_explicit(&vars[12], 1, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
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
__VERIFIER_memory_scope_device();
  int v26_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v676 = (v2_r0==1);
  atomic_store_explicit(&atom_13_r0_1_eq, v676, memory_order_release);
  int v677 = (v4_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v677, memory_order_release);
  int v678 = (v6_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v678, memory_order_release);
  int v679 = (v8_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v679, memory_order_release);
  int v680 = (v10_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v680, memory_order_release);
  int v681 = (v12_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v681, memory_order_release);
  int v682 = (v14_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v682, memory_order_release);
  int v683 = (v16_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v683, memory_order_release);
  int v684 = (v18_r8==0);
  atomic_store_explicit(&atom_13_r8_0_eq, v684, memory_order_release);
  int v685 = (v20_r9==0);
  atomic_store_explicit(&atom_13_r9_0_eq, v685, memory_order_release);
  int v686 = (v22_r10==0);
  atomic_store_explicit(&atom_13_r10_0_eq, v686, memory_order_release);
  int v687 = (v24_r11==0);
  atomic_store_explicit(&atom_13_r11_0_eq, v687, memory_order_release);
  int v688 = (v26_r12==0);
  atomic_store_explicit(&atom_13_r12_0_eq, v688, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v28_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v689 = (v30_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v689, memory_order_release);
  int v690 = (v28_r1==1);
  atomic_store_explicit(&atom_14_r1_1_eq, v690, memory_order_release);
  int v691 = (v32_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v691, memory_order_release);
  int v692 = (v34_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v692, memory_order_release);
  int v693 = (v36_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v693, memory_order_release);
  int v694 = (v38_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v694, memory_order_release);
  int v695 = (v40_r6==0);
  atomic_store_explicit(&atom_14_r6_0_eq, v695, memory_order_release);
  int v696 = (v42_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v696, memory_order_release);
  int v697 = (v44_r8==0);
  atomic_store_explicit(&atom_14_r8_0_eq, v697, memory_order_release);
  int v698 = (v46_r9==0);
  atomic_store_explicit(&atom_14_r9_0_eq, v698, memory_order_release);
  int v699 = (v48_r10==0);
  atomic_store_explicit(&atom_14_r10_0_eq, v699, memory_order_release);
  int v700 = (v50_r11==0);
  atomic_store_explicit(&atom_14_r11_0_eq, v700, memory_order_release);
  int v701 = (v52_r12==0);
  atomic_store_explicit(&atom_14_r12_0_eq, v701, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v54_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v74_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v702 = (v58_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v702, memory_order_release);
  int v703 = (v56_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v703, memory_order_release);
  int v704 = (v54_r2==1);
  atomic_store_explicit(&atom_15_r2_1_eq, v704, memory_order_release);
  int v705 = (v60_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v705, memory_order_release);
  int v706 = (v62_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v706, memory_order_release);
  int v707 = (v64_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v707, memory_order_release);
  int v708 = (v66_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v708, memory_order_release);
  int v709 = (v68_r7==0);
  atomic_store_explicit(&atom_15_r7_0_eq, v709, memory_order_release);
  int v710 = (v70_r8==0);
  atomic_store_explicit(&atom_15_r8_0_eq, v710, memory_order_release);
  int v711 = (v72_r9==0);
  atomic_store_explicit(&atom_15_r9_0_eq, v711, memory_order_release);
  int v712 = (v74_r10==0);
  atomic_store_explicit(&atom_15_r10_0_eq, v712, memory_order_release);
  int v713 = (v76_r11==0);
  atomic_store_explicit(&atom_15_r11_0_eq, v713, memory_order_release);
  int v714 = (v78_r12==0);
  atomic_store_explicit(&atom_15_r12_0_eq, v714, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v80_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v98_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v102_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v715 = (v86_r0==0);
  atomic_store_explicit(&atom_16_r0_0_eq, v715, memory_order_release);
  int v716 = (v82_r1==0);
  atomic_store_explicit(&atom_16_r1_0_eq, v716, memory_order_release);
  int v717 = (v84_r2==0);
  atomic_store_explicit(&atom_16_r2_0_eq, v717, memory_order_release);
  int v718 = (v80_r3==1);
  atomic_store_explicit(&atom_16_r3_1_eq, v718, memory_order_release);
  int v719 = (v88_r4==0);
  atomic_store_explicit(&atom_16_r4_0_eq, v719, memory_order_release);
  int v720 = (v90_r5==0);
  atomic_store_explicit(&atom_16_r5_0_eq, v720, memory_order_release);
  int v721 = (v92_r6==0);
  atomic_store_explicit(&atom_16_r6_0_eq, v721, memory_order_release);
  int v722 = (v94_r7==0);
  atomic_store_explicit(&atom_16_r7_0_eq, v722, memory_order_release);
  int v723 = (v96_r8==0);
  atomic_store_explicit(&atom_16_r8_0_eq, v723, memory_order_release);
  int v724 = (v98_r9==0);
  atomic_store_explicit(&atom_16_r9_0_eq, v724, memory_order_release);
  int v725 = (v100_r10==0);
  atomic_store_explicit(&atom_16_r10_0_eq, v725, memory_order_release);
  int v726 = (v102_r11==0);
  atomic_store_explicit(&atom_16_r11_0_eq, v726, memory_order_release);
  int v727 = (v104_r12==0);
  atomic_store_explicit(&atom_16_r12_0_eq, v727, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v106_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v110_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v112_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v114_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v122_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v128_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v130_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v728 = (v114_r0==0);
  atomic_store_explicit(&atom_17_r0_0_eq, v728, memory_order_release);
  int v729 = (v108_r1==0);
  atomic_store_explicit(&atom_17_r1_0_eq, v729, memory_order_release);
  int v730 = (v110_r2==0);
  atomic_store_explicit(&atom_17_r2_0_eq, v730, memory_order_release);
  int v731 = (v112_r3==0);
  atomic_store_explicit(&atom_17_r3_0_eq, v731, memory_order_release);
  int v732 = (v106_r4==1);
  atomic_store_explicit(&atom_17_r4_1_eq, v732, memory_order_release);
  int v733 = (v116_r5==0);
  atomic_store_explicit(&atom_17_r5_0_eq, v733, memory_order_release);
  int v734 = (v118_r6==0);
  atomic_store_explicit(&atom_17_r6_0_eq, v734, memory_order_release);
  int v735 = (v120_r7==0);
  atomic_store_explicit(&atom_17_r7_0_eq, v735, memory_order_release);
  int v736 = (v122_r8==0);
  atomic_store_explicit(&atom_17_r8_0_eq, v736, memory_order_release);
  int v737 = (v124_r9==0);
  atomic_store_explicit(&atom_17_r9_0_eq, v737, memory_order_release);
  int v738 = (v126_r10==0);
  atomic_store_explicit(&atom_17_r10_0_eq, v738, memory_order_release);
  int v739 = (v128_r11==0);
  atomic_store_explicit(&atom_17_r11_0_eq, v739, memory_order_release);
  int v740 = (v130_r12==0);
  atomic_store_explicit(&atom_17_r12_0_eq, v740, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v132_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v134_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v136_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v138_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v140_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v142_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v144_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v146_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v148_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v150_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v152_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v154_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v156_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v741 = (v142_r0==0);
  atomic_store_explicit(&atom_18_r0_0_eq, v741, memory_order_release);
  int v742 = (v134_r1==0);
  atomic_store_explicit(&atom_18_r1_0_eq, v742, memory_order_release);
  int v743 = (v136_r2==0);
  atomic_store_explicit(&atom_18_r2_0_eq, v743, memory_order_release);
  int v744 = (v138_r3==0);
  atomic_store_explicit(&atom_18_r3_0_eq, v744, memory_order_release);
  int v745 = (v140_r4==0);
  atomic_store_explicit(&atom_18_r4_0_eq, v745, memory_order_release);
  int v746 = (v132_r5==1);
  atomic_store_explicit(&atom_18_r5_1_eq, v746, memory_order_release);
  int v747 = (v144_r6==0);
  atomic_store_explicit(&atom_18_r6_0_eq, v747, memory_order_release);
  int v748 = (v146_r7==0);
  atomic_store_explicit(&atom_18_r7_0_eq, v748, memory_order_release);
  int v749 = (v148_r8==0);
  atomic_store_explicit(&atom_18_r8_0_eq, v749, memory_order_release);
  int v750 = (v150_r9==0);
  atomic_store_explicit(&atom_18_r9_0_eq, v750, memory_order_release);
  int v751 = (v152_r10==0);
  atomic_store_explicit(&atom_18_r10_0_eq, v751, memory_order_release);
  int v752 = (v154_r11==0);
  atomic_store_explicit(&atom_18_r11_0_eq, v752, memory_order_release);
  int v753 = (v156_r12==0);
  atomic_store_explicit(&atom_18_r12_0_eq, v753, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v158_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v160_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v162_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v164_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v166_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v168_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v170_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v172_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v174_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v176_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v178_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v180_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v182_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v754 = (v170_r0==0);
  atomic_store_explicit(&atom_19_r0_0_eq, v754, memory_order_release);
  int v755 = (v160_r1==0);
  atomic_store_explicit(&atom_19_r1_0_eq, v755, memory_order_release);
  int v756 = (v162_r2==0);
  atomic_store_explicit(&atom_19_r2_0_eq, v756, memory_order_release);
  int v757 = (v164_r3==0);
  atomic_store_explicit(&atom_19_r3_0_eq, v757, memory_order_release);
  int v758 = (v166_r4==0);
  atomic_store_explicit(&atom_19_r4_0_eq, v758, memory_order_release);
  int v759 = (v168_r5==0);
  atomic_store_explicit(&atom_19_r5_0_eq, v759, memory_order_release);
  int v760 = (v158_r6==1);
  atomic_store_explicit(&atom_19_r6_1_eq, v760, memory_order_release);
  int v761 = (v172_r7==0);
  atomic_store_explicit(&atom_19_r7_0_eq, v761, memory_order_release);
  int v762 = (v174_r8==0);
  atomic_store_explicit(&atom_19_r8_0_eq, v762, memory_order_release);
  int v763 = (v176_r9==0);
  atomic_store_explicit(&atom_19_r9_0_eq, v763, memory_order_release);
  int v764 = (v178_r10==0);
  atomic_store_explicit(&atom_19_r10_0_eq, v764, memory_order_release);
  int v765 = (v180_r11==0);
  atomic_store_explicit(&atom_19_r11_0_eq, v765, memory_order_release);
  int v766 = (v182_r12==0);
  atomic_store_explicit(&atom_19_r12_0_eq, v766, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v184_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v186_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v188_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v190_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v192_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v194_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v196_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v198_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v200_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v202_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v204_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v206_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v208_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v767 = (v198_r0==0);
  atomic_store_explicit(&atom_20_r0_0_eq, v767, memory_order_release);
  int v768 = (v186_r1==0);
  atomic_store_explicit(&atom_20_r1_0_eq, v768, memory_order_release);
  int v769 = (v188_r2==0);
  atomic_store_explicit(&atom_20_r2_0_eq, v769, memory_order_release);
  int v770 = (v190_r3==0);
  atomic_store_explicit(&atom_20_r3_0_eq, v770, memory_order_release);
  int v771 = (v192_r4==0);
  atomic_store_explicit(&atom_20_r4_0_eq, v771, memory_order_release);
  int v772 = (v194_r5==0);
  atomic_store_explicit(&atom_20_r5_0_eq, v772, memory_order_release);
  int v773 = (v196_r6==0);
  atomic_store_explicit(&atom_20_r6_0_eq, v773, memory_order_release);
  int v774 = (v184_r7==1);
  atomic_store_explicit(&atom_20_r7_1_eq, v774, memory_order_release);
  int v775 = (v200_r8==0);
  atomic_store_explicit(&atom_20_r8_0_eq, v775, memory_order_release);
  int v776 = (v202_r9==0);
  atomic_store_explicit(&atom_20_r9_0_eq, v776, memory_order_release);
  int v777 = (v204_r10==0);
  atomic_store_explicit(&atom_20_r10_0_eq, v777, memory_order_release);
  int v778 = (v206_r11==0);
  atomic_store_explicit(&atom_20_r11_0_eq, v778, memory_order_release);
  int v779 = (v208_r12==0);
  atomic_store_explicit(&atom_20_r12_0_eq, v779, memory_order_release);
  return NULL;
}




void *t21(void *arg){
label_22:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(21);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v210_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v212_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v214_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v216_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v218_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v220_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v222_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v224_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v226_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v228_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v230_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v232_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v234_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v780 = (v226_r0==0);
  atomic_store_explicit(&atom_21_r0_0_eq, v780, memory_order_release);
  int v781 = (v212_r1==0);
  atomic_store_explicit(&atom_21_r1_0_eq, v781, memory_order_release);
  int v782 = (v214_r2==0);
  atomic_store_explicit(&atom_21_r2_0_eq, v782, memory_order_release);
  int v783 = (v216_r3==0);
  atomic_store_explicit(&atom_21_r3_0_eq, v783, memory_order_release);
  int v784 = (v218_r4==0);
  atomic_store_explicit(&atom_21_r4_0_eq, v784, memory_order_release);
  int v785 = (v220_r5==0);
  atomic_store_explicit(&atom_21_r5_0_eq, v785, memory_order_release);
  int v786 = (v222_r6==0);
  atomic_store_explicit(&atom_21_r6_0_eq, v786, memory_order_release);
  int v787 = (v224_r7==0);
  atomic_store_explicit(&atom_21_r7_0_eq, v787, memory_order_release);
  int v788 = (v210_r8==1);
  atomic_store_explicit(&atom_21_r8_1_eq, v788, memory_order_release);
  int v789 = (v228_r9==0);
  atomic_store_explicit(&atom_21_r9_0_eq, v789, memory_order_release);
  int v790 = (v230_r10==0);
  atomic_store_explicit(&atom_21_r10_0_eq, v790, memory_order_release);
  int v791 = (v232_r11==0);
  atomic_store_explicit(&atom_21_r11_0_eq, v791, memory_order_release);
  int v792 = (v234_r12==0);
  atomic_store_explicit(&atom_21_r12_0_eq, v792, memory_order_release);
  return NULL;
}




void *t22(void *arg){
label_23:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(22);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v236_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v238_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v240_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v242_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v244_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v246_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v248_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v250_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v252_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v254_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v256_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v258_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v260_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v793 = (v254_r0==0);
  atomic_store_explicit(&atom_22_r0_0_eq, v793, memory_order_release);
  int v794 = (v238_r1==0);
  atomic_store_explicit(&atom_22_r1_0_eq, v794, memory_order_release);
  int v795 = (v240_r2==0);
  atomic_store_explicit(&atom_22_r2_0_eq, v795, memory_order_release);
  int v796 = (v242_r3==0);
  atomic_store_explicit(&atom_22_r3_0_eq, v796, memory_order_release);
  int v797 = (v244_r4==0);
  atomic_store_explicit(&atom_22_r4_0_eq, v797, memory_order_release);
  int v798 = (v246_r5==0);
  atomic_store_explicit(&atom_22_r5_0_eq, v798, memory_order_release);
  int v799 = (v248_r6==0);
  atomic_store_explicit(&atom_22_r6_0_eq, v799, memory_order_release);
  int v800 = (v250_r7==0);
  atomic_store_explicit(&atom_22_r7_0_eq, v800, memory_order_release);
  int v801 = (v252_r8==0);
  atomic_store_explicit(&atom_22_r8_0_eq, v801, memory_order_release);
  int v802 = (v236_r9==1);
  atomic_store_explicit(&atom_22_r9_1_eq, v802, memory_order_release);
  int v803 = (v256_r10==0);
  atomic_store_explicit(&atom_22_r10_0_eq, v803, memory_order_release);
  int v804 = (v258_r11==0);
  atomic_store_explicit(&atom_22_r11_0_eq, v804, memory_order_release);
  int v805 = (v260_r12==0);
  atomic_store_explicit(&atom_22_r12_0_eq, v805, memory_order_release);
  return NULL;
}




void *t23(void *arg){
label_24:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(23);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v262_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v264_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v266_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v268_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v270_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v272_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v274_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v276_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v278_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v280_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v282_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v284_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v286_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v806 = (v282_r0==0);
  atomic_store_explicit(&atom_23_r0_0_eq, v806, memory_order_release);
  int v807 = (v264_r1==0);
  atomic_store_explicit(&atom_23_r1_0_eq, v807, memory_order_release);
  int v808 = (v266_r2==0);
  atomic_store_explicit(&atom_23_r2_0_eq, v808, memory_order_release);
  int v809 = (v268_r3==0);
  atomic_store_explicit(&atom_23_r3_0_eq, v809, memory_order_release);
  int v810 = (v270_r4==0);
  atomic_store_explicit(&atom_23_r4_0_eq, v810, memory_order_release);
  int v811 = (v272_r5==0);
  atomic_store_explicit(&atom_23_r5_0_eq, v811, memory_order_release);
  int v812 = (v274_r6==0);
  atomic_store_explicit(&atom_23_r6_0_eq, v812, memory_order_release);
  int v813 = (v276_r7==0);
  atomic_store_explicit(&atom_23_r7_0_eq, v813, memory_order_release);
  int v814 = (v278_r8==0);
  atomic_store_explicit(&atom_23_r8_0_eq, v814, memory_order_release);
  int v815 = (v280_r9==0);
  atomic_store_explicit(&atom_23_r9_0_eq, v815, memory_order_release);
  int v816 = (v262_r10==1);
  atomic_store_explicit(&atom_23_r10_1_eq, v816, memory_order_release);
  int v817 = (v284_r11==0);
  atomic_store_explicit(&atom_23_r11_0_eq, v817, memory_order_release);
  int v818 = (v286_r12==0);
  atomic_store_explicit(&atom_23_r12_0_eq, v818, memory_order_release);
  return NULL;
}




void *t24(void *arg){
label_25:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(24);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v288_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v290_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v292_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v294_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v296_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v298_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v300_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v302_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v304_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v306_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v308_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v310_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v312_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
  int v819 = (v310_r0==0);
  atomic_store_explicit(&atom_24_r0_0_eq, v819, memory_order_release);
  int v820 = (v290_r1==0);
  atomic_store_explicit(&atom_24_r1_0_eq, v820, memory_order_release);
  int v821 = (v292_r2==0);
  atomic_store_explicit(&atom_24_r2_0_eq, v821, memory_order_release);
  int v822 = (v294_r3==0);
  atomic_store_explicit(&atom_24_r3_0_eq, v822, memory_order_release);
  int v823 = (v296_r4==0);
  atomic_store_explicit(&atom_24_r4_0_eq, v823, memory_order_release);
  int v824 = (v298_r5==0);
  atomic_store_explicit(&atom_24_r5_0_eq, v824, memory_order_release);
  int v825 = (v300_r6==0);
  atomic_store_explicit(&atom_24_r6_0_eq, v825, memory_order_release);
  int v826 = (v302_r7==0);
  atomic_store_explicit(&atom_24_r7_0_eq, v826, memory_order_release);
  int v827 = (v304_r8==0);
  atomic_store_explicit(&atom_24_r8_0_eq, v827, memory_order_release);
  int v828 = (v306_r9==0);
  atomic_store_explicit(&atom_24_r9_0_eq, v828, memory_order_release);
  int v829 = (v308_r10==0);
  atomic_store_explicit(&atom_24_r10_0_eq, v829, memory_order_release);
  int v830 = (v288_r11==1);
  atomic_store_explicit(&atom_24_r11_1_eq, v830, memory_order_release);
  int v831 = (v312_r12==0);
  atomic_store_explicit(&atom_24_r12_0_eq, v831, memory_order_release);
  return NULL;
}




void *t25(void *arg){
label_26:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(25);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v314_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v316_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v318_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v320_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v322_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v324_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v326_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v328_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v330_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v332_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v334_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v336_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v338_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v832 = (v338_r0==0);
  atomic_store_explicit(&atom_25_r0_0_eq, v832, memory_order_release);
  int v833 = (v316_r1==0);
  atomic_store_explicit(&atom_25_r1_0_eq, v833, memory_order_release);
  int v834 = (v318_r2==0);
  atomic_store_explicit(&atom_25_r2_0_eq, v834, memory_order_release);
  int v835 = (v320_r3==0);
  atomic_store_explicit(&atom_25_r3_0_eq, v835, memory_order_release);
  int v836 = (v322_r4==0);
  atomic_store_explicit(&atom_25_r4_0_eq, v836, memory_order_release);
  int v837 = (v324_r5==0);
  atomic_store_explicit(&atom_25_r5_0_eq, v837, memory_order_release);
  int v838 = (v326_r6==0);
  atomic_store_explicit(&atom_25_r6_0_eq, v838, memory_order_release);
  int v839 = (v328_r7==0);
  atomic_store_explicit(&atom_25_r7_0_eq, v839, memory_order_release);
  int v840 = (v330_r8==0);
  atomic_store_explicit(&atom_25_r8_0_eq, v840, memory_order_release);
  int v841 = (v332_r9==0);
  atomic_store_explicit(&atom_25_r9_0_eq, v841, memory_order_release);
  int v842 = (v334_r10==0);
  atomic_store_explicit(&atom_25_r10_0_eq, v842, memory_order_release);
  int v843 = (v336_r11==0);
  atomic_store_explicit(&atom_25_r11_0_eq, v843, memory_order_release);
  int v844 = (v314_r12==1);
  atomic_store_explicit(&atom_25_r12_1_eq, v844, memory_order_release);
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
  atomic_init(&vars[12], 0);
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
  pthread_t thr24; 
  pthread_t thr25; 


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
  pthread_create(&thr24, NULL , t24, NULL);
  pthread_create(&thr25, NULL , t25, NULL);

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
  pthread_join(thr24,NULL);
  pthread_join(thr25,NULL);

  int v339 = atomic_load_explicit(&atom_13_r0_1_eq, memory_order_acquire);
  int v340 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v341 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v342 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v343 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v344 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v345 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v346 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v347 = atomic_load_explicit(&atom_13_r8_0_eq, memory_order_acquire);
  int v348 = atomic_load_explicit(&atom_13_r9_0_eq, memory_order_acquire);
  int v349 = atomic_load_explicit(&atom_13_r10_0_eq, memory_order_acquire);
  int v350 = atomic_load_explicit(&atom_13_r11_0_eq, memory_order_acquire);
  int v351 = atomic_load_explicit(&atom_13_r12_0_eq, memory_order_acquire);
  int v352 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v353 = atomic_load_explicit(&atom_14_r1_1_eq, memory_order_acquire);
  int v354 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v355 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v356 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v357 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v358 = atomic_load_explicit(&atom_14_r6_0_eq, memory_order_acquire);
  int v359 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v360 = atomic_load_explicit(&atom_14_r8_0_eq, memory_order_acquire);
  int v361 = atomic_load_explicit(&atom_14_r9_0_eq, memory_order_acquire);
  int v362 = atomic_load_explicit(&atom_14_r10_0_eq, memory_order_acquire);
  int v363 = atomic_load_explicit(&atom_14_r11_0_eq, memory_order_acquire);
  int v364 = atomic_load_explicit(&atom_14_r12_0_eq, memory_order_acquire);
  int v365 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v366 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v367 = atomic_load_explicit(&atom_15_r2_1_eq, memory_order_acquire);
  int v368 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v369 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v370 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v371 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v372 = atomic_load_explicit(&atom_15_r7_0_eq, memory_order_acquire);
  int v373 = atomic_load_explicit(&atom_15_r8_0_eq, memory_order_acquire);
  int v374 = atomic_load_explicit(&atom_15_r9_0_eq, memory_order_acquire);
  int v375 = atomic_load_explicit(&atom_15_r10_0_eq, memory_order_acquire);
  int v376 = atomic_load_explicit(&atom_15_r11_0_eq, memory_order_acquire);
  int v377 = atomic_load_explicit(&atom_15_r12_0_eq, memory_order_acquire);
  int v378 = atomic_load_explicit(&atom_16_r0_0_eq, memory_order_acquire);
  int v379 = atomic_load_explicit(&atom_16_r1_0_eq, memory_order_acquire);
  int v380 = atomic_load_explicit(&atom_16_r2_0_eq, memory_order_acquire);
  int v381 = atomic_load_explicit(&atom_16_r3_1_eq, memory_order_acquire);
  int v382 = atomic_load_explicit(&atom_16_r4_0_eq, memory_order_acquire);
  int v383 = atomic_load_explicit(&atom_16_r5_0_eq, memory_order_acquire);
  int v384 = atomic_load_explicit(&atom_16_r6_0_eq, memory_order_acquire);
  int v385 = atomic_load_explicit(&atom_16_r7_0_eq, memory_order_acquire);
  int v386 = atomic_load_explicit(&atom_16_r8_0_eq, memory_order_acquire);
  int v387 = atomic_load_explicit(&atom_16_r9_0_eq, memory_order_acquire);
  int v388 = atomic_load_explicit(&atom_16_r10_0_eq, memory_order_acquire);
  int v389 = atomic_load_explicit(&atom_16_r11_0_eq, memory_order_acquire);
  int v390 = atomic_load_explicit(&atom_16_r12_0_eq, memory_order_acquire);
  int v391 = atomic_load_explicit(&atom_17_r0_0_eq, memory_order_acquire);
  int v392 = atomic_load_explicit(&atom_17_r1_0_eq, memory_order_acquire);
  int v393 = atomic_load_explicit(&atom_17_r2_0_eq, memory_order_acquire);
  int v394 = atomic_load_explicit(&atom_17_r3_0_eq, memory_order_acquire);
  int v395 = atomic_load_explicit(&atom_17_r4_1_eq, memory_order_acquire);
  int v396 = atomic_load_explicit(&atom_17_r5_0_eq, memory_order_acquire);
  int v397 = atomic_load_explicit(&atom_17_r6_0_eq, memory_order_acquire);
  int v398 = atomic_load_explicit(&atom_17_r7_0_eq, memory_order_acquire);
  int v399 = atomic_load_explicit(&atom_17_r8_0_eq, memory_order_acquire);
  int v400 = atomic_load_explicit(&atom_17_r9_0_eq, memory_order_acquire);
  int v401 = atomic_load_explicit(&atom_17_r10_0_eq, memory_order_acquire);
  int v402 = atomic_load_explicit(&atom_17_r11_0_eq, memory_order_acquire);
  int v403 = atomic_load_explicit(&atom_17_r12_0_eq, memory_order_acquire);
  int v404 = atomic_load_explicit(&atom_18_r0_0_eq, memory_order_acquire);
  int v405 = atomic_load_explicit(&atom_18_r1_0_eq, memory_order_acquire);
  int v406 = atomic_load_explicit(&atom_18_r2_0_eq, memory_order_acquire);
  int v407 = atomic_load_explicit(&atom_18_r3_0_eq, memory_order_acquire);
  int v408 = atomic_load_explicit(&atom_18_r4_0_eq, memory_order_acquire);
  int v409 = atomic_load_explicit(&atom_18_r5_1_eq, memory_order_acquire);
  int v410 = atomic_load_explicit(&atom_18_r6_0_eq, memory_order_acquire);
  int v411 = atomic_load_explicit(&atom_18_r7_0_eq, memory_order_acquire);
  int v412 = atomic_load_explicit(&atom_18_r8_0_eq, memory_order_acquire);
  int v413 = atomic_load_explicit(&atom_18_r9_0_eq, memory_order_acquire);
  int v414 = atomic_load_explicit(&atom_18_r10_0_eq, memory_order_acquire);
  int v415 = atomic_load_explicit(&atom_18_r11_0_eq, memory_order_acquire);
  int v416 = atomic_load_explicit(&atom_18_r12_0_eq, memory_order_acquire);
  int v417 = atomic_load_explicit(&atom_19_r0_0_eq, memory_order_acquire);
  int v418 = atomic_load_explicit(&atom_19_r1_0_eq, memory_order_acquire);
  int v419 = atomic_load_explicit(&atom_19_r2_0_eq, memory_order_acquire);
  int v420 = atomic_load_explicit(&atom_19_r3_0_eq, memory_order_acquire);
  int v421 = atomic_load_explicit(&atom_19_r4_0_eq, memory_order_acquire);
  int v422 = atomic_load_explicit(&atom_19_r5_0_eq, memory_order_acquire);
  int v423 = atomic_load_explicit(&atom_19_r6_1_eq, memory_order_acquire);
  int v424 = atomic_load_explicit(&atom_19_r7_0_eq, memory_order_acquire);
  int v425 = atomic_load_explicit(&atom_19_r8_0_eq, memory_order_acquire);
  int v426 = atomic_load_explicit(&atom_19_r9_0_eq, memory_order_acquire);
  int v427 = atomic_load_explicit(&atom_19_r10_0_eq, memory_order_acquire);
  int v428 = atomic_load_explicit(&atom_19_r11_0_eq, memory_order_acquire);
  int v429 = atomic_load_explicit(&atom_19_r12_0_eq, memory_order_acquire);
  int v430 = atomic_load_explicit(&atom_20_r0_0_eq, memory_order_acquire);
  int v431 = atomic_load_explicit(&atom_20_r1_0_eq, memory_order_acquire);
  int v432 = atomic_load_explicit(&atom_20_r2_0_eq, memory_order_acquire);
  int v433 = atomic_load_explicit(&atom_20_r3_0_eq, memory_order_acquire);
  int v434 = atomic_load_explicit(&atom_20_r4_0_eq, memory_order_acquire);
  int v435 = atomic_load_explicit(&atom_20_r5_0_eq, memory_order_acquire);
  int v436 = atomic_load_explicit(&atom_20_r6_0_eq, memory_order_acquire);
  int v437 = atomic_load_explicit(&atom_20_r7_1_eq, memory_order_acquire);
  int v438 = atomic_load_explicit(&atom_20_r8_0_eq, memory_order_acquire);
  int v439 = atomic_load_explicit(&atom_20_r9_0_eq, memory_order_acquire);
  int v440 = atomic_load_explicit(&atom_20_r10_0_eq, memory_order_acquire);
  int v441 = atomic_load_explicit(&atom_20_r11_0_eq, memory_order_acquire);
  int v442 = atomic_load_explicit(&atom_20_r12_0_eq, memory_order_acquire);
  int v443 = atomic_load_explicit(&atom_21_r0_0_eq, memory_order_acquire);
  int v444 = atomic_load_explicit(&atom_21_r1_0_eq, memory_order_acquire);
  int v445 = atomic_load_explicit(&atom_21_r2_0_eq, memory_order_acquire);
  int v446 = atomic_load_explicit(&atom_21_r3_0_eq, memory_order_acquire);
  int v447 = atomic_load_explicit(&atom_21_r4_0_eq, memory_order_acquire);
  int v448 = atomic_load_explicit(&atom_21_r5_0_eq, memory_order_acquire);
  int v449 = atomic_load_explicit(&atom_21_r6_0_eq, memory_order_acquire);
  int v450 = atomic_load_explicit(&atom_21_r7_0_eq, memory_order_acquire);
  int v451 = atomic_load_explicit(&atom_21_r8_1_eq, memory_order_acquire);
  int v452 = atomic_load_explicit(&atom_21_r9_0_eq, memory_order_acquire);
  int v453 = atomic_load_explicit(&atom_21_r10_0_eq, memory_order_acquire);
  int v454 = atomic_load_explicit(&atom_21_r11_0_eq, memory_order_acquire);
  int v455 = atomic_load_explicit(&atom_21_r12_0_eq, memory_order_acquire);
  int v456 = atomic_load_explicit(&atom_22_r0_0_eq, memory_order_acquire);
  int v457 = atomic_load_explicit(&atom_22_r1_0_eq, memory_order_acquire);
  int v458 = atomic_load_explicit(&atom_22_r2_0_eq, memory_order_acquire);
  int v459 = atomic_load_explicit(&atom_22_r3_0_eq, memory_order_acquire);
  int v460 = atomic_load_explicit(&atom_22_r4_0_eq, memory_order_acquire);
  int v461 = atomic_load_explicit(&atom_22_r5_0_eq, memory_order_acquire);
  int v462 = atomic_load_explicit(&atom_22_r6_0_eq, memory_order_acquire);
  int v463 = atomic_load_explicit(&atom_22_r7_0_eq, memory_order_acquire);
  int v464 = atomic_load_explicit(&atom_22_r8_0_eq, memory_order_acquire);
  int v465 = atomic_load_explicit(&atom_22_r9_1_eq, memory_order_acquire);
  int v466 = atomic_load_explicit(&atom_22_r10_0_eq, memory_order_acquire);
  int v467 = atomic_load_explicit(&atom_22_r11_0_eq, memory_order_acquire);
  int v468 = atomic_load_explicit(&atom_22_r12_0_eq, memory_order_acquire);
  int v469 = atomic_load_explicit(&atom_23_r0_0_eq, memory_order_acquire);
  int v470 = atomic_load_explicit(&atom_23_r1_0_eq, memory_order_acquire);
  int v471 = atomic_load_explicit(&atom_23_r2_0_eq, memory_order_acquire);
  int v472 = atomic_load_explicit(&atom_23_r3_0_eq, memory_order_acquire);
  int v473 = atomic_load_explicit(&atom_23_r4_0_eq, memory_order_acquire);
  int v474 = atomic_load_explicit(&atom_23_r5_0_eq, memory_order_acquire);
  int v475 = atomic_load_explicit(&atom_23_r6_0_eq, memory_order_acquire);
  int v476 = atomic_load_explicit(&atom_23_r7_0_eq, memory_order_acquire);
  int v477 = atomic_load_explicit(&atom_23_r8_0_eq, memory_order_acquire);
  int v478 = atomic_load_explicit(&atom_23_r9_0_eq, memory_order_acquire);
  int v479 = atomic_load_explicit(&atom_23_r10_1_eq, memory_order_acquire);
  int v480 = atomic_load_explicit(&atom_23_r11_0_eq, memory_order_acquire);
  int v481 = atomic_load_explicit(&atom_23_r12_0_eq, memory_order_acquire);
  int v482 = atomic_load_explicit(&atom_24_r0_0_eq, memory_order_acquire);
  int v483 = atomic_load_explicit(&atom_24_r1_0_eq, memory_order_acquire);
  int v484 = atomic_load_explicit(&atom_24_r2_0_eq, memory_order_acquire);
  int v485 = atomic_load_explicit(&atom_24_r3_0_eq, memory_order_acquire);
  int v486 = atomic_load_explicit(&atom_24_r4_0_eq, memory_order_acquire);
  int v487 = atomic_load_explicit(&atom_24_r5_0_eq, memory_order_acquire);
  int v488 = atomic_load_explicit(&atom_24_r6_0_eq, memory_order_acquire);
  int v489 = atomic_load_explicit(&atom_24_r7_0_eq, memory_order_acquire);
  int v490 = atomic_load_explicit(&atom_24_r8_0_eq, memory_order_acquire);
  int v491 = atomic_load_explicit(&atom_24_r9_0_eq, memory_order_acquire);
  int v492 = atomic_load_explicit(&atom_24_r10_0_eq, memory_order_acquire);
  int v493 = atomic_load_explicit(&atom_24_r11_1_eq, memory_order_acquire);
  int v494 = atomic_load_explicit(&atom_24_r12_0_eq, memory_order_acquire);
  int v495 = atomic_load_explicit(&atom_25_r0_0_eq, memory_order_acquire);
  int v496 = atomic_load_explicit(&atom_25_r1_0_eq, memory_order_acquire);
  int v497 = atomic_load_explicit(&atom_25_r2_0_eq, memory_order_acquire);
  int v498 = atomic_load_explicit(&atom_25_r3_0_eq, memory_order_acquire);
  int v499 = atomic_load_explicit(&atom_25_r4_0_eq, memory_order_acquire);
  int v500 = atomic_load_explicit(&atom_25_r5_0_eq, memory_order_acquire);
  int v501 = atomic_load_explicit(&atom_25_r6_0_eq, memory_order_acquire);
  int v502 = atomic_load_explicit(&atom_25_r7_0_eq, memory_order_acquire);
  int v503 = atomic_load_explicit(&atom_25_r8_0_eq, memory_order_acquire);
  int v504 = atomic_load_explicit(&atom_25_r9_0_eq, memory_order_acquire);
  int v505 = atomic_load_explicit(&atom_25_r10_0_eq, memory_order_acquire);
  int v506 = atomic_load_explicit(&atom_25_r11_0_eq, memory_order_acquire);
  int v507 = atomic_load_explicit(&atom_25_r12_1_eq, memory_order_acquire);
  int v508_conj = v506 & v507;
  int v509_conj = v505 & v508_conj;
  int v510_conj = v504 & v509_conj;
  int v511_conj = v503 & v510_conj;
  int v512_conj = v502 & v511_conj;
  int v513_conj = v501 & v512_conj;
  int v514_conj = v500 & v513_conj;
  int v515_conj = v499 & v514_conj;
  int v516_conj = v498 & v515_conj;
  int v517_conj = v497 & v516_conj;
  int v518_conj = v496 & v517_conj;
  int v519_conj = v495 & v518_conj;
  int v520_conj = v494 & v519_conj;
  int v521_conj = v493 & v520_conj;
  int v522_conj = v492 & v521_conj;
  int v523_conj = v491 & v522_conj;
  int v524_conj = v490 & v523_conj;
  int v525_conj = v489 & v524_conj;
  int v526_conj = v488 & v525_conj;
  int v527_conj = v487 & v526_conj;
  int v528_conj = v486 & v527_conj;
  int v529_conj = v485 & v528_conj;
  int v530_conj = v484 & v529_conj;
  int v531_conj = v483 & v530_conj;
  int v532_conj = v482 & v531_conj;
  int v533_conj = v481 & v532_conj;
  int v534_conj = v480 & v533_conj;
  int v535_conj = v479 & v534_conj;
  int v536_conj = v478 & v535_conj;
  int v537_conj = v477 & v536_conj;
  int v538_conj = v476 & v537_conj;
  int v539_conj = v475 & v538_conj;
  int v540_conj = v474 & v539_conj;
  int v541_conj = v473 & v540_conj;
  int v542_conj = v472 & v541_conj;
  int v543_conj = v471 & v542_conj;
  int v544_conj = v470 & v543_conj;
  int v545_conj = v469 & v544_conj;
  int v546_conj = v468 & v545_conj;
  int v547_conj = v467 & v546_conj;
  int v548_conj = v466 & v547_conj;
  int v549_conj = v465 & v548_conj;
  int v550_conj = v464 & v549_conj;
  int v551_conj = v463 & v550_conj;
  int v552_conj = v462 & v551_conj;
  int v553_conj = v461 & v552_conj;
  int v554_conj = v460 & v553_conj;
  int v555_conj = v459 & v554_conj;
  int v556_conj = v458 & v555_conj;
  int v557_conj = v457 & v556_conj;
  int v558_conj = v456 & v557_conj;
  int v559_conj = v455 & v558_conj;
  int v560_conj = v454 & v559_conj;
  int v561_conj = v453 & v560_conj;
  int v562_conj = v452 & v561_conj;
  int v563_conj = v451 & v562_conj;
  int v564_conj = v450 & v563_conj;
  int v565_conj = v449 & v564_conj;
  int v566_conj = v448 & v565_conj;
  int v567_conj = v447 & v566_conj;
  int v568_conj = v446 & v567_conj;
  int v569_conj = v445 & v568_conj;
  int v570_conj = v444 & v569_conj;
  int v571_conj = v443 & v570_conj;
  int v572_conj = v442 & v571_conj;
  int v573_conj = v441 & v572_conj;
  int v574_conj = v440 & v573_conj;
  int v575_conj = v439 & v574_conj;
  int v576_conj = v438 & v575_conj;
  int v577_conj = v437 & v576_conj;
  int v578_conj = v436 & v577_conj;
  int v579_conj = v435 & v578_conj;
  int v580_conj = v434 & v579_conj;
  int v581_conj = v433 & v580_conj;
  int v582_conj = v432 & v581_conj;
  int v583_conj = v431 & v582_conj;
  int v584_conj = v430 & v583_conj;
  int v585_conj = v429 & v584_conj;
  int v586_conj = v428 & v585_conj;
  int v587_conj = v427 & v586_conj;
  int v588_conj = v426 & v587_conj;
  int v589_conj = v425 & v588_conj;
  int v590_conj = v424 & v589_conj;
  int v591_conj = v423 & v590_conj;
  int v592_conj = v422 & v591_conj;
  int v593_conj = v421 & v592_conj;
  int v594_conj = v420 & v593_conj;
  int v595_conj = v419 & v594_conj;
  int v596_conj = v418 & v595_conj;
  int v597_conj = v417 & v596_conj;
  int v598_conj = v416 & v597_conj;
  int v599_conj = v415 & v598_conj;
  int v600_conj = v414 & v599_conj;
  int v601_conj = v413 & v600_conj;
  int v602_conj = v412 & v601_conj;
  int v603_conj = v411 & v602_conj;
  int v604_conj = v410 & v603_conj;
  int v605_conj = v409 & v604_conj;
  int v606_conj = v408 & v605_conj;
  int v607_conj = v407 & v606_conj;
  int v608_conj = v406 & v607_conj;
  int v609_conj = v405 & v608_conj;
  int v610_conj = v404 & v609_conj;
  int v611_conj = v403 & v610_conj;
  int v612_conj = v402 & v611_conj;
  int v613_conj = v401 & v612_conj;
  int v614_conj = v400 & v613_conj;
  int v615_conj = v399 & v614_conj;
  int v616_conj = v398 & v615_conj;
  int v617_conj = v397 & v616_conj;
  int v618_conj = v396 & v617_conj;
  int v619_conj = v395 & v618_conj;
  int v620_conj = v394 & v619_conj;
  int v621_conj = v393 & v620_conj;
  int v622_conj = v392 & v621_conj;
  int v623_conj = v391 & v622_conj;
  int v624_conj = v390 & v623_conj;
  int v625_conj = v389 & v624_conj;
  int v626_conj = v388 & v625_conj;
  int v627_conj = v387 & v626_conj;
  int v628_conj = v386 & v627_conj;
  int v629_conj = v385 & v628_conj;
  int v630_conj = v384 & v629_conj;
  int v631_conj = v383 & v630_conj;
  int v632_conj = v382 & v631_conj;
  int v633_conj = v381 & v632_conj;
  int v634_conj = v380 & v633_conj;
  int v635_conj = v379 & v634_conj;
  int v636_conj = v378 & v635_conj;
  int v637_conj = v377 & v636_conj;
  int v638_conj = v376 & v637_conj;
  int v639_conj = v375 & v638_conj;
  int v640_conj = v374 & v639_conj;
  int v641_conj = v373 & v640_conj;
  int v642_conj = v372 & v641_conj;
  int v643_conj = v371 & v642_conj;
  int v644_conj = v370 & v643_conj;
  int v645_conj = v369 & v644_conj;
  int v646_conj = v368 & v645_conj;
  int v647_conj = v367 & v646_conj;
  int v648_conj = v366 & v647_conj;
  int v649_conj = v365 & v648_conj;
  int v650_conj = v364 & v649_conj;
  int v651_conj = v363 & v650_conj;
  int v652_conj = v362 & v651_conj;
  int v653_conj = v361 & v652_conj;
  int v654_conj = v360 & v653_conj;
  int v655_conj = v359 & v654_conj;
  int v656_conj = v358 & v655_conj;
  int v657_conj = v357 & v656_conj;
  int v658_conj = v356 & v657_conj;
  int v659_conj = v355 & v658_conj;
  int v660_conj = v354 & v659_conj;
  int v661_conj = v353 & v660_conj;
  int v662_conj = v352 & v661_conj;
  int v663_conj = v351 & v662_conj;
  int v664_conj = v350 & v663_conj;
  int v665_conj = v349 & v664_conj;
  int v666_conj = v348 & v665_conj;
  int v667_conj = v347 & v666_conj;
  int v668_conj = v346 & v667_conj;
  int v669_conj = v345 & v668_conj;
  int v670_conj = v344 & v669_conj;
  int v671_conj = v343 & v670_conj;
  int v672_conj = v342 & v671_conj;
  int v673_conj = v341 & v672_conj;
  int v674_conj = v340 & v673_conj;
  int v675_conj = v339 & v674_conj;
  if (v675_conj == 1) assert(0);
  return 0;
}
