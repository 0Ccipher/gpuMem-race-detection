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
atomic_int atom_2_r0_1_eq; 
atomic_int atom_2_r1_1_eq; 
atomic_int atom_2_r2_1_eq; 
atomic_int atom_2_r3_2_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
__VERIFIER_memory_scope_system();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 2, memory_order_relaxed);
__VERIFIER_memory_scope_system();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(2);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  int v2_r0 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_system();
  int v4_r1 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v6_r2 = atomic_load_explicit(&vars[0], memory_order_relaxed);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v8_r3 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v16 = (v2_r0==1);
  atomic_store_explicit(&atom_2_r0_1_eq, v16, memory_order_release);
  int v17 = (v4_r1==1);
  atomic_store_explicit(&atom_2_r1_1_eq, v17, memory_order_release);
  int v18 = (v6_r2==1);
  atomic_store_explicit(&atom_2_r2_1_eq, v18, memory_order_release);
  int v19 = (v8_r3==2);
  atomic_store_explicit(&atom_2_r3_2_eq, v19, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);

  int v9 = atomic_load_explicit(&atom_2_r0_1_eq, memory_order_acquire);
  int v10 = atomic_load_explicit(&atom_2_r1_1_eq, memory_order_acquire);
  int v11 = atomic_load_explicit(&atom_2_r2_1_eq, memory_order_acquire);
  int v12 = atomic_load_explicit(&atom_2_r3_2_eq, memory_order_acquire);
  int v13_conj = v11 & v12;
  int v14_conj = v10 & v13_conj;
  int v15_conj = v9 & v14_conj;
  if (v15_conj == 1) assert(0);
  return 0;
}
