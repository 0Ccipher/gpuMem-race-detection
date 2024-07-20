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
atomic_int vars[37]; 
atomic_int atom_1_r1_1_eq; 
atomic_int atom_2_r2_1_eq; 
atomic_int atom_3_r3_1_eq; 
atomic_int atom_4_r4_1_eq; 
atomic_int atom_5_r5_1_eq; 
atomic_int atom_6_r6_1_eq; 
atomic_int atom_7_r7_1_eq; 
atomic_int atom_8_r8_1_eq; 
atomic_int atom_9_r9_1_eq; 
atomic_int atom_10_r10_1_eq; 
atomic_int atom_11_r11_1_eq; 
atomic_int atom_12_r12_1_eq; 
atomic_int atom_13_r13_1_eq; 
atomic_int atom_14_r14_1_eq; 
atomic_int atom_15_r15_1_eq; 
atomic_int atom_16_r16_1_eq; 
atomic_int atom_17_r17_1_eq; 
atomic_int atom_18_r18_1_eq; 
atomic_int atom_19_r19_1_eq; 
atomic_int atom_20_r20_1_eq; 
atomic_int atom_21_r21_1_eq; 
atomic_int atom_22_r22_1_eq; 
atomic_int atom_23_r23_1_eq; 
atomic_int atom_24_r24_1_eq; 
atomic_int atom_25_r25_1_eq; 
atomic_int atom_26_r26_1_eq; 
atomic_int atom_27_r27_1_eq; 
atomic_int atom_28_r28_1_eq; 
atomic_int atom_29_r29_1_eq; 
atomic_int atom_30_r30_1_eq; 
atomic_int atom_31_r31_1_eq; 
atomic_int atom_32_r32_1_eq; 
atomic_int atom_33_r33_1_eq; 
atomic_int atom_34_r34_1_eq; 
atomic_int atom_35_r35_1_eq; 
atomic_int atom_36_r36_1_eq; 
atomic_int atom_36_r0_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  int v148 = (v2_r1==1);
  atomic_store_explicit(&atom_1_r1_1_eq, v148, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(2);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v4_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[3], 1, memory_order_release);
  int v149 = (v4_r2==1);
  atomic_store_explicit(&atom_2_r2_1_eq, v149, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v6_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[4], 1, memory_order_release);
  int v150 = (v6_r3==1);
  atomic_store_explicit(&atom_3_r3_1_eq, v150, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v8_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[5], 1, memory_order_release);
  int v151 = (v8_r4==1);
  atomic_store_explicit(&atom_4_r4_1_eq, v151, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v10_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[6], 1, memory_order_release);
  int v152 = (v10_r5==1);
  atomic_store_explicit(&atom_5_r5_1_eq, v152, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v12_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[7], 1, memory_order_release);
  int v153 = (v12_r6==1);
  atomic_store_explicit(&atom_6_r6_1_eq, v153, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v14_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[8], 1, memory_order_release);
  int v154 = (v14_r7==1);
  atomic_store_explicit(&atom_7_r7_1_eq, v154, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v16_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[9], 1, memory_order_release);
  int v155 = (v16_r8==1);
  atomic_store_explicit(&atom_8_r8_1_eq, v155, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v18_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[10], 1, memory_order_release);
  int v156 = (v18_r9==1);
  atomic_store_explicit(&atom_9_r9_1_eq, v156, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v20_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[11], 1, memory_order_release);
  int v157 = (v20_r10==1);
  atomic_store_explicit(&atom_10_r10_1_eq, v157, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v22_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[12], 1, memory_order_release);
  int v158 = (v22_r11==1);
  atomic_store_explicit(&atom_11_r11_1_eq, v158, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v24_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[13], 1, memory_order_release);
  int v159 = (v24_r12==1);
  atomic_store_explicit(&atom_12_r12_1_eq, v159, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v26_r13 = atomic_load_explicit(&vars[13], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[14], 1, memory_order_release);
  int v160 = (v26_r13==1);
  atomic_store_explicit(&atom_13_r13_1_eq, v160, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v28_r14 = atomic_load_explicit(&vars[14], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[15], 1, memory_order_release);
  int v161 = (v28_r14==1);
  atomic_store_explicit(&atom_14_r14_1_eq, v161, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v30_r15 = atomic_load_explicit(&vars[15], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[16], 1, memory_order_release);
  int v162 = (v30_r15==1);
  atomic_store_explicit(&atom_15_r15_1_eq, v162, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v32_r16 = atomic_load_explicit(&vars[16], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[17], 1, memory_order_release);
  int v163 = (v32_r16==1);
  atomic_store_explicit(&atom_16_r16_1_eq, v163, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v34_r17 = atomic_load_explicit(&vars[17], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[18], 1, memory_order_release);
  int v164 = (v34_r17==1);
  atomic_store_explicit(&atom_17_r17_1_eq, v164, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v36_r18 = atomic_load_explicit(&vars[18], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[19], 1, memory_order_release);
  int v165 = (v36_r18==1);
  atomic_store_explicit(&atom_18_r18_1_eq, v165, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v38_r19 = atomic_load_explicit(&vars[19], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[20], 1, memory_order_release);
  int v166 = (v38_r19==1);
  atomic_store_explicit(&atom_19_r19_1_eq, v166, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v40_r20 = atomic_load_explicit(&vars[20], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[21], 1, memory_order_release);
  int v167 = (v40_r20==1);
  atomic_store_explicit(&atom_20_r20_1_eq, v167, memory_order_release);
  return NULL;
}




void *t21(void *arg){
label_22:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(21);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v42_r21 = atomic_load_explicit(&vars[21], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[22], 1, memory_order_release);
  int v168 = (v42_r21==1);
  atomic_store_explicit(&atom_21_r21_1_eq, v168, memory_order_release);
  return NULL;
}




void *t22(void *arg){
label_23:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(22);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v44_r22 = atomic_load_explicit(&vars[22], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[23], 1, memory_order_release);
  int v169 = (v44_r22==1);
  atomic_store_explicit(&atom_22_r22_1_eq, v169, memory_order_release);
  return NULL;
}




void *t23(void *arg){
label_24:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(23);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v46_r23 = atomic_load_explicit(&vars[23], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[24], 1, memory_order_release);
  int v170 = (v46_r23==1);
  atomic_store_explicit(&atom_23_r23_1_eq, v170, memory_order_release);
  return NULL;
}




void *t24(void *arg){
label_25:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(24);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v48_r24 = atomic_load_explicit(&vars[24], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[25], 1, memory_order_release);
  int v171 = (v48_r24==1);
  atomic_store_explicit(&atom_24_r24_1_eq, v171, memory_order_release);
  return NULL;
}




void *t25(void *arg){
label_26:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(25);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v50_r25 = atomic_load_explicit(&vars[25], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[26], 1, memory_order_release);
  int v172 = (v50_r25==1);
  atomic_store_explicit(&atom_25_r25_1_eq, v172, memory_order_release);
  return NULL;
}




void *t26(void *arg){
label_27:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(26);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v52_r26 = atomic_load_explicit(&vars[26], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[27], 1, memory_order_release);
  int v173 = (v52_r26==1);
  atomic_store_explicit(&atom_26_r26_1_eq, v173, memory_order_release);
  return NULL;
}




void *t27(void *arg){
label_28:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(27);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v54_r27 = atomic_load_explicit(&vars[27], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[28], 1, memory_order_release);
  int v174 = (v54_r27==1);
  atomic_store_explicit(&atom_27_r27_1_eq, v174, memory_order_release);
  return NULL;
}




void *t28(void *arg){
label_29:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(28);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v56_r28 = atomic_load_explicit(&vars[28], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[29], 1, memory_order_release);
  int v175 = (v56_r28==1);
  atomic_store_explicit(&atom_28_r28_1_eq, v175, memory_order_release);
  return NULL;
}




void *t29(void *arg){
label_30:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(29);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v58_r29 = atomic_load_explicit(&vars[29], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[30], 1, memory_order_release);
  int v176 = (v58_r29==1);
  atomic_store_explicit(&atom_29_r29_1_eq, v176, memory_order_release);
  return NULL;
}




void *t30(void *arg){
label_31:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(30);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v60_r30 = atomic_load_explicit(&vars[30], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[31], 1, memory_order_release);
  int v177 = (v60_r30==1);
  atomic_store_explicit(&atom_30_r30_1_eq, v177, memory_order_release);
  return NULL;
}




void *t31(void *arg){
label_32:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(31);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v62_r31 = atomic_load_explicit(&vars[31], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[32], 1, memory_order_release);
  int v178 = (v62_r31==1);
  atomic_store_explicit(&atom_31_r31_1_eq, v178, memory_order_release);
  return NULL;
}




void *t32(void *arg){
label_33:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(32);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v64_r32 = atomic_load_explicit(&vars[32], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[33], 1, memory_order_release);
  int v179 = (v64_r32==1);
  atomic_store_explicit(&atom_32_r32_1_eq, v179, memory_order_release);
  return NULL;
}




void *t33(void *arg){
label_34:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(33);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v66_r33 = atomic_load_explicit(&vars[33], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[34], 1, memory_order_release);
  int v180 = (v66_r33==1);
  atomic_store_explicit(&atom_33_r33_1_eq, v180, memory_order_release);
  return NULL;
}




void *t34(void *arg){
label_35:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(34);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v68_r34 = atomic_load_explicit(&vars[34], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[35], 1, memory_order_release);
  int v181 = (v68_r34==1);
  atomic_store_explicit(&atom_34_r34_1_eq, v181, memory_order_release);
  return NULL;
}




void *t35(void *arg){
label_36:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(35);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v70_r35 = atomic_load_explicit(&vars[35], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[36], 1, memory_order_release);
  int v182 = (v70_r35==1);
  atomic_store_explicit(&atom_35_r35_1_eq, v182, memory_order_release);
  return NULL;
}




void *t36(void *arg){
label_37:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(36);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v72_r36 = atomic_load_explicit(&vars[36], memory_order_acquire);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v74_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v183 = (v72_r36==1);
  atomic_store_explicit(&atom_36_r36_1_eq, v183, memory_order_release);
  int v184 = (v74_r0==0);
  atomic_store_explicit(&atom_36_r0_0_eq, v184, memory_order_release);
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
  atomic_init(&vars[13], 0);
  atomic_init(&vars[14], 0);
  atomic_init(&vars[15], 0);
  atomic_init(&vars[16], 0);
  atomic_init(&vars[17], 0);
  atomic_init(&vars[18], 0);
  atomic_init(&vars[19], 0);
  atomic_init(&vars[20], 0);
  atomic_init(&vars[21], 0);
  atomic_init(&vars[22], 0);
  atomic_init(&vars[23], 0);
  atomic_init(&vars[24], 0);
  atomic_init(&vars[25], 0);
  atomic_init(&vars[26], 0);
  atomic_init(&vars[27], 0);
  atomic_init(&vars[28], 0);
  atomic_init(&vars[29], 0);
  atomic_init(&vars[30], 0);
  atomic_init(&vars[31], 0);
  atomic_init(&vars[32], 0);
  atomic_init(&vars[33], 0);
  atomic_init(&vars[34], 0);
  atomic_init(&vars[35], 0);
  atomic_init(&vars[36], 0);
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
  pthread_t thr26; 
  pthread_t thr27; 
  pthread_t thr28; 
  pthread_t thr29; 
  pthread_t thr30; 
  pthread_t thr31; 
  pthread_t thr32; 
  pthread_t thr33; 
  pthread_t thr34; 
  pthread_t thr35; 
  pthread_t thr36; 


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
  pthread_create(&thr26, NULL , t26, NULL);
  pthread_create(&thr27, NULL , t27, NULL);
  pthread_create(&thr28, NULL , t28, NULL);
  pthread_create(&thr29, NULL , t29, NULL);
  pthread_create(&thr30, NULL , t30, NULL);
  pthread_create(&thr31, NULL , t31, NULL);
  pthread_create(&thr32, NULL , t32, NULL);
  pthread_create(&thr33, NULL , t33, NULL);
  pthread_create(&thr34, NULL , t34, NULL);
  pthread_create(&thr35, NULL , t35, NULL);
  pthread_create(&thr36, NULL , t36, NULL);

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
  pthread_join(thr26,NULL);
  pthread_join(thr27,NULL);
  pthread_join(thr28,NULL);
  pthread_join(thr29,NULL);
  pthread_join(thr30,NULL);
  pthread_join(thr31,NULL);
  pthread_join(thr32,NULL);
  pthread_join(thr33,NULL);
  pthread_join(thr34,NULL);
  pthread_join(thr35,NULL);
  pthread_join(thr36,NULL);

  int v75 = atomic_load_explicit(&atom_1_r1_1_eq, memory_order_acquire);
  int v76 = atomic_load_explicit(&atom_2_r2_1_eq, memory_order_acquire);
  int v77 = atomic_load_explicit(&atom_3_r3_1_eq, memory_order_acquire);
  int v78 = atomic_load_explicit(&atom_4_r4_1_eq, memory_order_acquire);
  int v79 = atomic_load_explicit(&atom_5_r5_1_eq, memory_order_acquire);
  int v80 = atomic_load_explicit(&atom_6_r6_1_eq, memory_order_acquire);
  int v81 = atomic_load_explicit(&atom_7_r7_1_eq, memory_order_acquire);
  int v82 = atomic_load_explicit(&atom_8_r8_1_eq, memory_order_acquire);
  int v83 = atomic_load_explicit(&atom_9_r9_1_eq, memory_order_acquire);
  int v84 = atomic_load_explicit(&atom_10_r10_1_eq, memory_order_acquire);
  int v85 = atomic_load_explicit(&atom_11_r11_1_eq, memory_order_acquire);
  int v86 = atomic_load_explicit(&atom_12_r12_1_eq, memory_order_acquire);
  int v87 = atomic_load_explicit(&atom_13_r13_1_eq, memory_order_acquire);
  int v88 = atomic_load_explicit(&atom_14_r14_1_eq, memory_order_acquire);
  int v89 = atomic_load_explicit(&atom_15_r15_1_eq, memory_order_acquire);
  int v90 = atomic_load_explicit(&atom_16_r16_1_eq, memory_order_acquire);
  int v91 = atomic_load_explicit(&atom_17_r17_1_eq, memory_order_acquire);
  int v92 = atomic_load_explicit(&atom_18_r18_1_eq, memory_order_acquire);
  int v93 = atomic_load_explicit(&atom_19_r19_1_eq, memory_order_acquire);
  int v94 = atomic_load_explicit(&atom_20_r20_1_eq, memory_order_acquire);
  int v95 = atomic_load_explicit(&atom_21_r21_1_eq, memory_order_acquire);
  int v96 = atomic_load_explicit(&atom_22_r22_1_eq, memory_order_acquire);
  int v97 = atomic_load_explicit(&atom_23_r23_1_eq, memory_order_acquire);
  int v98 = atomic_load_explicit(&atom_24_r24_1_eq, memory_order_acquire);
  int v99 = atomic_load_explicit(&atom_25_r25_1_eq, memory_order_acquire);
  int v100 = atomic_load_explicit(&atom_26_r26_1_eq, memory_order_acquire);
  int v101 = atomic_load_explicit(&atom_27_r27_1_eq, memory_order_acquire);
  int v102 = atomic_load_explicit(&atom_28_r28_1_eq, memory_order_acquire);
  int v103 = atomic_load_explicit(&atom_29_r29_1_eq, memory_order_acquire);
  int v104 = atomic_load_explicit(&atom_30_r30_1_eq, memory_order_acquire);
  int v105 = atomic_load_explicit(&atom_31_r31_1_eq, memory_order_acquire);
  int v106 = atomic_load_explicit(&atom_32_r32_1_eq, memory_order_acquire);
  int v107 = atomic_load_explicit(&atom_33_r33_1_eq, memory_order_acquire);
  int v108 = atomic_load_explicit(&atom_34_r34_1_eq, memory_order_acquire);
  int v109 = atomic_load_explicit(&atom_35_r35_1_eq, memory_order_acquire);
  int v110 = atomic_load_explicit(&atom_36_r36_1_eq, memory_order_acquire);
  int v111 = atomic_load_explicit(&atom_36_r0_0_eq, memory_order_acquire);
  int v112_conj = v110 & v111;
  int v113_conj = v109 & v112_conj;
  int v114_conj = v108 & v113_conj;
  int v115_conj = v107 & v114_conj;
  int v116_conj = v106 & v115_conj;
  int v117_conj = v105 & v116_conj;
  int v118_conj = v104 & v117_conj;
  int v119_conj = v103 & v118_conj;
  int v120_conj = v102 & v119_conj;
  int v121_conj = v101 & v120_conj;
  int v122_conj = v100 & v121_conj;
  int v123_conj = v99 & v122_conj;
  int v124_conj = v98 & v123_conj;
  int v125_conj = v97 & v124_conj;
  int v126_conj = v96 & v125_conj;
  int v127_conj = v95 & v126_conj;
  int v128_conj = v94 & v127_conj;
  int v129_conj = v93 & v128_conj;
  int v130_conj = v92 & v129_conj;
  int v131_conj = v91 & v130_conj;
  int v132_conj = v90 & v131_conj;
  int v133_conj = v89 & v132_conj;
  int v134_conj = v88 & v133_conj;
  int v135_conj = v87 & v134_conj;
  int v136_conj = v86 & v135_conj;
  int v137_conj = v85 & v136_conj;
  int v138_conj = v84 & v137_conj;
  int v139_conj = v83 & v138_conj;
  int v140_conj = v82 & v139_conj;
  int v141_conj = v81 & v140_conj;
  int v142_conj = v80 & v141_conj;
  int v143_conj = v79 & v142_conj;
  int v144_conj = v78 & v143_conj;
  int v145_conj = v77 & v144_conj;
  int v146_conj = v76 & v145_conj;
  int v147_conj = v75 & v146_conj;
  if (v147_conj == 1) assert(0);
  return 0;
}
