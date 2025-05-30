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
atomic_int vars[29]; 
atomic_int atom_0_r1_1_eq; 
atomic_int atom_1_r2_1_eq; 
atomic_int atom_2_r3_1_eq; 
atomic_int atom_3_r4_1_eq; 
atomic_int atom_4_r5_1_eq; 
atomic_int atom_5_r6_1_eq; 
atomic_int atom_6_r7_1_eq; 
atomic_int atom_7_r8_1_eq; 
atomic_int atom_8_r9_1_eq; 
atomic_int atom_9_r10_1_eq; 
atomic_int atom_10_r11_1_eq; 
atomic_int atom_11_r12_1_eq; 
atomic_int atom_12_r13_1_eq; 
atomic_int atom_13_r14_1_eq; 
atomic_int atom_14_r15_1_eq; 
atomic_int atom_15_r16_1_eq; 
atomic_int atom_16_r17_1_eq; 
atomic_int atom_17_r18_1_eq; 
atomic_int atom_18_r19_1_eq; 
atomic_int atom_19_r20_1_eq; 
atomic_int atom_20_r21_1_eq; 
atomic_int atom_21_r22_1_eq; 
atomic_int atom_22_r23_1_eq; 
atomic_int atom_23_r24_1_eq; 
atomic_int atom_24_r25_1_eq; 
atomic_int atom_25_r26_1_eq; 
atomic_int atom_26_r27_1_eq; 
atomic_int atom_27_r28_1_eq; 
atomic_int atom_28_r0_1_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_release);
  int v116 = (v2_r1==1);
  atomic_store_explicit(&atom_0_r1_1_eq, v116, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v4_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
  int v117 = (v4_r2==1);
  atomic_store_explicit(&atom_1_r2_1_eq, v117, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(2);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v6_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  int v118 = (v6_r3==1);
  atomic_store_explicit(&atom_2_r3_1_eq, v118, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v8_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[3], 1, memory_order_release);
  int v119 = (v8_r4==1);
  atomic_store_explicit(&atom_3_r4_1_eq, v119, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v10_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[4], 1, memory_order_release);
  int v120 = (v10_r5==1);
  atomic_store_explicit(&atom_4_r5_1_eq, v120, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v12_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[5], 1, memory_order_release);
  int v121 = (v12_r6==1);
  atomic_store_explicit(&atom_5_r6_1_eq, v121, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v14_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[6], 1, memory_order_release);
  int v122 = (v14_r7==1);
  atomic_store_explicit(&atom_6_r7_1_eq, v122, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v16_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[7], 1, memory_order_release);
  int v123 = (v16_r8==1);
  atomic_store_explicit(&atom_7_r8_1_eq, v123, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v18_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[8], 1, memory_order_release);
  int v124 = (v18_r9==1);
  atomic_store_explicit(&atom_8_r9_1_eq, v124, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v20_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[9], 1, memory_order_release);
  int v125 = (v20_r10==1);
  atomic_store_explicit(&atom_9_r10_1_eq, v125, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v22_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[10], 1, memory_order_release);
  int v126 = (v22_r11==1);
  atomic_store_explicit(&atom_10_r11_1_eq, v126, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v24_r12 = atomic_load_explicit(&vars[12], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[11], 1, memory_order_release);
  int v127 = (v24_r12==1);
  atomic_store_explicit(&atom_11_r12_1_eq, v127, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v26_r13 = atomic_load_explicit(&vars[13], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[12], 1, memory_order_release);
  int v128 = (v26_r13==1);
  atomic_store_explicit(&atom_12_r13_1_eq, v128, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v28_r14 = atomic_load_explicit(&vars[14], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[13], 1, memory_order_release);
  int v129 = (v28_r14==1);
  atomic_store_explicit(&atom_13_r14_1_eq, v129, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v30_r15 = atomic_load_explicit(&vars[15], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[14], 1, memory_order_release);
  int v130 = (v30_r15==1);
  atomic_store_explicit(&atom_14_r15_1_eq, v130, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v32_r16 = atomic_load_explicit(&vars[16], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[15], 1, memory_order_release);
  int v131 = (v32_r16==1);
  atomic_store_explicit(&atom_15_r16_1_eq, v131, memory_order_release);
  return NULL;
}




void *t16(void *arg){
label_17:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(16);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v34_r17 = atomic_load_explicit(&vars[17], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[16], 1, memory_order_release);
  int v132 = (v34_r17==1);
  atomic_store_explicit(&atom_16_r17_1_eq, v132, memory_order_release);
  return NULL;
}




void *t17(void *arg){
label_18:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(17);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v36_r18 = atomic_load_explicit(&vars[18], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[17], 1, memory_order_release);
  int v133 = (v36_r18==1);
  atomic_store_explicit(&atom_17_r18_1_eq, v133, memory_order_release);
  return NULL;
}




void *t18(void *arg){
label_19:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(18);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v38_r19 = atomic_load_explicit(&vars[19], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[18], 1, memory_order_release);
  int v134 = (v38_r19==1);
  atomic_store_explicit(&atom_18_r19_1_eq, v134, memory_order_release);
  return NULL;
}




void *t19(void *arg){
label_20:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(19);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v40_r20 = atomic_load_explicit(&vars[20], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[19], 1, memory_order_release);
  int v135 = (v40_r20==1);
  atomic_store_explicit(&atom_19_r20_1_eq, v135, memory_order_release);
  return NULL;
}




void *t20(void *arg){
label_21:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(20);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v42_r21 = atomic_load_explicit(&vars[21], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[20], 1, memory_order_release);
  int v136 = (v42_r21==1);
  atomic_store_explicit(&atom_20_r21_1_eq, v136, memory_order_release);
  return NULL;
}




void *t21(void *arg){
label_22:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(21);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v44_r22 = atomic_load_explicit(&vars[22], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[21], 1, memory_order_release);
  int v137 = (v44_r22==1);
  atomic_store_explicit(&atom_21_r22_1_eq, v137, memory_order_release);
  return NULL;
}




void *t22(void *arg){
label_23:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(22);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v46_r23 = atomic_load_explicit(&vars[23], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[22], 1, memory_order_release);
  int v138 = (v46_r23==1);
  atomic_store_explicit(&atom_22_r23_1_eq, v138, memory_order_release);
  return NULL;
}




void *t23(void *arg){
label_24:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(23);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v48_r24 = atomic_load_explicit(&vars[24], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[23], 1, memory_order_release);
  int v139 = (v48_r24==1);
  atomic_store_explicit(&atom_23_r24_1_eq, v139, memory_order_release);
  return NULL;
}




void *t24(void *arg){
label_25:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(24);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v50_r25 = atomic_load_explicit(&vars[25], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[24], 1, memory_order_release);
  int v140 = (v50_r25==1);
  atomic_store_explicit(&atom_24_r25_1_eq, v140, memory_order_release);
  return NULL;
}




void *t25(void *arg){
label_26:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(25);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v52_r26 = atomic_load_explicit(&vars[26], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[25], 1, memory_order_release);
  int v141 = (v52_r26==1);
  atomic_store_explicit(&atom_25_r26_1_eq, v141, memory_order_release);
  return NULL;
}




void *t26(void *arg){
label_27:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(26);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v54_r27 = atomic_load_explicit(&vars[27], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[26], 1, memory_order_release);
  int v142 = (v54_r27==1);
  atomic_store_explicit(&atom_26_r27_1_eq, v142, memory_order_release);
  return NULL;
}




void *t27(void *arg){
label_28:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(27);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v56_r28 = atomic_load_explicit(&vars[28], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[27], 1, memory_order_release);
  int v143 = (v56_r28==1);
  atomic_store_explicit(&atom_27_r28_1_eq, v143, memory_order_release);
  return NULL;
}




void *t28(void *arg){
label_29:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(28);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v58_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[28], 1, memory_order_release);
  int v144 = (v58_r0==1);
  atomic_store_explicit(&atom_28_r0_1_eq, v144, memory_order_release);
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

  int v59 = atomic_load_explicit(&atom_0_r1_1_eq, memory_order_acquire);
  int v60 = atomic_load_explicit(&atom_1_r2_1_eq, memory_order_acquire);
  int v61 = atomic_load_explicit(&atom_2_r3_1_eq, memory_order_acquire);
  int v62 = atomic_load_explicit(&atom_3_r4_1_eq, memory_order_acquire);
  int v63 = atomic_load_explicit(&atom_4_r5_1_eq, memory_order_acquire);
  int v64 = atomic_load_explicit(&atom_5_r6_1_eq, memory_order_acquire);
  int v65 = atomic_load_explicit(&atom_6_r7_1_eq, memory_order_acquire);
  int v66 = atomic_load_explicit(&atom_7_r8_1_eq, memory_order_acquire);
  int v67 = atomic_load_explicit(&atom_8_r9_1_eq, memory_order_acquire);
  int v68 = atomic_load_explicit(&atom_9_r10_1_eq, memory_order_acquire);
  int v69 = atomic_load_explicit(&atom_10_r11_1_eq, memory_order_acquire);
  int v70 = atomic_load_explicit(&atom_11_r12_1_eq, memory_order_acquire);
  int v71 = atomic_load_explicit(&atom_12_r13_1_eq, memory_order_acquire);
  int v72 = atomic_load_explicit(&atom_13_r14_1_eq, memory_order_acquire);
  int v73 = atomic_load_explicit(&atom_14_r15_1_eq, memory_order_acquire);
  int v74 = atomic_load_explicit(&atom_15_r16_1_eq, memory_order_acquire);
  int v75 = atomic_load_explicit(&atom_16_r17_1_eq, memory_order_acquire);
  int v76 = atomic_load_explicit(&atom_17_r18_1_eq, memory_order_acquire);
  int v77 = atomic_load_explicit(&atom_18_r19_1_eq, memory_order_acquire);
  int v78 = atomic_load_explicit(&atom_19_r20_1_eq, memory_order_acquire);
  int v79 = atomic_load_explicit(&atom_20_r21_1_eq, memory_order_acquire);
  int v80 = atomic_load_explicit(&atom_21_r22_1_eq, memory_order_acquire);
  int v81 = atomic_load_explicit(&atom_22_r23_1_eq, memory_order_acquire);
  int v82 = atomic_load_explicit(&atom_23_r24_1_eq, memory_order_acquire);
  int v83 = atomic_load_explicit(&atom_24_r25_1_eq, memory_order_acquire);
  int v84 = atomic_load_explicit(&atom_25_r26_1_eq, memory_order_acquire);
  int v85 = atomic_load_explicit(&atom_26_r27_1_eq, memory_order_acquire);
  int v86 = atomic_load_explicit(&atom_27_r28_1_eq, memory_order_acquire);
  int v87 = atomic_load_explicit(&atom_28_r0_1_eq, memory_order_acquire);
  int v88_conj = v86 & v87;
  int v89_conj = v85 & v88_conj;
  int v90_conj = v84 & v89_conj;
  int v91_conj = v83 & v90_conj;
  int v92_conj = v82 & v91_conj;
  int v93_conj = v81 & v92_conj;
  int v94_conj = v80 & v93_conj;
  int v95_conj = v79 & v94_conj;
  int v96_conj = v78 & v95_conj;
  int v97_conj = v77 & v96_conj;
  int v98_conj = v76 & v97_conj;
  int v99_conj = v75 & v98_conj;
  int v100_conj = v74 & v99_conj;
  int v101_conj = v73 & v100_conj;
  int v102_conj = v72 & v101_conj;
  int v103_conj = v71 & v102_conj;
  int v104_conj = v70 & v103_conj;
  int v105_conj = v69 & v104_conj;
  int v106_conj = v68 & v105_conj;
  int v107_conj = v67 & v106_conj;
  int v108_conj = v66 & v107_conj;
  int v109_conj = v65 & v108_conj;
  int v110_conj = v64 & v109_conj;
  int v111_conj = v63 & v110_conj;
  int v112_conj = v62 & v111_conj;
  int v113_conj = v61 & v112_conj;
  int v114_conj = v60 & v113_conj;
  int v115_conj = v59 & v114_conj;
  if (v115_conj == 1) assert(0);
  return 0;
}
