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
atomic_int atom_0_r2_0_ne; 
atomic_int atom_1_r4_0_ne; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v1_r1 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acq_rel);
__VERIFIER_memory_scope_device();
  int v2_r2 = atomic_fetch_add_explicit(&vars[1], 1, memory_order_acq_rel);
  int v8 = (v2_r2!=0);
  atomic_store_explicit(&atom_0_r2_0_ne, v8, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v3_r3 = atomic_fetch_add_explicit(&vars[1], 1, memory_order_acq_rel);
__VERIFIER_memory_scope_device();
  int v4_r4 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acq_rel);
  int v9 = (v4_r4!=0);
  atomic_store_explicit(&atom_1_r4_0_ne, v9, memory_order_release);
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

  int v5 = atomic_load_explicit(&atom_0_r2_0_ne, memory_order_acquire);
  int v6 = atomic_load_explicit(&atom_1_r4_0_ne, memory_order_acquire);
  int v7_disj = v5 | v6;
  if (v7_disj == 0) assert(0);
  return 0;
}
