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
atomic_int atom_1_r1_0_eq; 
atomic_int atom_1_r3_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
__VERIFIER_memory_scope_device();
  int v1_r0 = atomic_exchange_explicit(&vars[1], 0, memory_order_relaxed);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
  int v3 = 0;
  __VERIFIER_ret_CAS();
__VERIFIER_memory_scope_device();
  int v2_r1 = atomic_compare_exchange_strong_explicit(&vars[1],&v3, 1,memory_order_relaxed,memory_order_relaxed);
  if (v2_r1!=0)  goto lbl_LC00;
label_3:;
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v5_r3 = atomic_load_explicit(&vars[0], memory_order_relaxed);
lbl_LC00:;
  int v9 = (v2_r1==0);
  atomic_store_explicit(&atom_1_r1_0_eq, v9, memory_order_release);
  int v10 = (v5_r3==0);
  atomic_store_explicit(&atom_1_r3_0_eq, v10, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 1);
  pthread_t thr0; 
  pthread_t thr1; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v6 = atomic_load_explicit(&atom_1_r1_0_eq, memory_order_acquire);
  int v7 = atomic_load_explicit(&atom_1_r3_0_eq, memory_order_acquire);
  int v8_conj = v6 & v7;
  if (v8_conj == 1) assert(0);
  return 0;
}
