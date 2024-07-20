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
atomic_int vars[3]; 
atomic_int atom_3_r0_1_eq; 
atomic_int atom_3_r1_0_eq; 
atomic_int atom_3_r2_0_eq; 
atomic_int atom_4_r0_0_eq; 
atomic_int atom_4_r1_1_eq; 
atomic_int atom_4_r2_0_eq; 
atomic_int atom_5_r0_0_eq; 
atomic_int atom_5_r1_0_eq; 
atomic_int atom_5_r2_1_eq; 



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
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v36 = (v2_r0==1);
  atomic_store_explicit(&atom_3_r0_1_eq, v36, memory_order_release);
  int v37 = (v4_r1==0);
  atomic_store_explicit(&atom_3_r1_0_eq, v37, memory_order_release);
  int v38 = (v6_r2==0);
  atomic_store_explicit(&atom_3_r2_0_eq, v38, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v8_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v10_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v12_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v39 = (v10_r0==0);
  atomic_store_explicit(&atom_4_r0_0_eq, v39, memory_order_release);
  int v40 = (v8_r1==1);
  atomic_store_explicit(&atom_4_r1_1_eq, v40, memory_order_release);
  int v41 = (v12_r2==0);
  atomic_store_explicit(&atom_4_r2_0_eq, v41, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v14_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v42 = (v18_r0==0);
  atomic_store_explicit(&atom_5_r0_0_eq, v42, memory_order_release);
  int v43 = (v16_r1==0);
  atomic_store_explicit(&atom_5_r1_0_eq, v43, memory_order_release);
  int v44 = (v14_r2==1);
  atomic_store_explicit(&atom_5_r2_1_eq, v44, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);

  int v19 = atomic_load_explicit(&atom_3_r0_1_eq, memory_order_acquire);
  int v20 = atomic_load_explicit(&atom_3_r1_0_eq, memory_order_acquire);
  int v21 = atomic_load_explicit(&atom_3_r2_0_eq, memory_order_acquire);
  int v22 = atomic_load_explicit(&atom_4_r0_0_eq, memory_order_acquire);
  int v23 = atomic_load_explicit(&atom_4_r1_1_eq, memory_order_acquire);
  int v24 = atomic_load_explicit(&atom_4_r2_0_eq, memory_order_acquire);
  int v25 = atomic_load_explicit(&atom_5_r0_0_eq, memory_order_acquire);
  int v26 = atomic_load_explicit(&atom_5_r1_0_eq, memory_order_acquire);
  int v27 = atomic_load_explicit(&atom_5_r2_1_eq, memory_order_acquire);
  int v28_conj = v26 & v27;
  int v29_conj = v25 & v28_conj;
  int v30_conj = v24 & v29_conj;
  int v31_conj = v23 & v30_conj;
  int v32_conj = v22 & v31_conj;
  int v33_conj = v21 & v32_conj;
  int v34_conj = v20 & v33_conj;
  int v35_conj = v19 & v34_conj;
  if (v35_conj == 1) assert(0);
  return 0;
}
