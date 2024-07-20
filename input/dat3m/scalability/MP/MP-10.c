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
atomic_int atom_1_r1_1_eq; 
atomic_int atom_2_r2_1_eq; 
atomic_int atom_3_r3_1_eq; 
atomic_int atom_4_r4_1_eq; 
atomic_int atom_5_r5_1_eq; 
atomic_int atom_6_r6_1_eq; 
atomic_int atom_7_r7_1_eq; 
atomic_int atom_8_r8_1_eq; 
atomic_int atom_9_r9_1_eq; 
atomic_int atom_9_r0_0_eq; 



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
  int v40 = (v2_r1==1);
  atomic_store_explicit(&atom_1_r1_1_eq, v40, memory_order_release);
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
  int v41 = (v4_r2==1);
  atomic_store_explicit(&atom_2_r2_1_eq, v41, memory_order_release);
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
  int v42 = (v6_r3==1);
  atomic_store_explicit(&atom_3_r3_1_eq, v42, memory_order_release);
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
  int v43 = (v8_r4==1);
  atomic_store_explicit(&atom_4_r4_1_eq, v43, memory_order_release);
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
  int v44 = (v10_r5==1);
  atomic_store_explicit(&atom_5_r5_1_eq, v44, memory_order_release);
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
  int v45 = (v12_r6==1);
  atomic_store_explicit(&atom_6_r6_1_eq, v45, memory_order_release);
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
  int v46 = (v14_r7==1);
  atomic_store_explicit(&atom_7_r7_1_eq, v46, memory_order_release);
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
  int v47 = (v16_r8==1);
  atomic_store_explicit(&atom_8_r8_1_eq, v47, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v18_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v20_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v48 = (v18_r9==1);
  atomic_store_explicit(&atom_9_r9_1_eq, v48, memory_order_release);
  int v49 = (v20_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v49, memory_order_release);
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

  int v21 = atomic_load_explicit(&atom_1_r1_1_eq, memory_order_acquire);
  int v22 = atomic_load_explicit(&atom_2_r2_1_eq, memory_order_acquire);
  int v23 = atomic_load_explicit(&atom_3_r3_1_eq, memory_order_acquire);
  int v24 = atomic_load_explicit(&atom_4_r4_1_eq, memory_order_acquire);
  int v25 = atomic_load_explicit(&atom_5_r5_1_eq, memory_order_acquire);
  int v26 = atomic_load_explicit(&atom_6_r6_1_eq, memory_order_acquire);
  int v27 = atomic_load_explicit(&atom_7_r7_1_eq, memory_order_acquire);
  int v28 = atomic_load_explicit(&atom_8_r8_1_eq, memory_order_acquire);
  int v29 = atomic_load_explicit(&atom_9_r9_1_eq, memory_order_acquire);
  int v30 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v31_conj = v29 & v30;
  int v32_conj = v28 & v31_conj;
  int v33_conj = v27 & v32_conj;
  int v34_conj = v26 & v33_conj;
  int v35_conj = v25 & v34_conj;
  int v36_conj = v24 & v35_conj;
  int v37_conj = v23 & v36_conj;
  int v38_conj = v22 & v37_conj;
  int v39_conj = v21 & v38_conj;
  if (v39_conj == 1) assert(0);
  return 0;
}
