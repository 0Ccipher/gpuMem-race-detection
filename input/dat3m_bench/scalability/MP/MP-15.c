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
atomic_int vars[15]; 
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
atomic_int atom_14_r0_0_eq; 



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
  int v60 = (v2_r1==1);
  atomic_store_explicit(&atom_1_r1_1_eq, v60, memory_order_release);
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
  int v61 = (v4_r2==1);
  atomic_store_explicit(&atom_2_r2_1_eq, v61, memory_order_release);
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
  int v62 = (v6_r3==1);
  atomic_store_explicit(&atom_3_r3_1_eq, v62, memory_order_release);
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
  int v63 = (v8_r4==1);
  atomic_store_explicit(&atom_4_r4_1_eq, v63, memory_order_release);
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
  int v64 = (v10_r5==1);
  atomic_store_explicit(&atom_5_r5_1_eq, v64, memory_order_release);
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
  int v65 = (v12_r6==1);
  atomic_store_explicit(&atom_6_r6_1_eq, v65, memory_order_release);
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
  int v66 = (v14_r7==1);
  atomic_store_explicit(&atom_7_r7_1_eq, v66, memory_order_release);
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
  int v67 = (v16_r8==1);
  atomic_store_explicit(&atom_8_r8_1_eq, v67, memory_order_release);
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
  int v68 = (v18_r9==1);
  atomic_store_explicit(&atom_9_r9_1_eq, v68, memory_order_release);
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
  int v69 = (v20_r10==1);
  atomic_store_explicit(&atom_10_r10_1_eq, v69, memory_order_release);
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
  int v70 = (v22_r11==1);
  atomic_store_explicit(&atom_11_r11_1_eq, v70, memory_order_release);
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
  int v71 = (v24_r12==1);
  atomic_store_explicit(&atom_12_r12_1_eq, v71, memory_order_release);
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
  int v72 = (v26_r13==1);
  atomic_store_explicit(&atom_13_r13_1_eq, v72, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v28_r14 = atomic_load_explicit(&vars[14], memory_order_acquire);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v30_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v73 = (v28_r14==1);
  atomic_store_explicit(&atom_14_r14_1_eq, v73, memory_order_release);
  int v74 = (v30_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v74, memory_order_release);
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

  int v31 = atomic_load_explicit(&atom_1_r1_1_eq, memory_order_acquire);
  int v32 = atomic_load_explicit(&atom_2_r2_1_eq, memory_order_acquire);
  int v33 = atomic_load_explicit(&atom_3_r3_1_eq, memory_order_acquire);
  int v34 = atomic_load_explicit(&atom_4_r4_1_eq, memory_order_acquire);
  int v35 = atomic_load_explicit(&atom_5_r5_1_eq, memory_order_acquire);
  int v36 = atomic_load_explicit(&atom_6_r6_1_eq, memory_order_acquire);
  int v37 = atomic_load_explicit(&atom_7_r7_1_eq, memory_order_acquire);
  int v38 = atomic_load_explicit(&atom_8_r8_1_eq, memory_order_acquire);
  int v39 = atomic_load_explicit(&atom_9_r9_1_eq, memory_order_acquire);
  int v40 = atomic_load_explicit(&atom_10_r10_1_eq, memory_order_acquire);
  int v41 = atomic_load_explicit(&atom_11_r11_1_eq, memory_order_acquire);
  int v42 = atomic_load_explicit(&atom_12_r12_1_eq, memory_order_acquire);
  int v43 = atomic_load_explicit(&atom_13_r13_1_eq, memory_order_acquire);
  int v44 = atomic_load_explicit(&atom_14_r14_1_eq, memory_order_acquire);
  int v45 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v46_conj = v44 & v45;
  int v47_conj = v43 & v46_conj;
  int v48_conj = v42 & v47_conj;
  int v49_conj = v41 & v48_conj;
  int v50_conj = v40 & v49_conj;
  int v51_conj = v39 & v50_conj;
  int v52_conj = v38 & v51_conj;
  int v53_conj = v37 & v52_conj;
  int v54_conj = v36 & v53_conj;
  int v55_conj = v35 & v54_conj;
  int v56_conj = v34 & v55_conj;
  int v57_conj = v33 & v56_conj;
  int v58_conj = v32 & v57_conj;
  int v59_conj = v31 & v58_conj;
  if (v59_conj == 1) assert(0);
  return 0;
}
