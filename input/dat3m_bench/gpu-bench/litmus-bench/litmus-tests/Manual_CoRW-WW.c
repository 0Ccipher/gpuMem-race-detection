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
atomic_int vars[2]; 
atomic_int atom_0_r1_5_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  int v2_r1 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_system();
  atomic_store_explicit(&vars[1], 3, memory_order_release);
  int v7 = (v2_r1==5);
  atomic_store_explicit(&atom_0_r1_5_eq, v7, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  atomic_store_explicit(&vars[1], 4, memory_order_release);
__VERIFIER_memory_scope_system();
  atomic_store_explicit(&vars[0], 5, memory_order_relaxed);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  pthread_t thr0; 
  pthread_t thr1; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v3 = atomic_load_explicit(&atom_0_r1_5_eq, memory_order_acquire);
  int v4 = atomic_load_explicit(&vars[1], memory_order_acquire);
  int v5 = (v4==4);
  int v6_conj = v3 & v5;
  if (v6_conj == 1) assert(0);
  return 0;
}
