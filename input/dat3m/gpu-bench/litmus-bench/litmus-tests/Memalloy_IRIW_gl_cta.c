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
atomic_int vars[1]; 
atomic_int atom_1_r0_1_eq; 
atomic_int atom_1_r2_0_eq; 
atomic_int atom_3_r0_1_eq; 
atomic_int atom_3_r2_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
__VERIFIER_memory_scope_device();
  atomic_thread_fence(memory_order_seq_cst);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v4_r2 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v16 = (v2_r0==1);
  atomic_store_explicit(&atom_1_r0_1_eq, v16, memory_order_release);
  int v17 = (v4_r2==0);
  atomic_store_explicit(&atom_1_r2_0_eq, v17, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(2);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v6_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
__VERIFIER_memory_scope_work_group();
  atomic_thread_fence(memory_order_seq_cst);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v8_r2 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v18 = (v6_r0==1);
  atomic_store_explicit(&atom_3_r0_1_eq, v18, memory_order_release);
  int v19 = (v8_r2==0);
  atomic_store_explicit(&atom_3_r2_0_eq, v19, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);

  int v9 = atomic_load_explicit(&atom_1_r0_1_eq, memory_order_acquire);
  int v10 = atomic_load_explicit(&atom_1_r2_0_eq, memory_order_acquire);
  int v11 = atomic_load_explicit(&atom_3_r0_1_eq, memory_order_acquire);
  int v12 = atomic_load_explicit(&atom_3_r2_0_eq, memory_order_acquire);
  int v13_conj = v11 & v12;
  int v14_conj = v10 & v13_conj;
  int v15_conj = v9 & v14_conj;
  if (v15_conj == 1) assert(0);
  return 0;
}
