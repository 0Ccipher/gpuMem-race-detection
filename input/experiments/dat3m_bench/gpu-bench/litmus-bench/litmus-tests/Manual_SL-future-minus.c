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
atomic_int atom_0_r0_1_eq; 
atomic_int atom_1_r2_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[1], 0, memory_order_relaxed);
__VERIFIER_memory_scope_device();
  atomic_thread_fence(memory_order_seq_cst);
  int v8 = (v2_r0==1);
  atomic_store_explicit(&atom_0_r0_1_eq, v8, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
  int v4 = 0;
  __VERIFIER_ret_CAS();
__VERIFIER_memory_scope_device();
  int v3_r2 = atomic_compare_exchange_strong_explicit(&vars[1],&v4, 1,memory_order_relaxed,memory_order_relaxed);
  if (v3_r2!=0)  goto lbl_LC00;
label_3:;
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
lbl_LC00:;
  int v9 = (v3_r2==0);
  atomic_store_explicit(&atom_1_r2_0_eq, v9, memory_order_release);
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

  int v5 = atomic_load_explicit(&atom_0_r0_1_eq, memory_order_acquire);
  int v6 = atomic_load_explicit(&atom_1_r2_0_eq, memory_order_acquire);
  int v7_conj = v5 & v6;
  if (v7_conj == 1) assert(0);
  return 0;
}
