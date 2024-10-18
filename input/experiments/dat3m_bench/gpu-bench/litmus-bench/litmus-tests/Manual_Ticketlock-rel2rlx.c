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
atomic_int atom_0_r1_0_r2_eq; 
atomic_int atom_1_r1_1_r2_eq; 
atomic_int atom_0_r3_0_eq; 
atomic_int atom_1_r3_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v1_r1 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acquire);
lbl_LC00:;
__VERIFIER_memory_scope_device();
  int v3_r2 = atomic_load_explicit(&vars[1], memory_order_acquire);
  if (v1_r1==v3_r2)  goto lbl_LC01;
label_2:;
  goto lbl_LC00;
lbl_LC01:;
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v5_r3 = atomic_load_explicit(&vars[2], memory_order_relaxed);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[2], 1, memory_order_relaxed);
__VERIFIER_memory_scope_device();
  int v6_r4 = atomic_fetch_add_explicit(&vars[1], 1, memory_order_relaxed);
  int v20 = (v1_r1==v3_r2);
  atomic_store_explicit(&atom_0_r1_0_r2_eq, v20, memory_order_release);
  int v22 = (v5_r3==0);
  atomic_store_explicit(&atom_0_r3_0_eq, v22, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_3:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v7_r1 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acquire);
lbl_LC00:;
__VERIFIER_memory_scope_device();
  int v9_r2 = atomic_load_explicit(&vars[1], memory_order_acquire);
  if (v7_r1==v9_r2)  goto lbl_LC01;
label_4:;
  goto lbl_LC00;
lbl_LC01:;
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v11_r3 = atomic_load_explicit(&vars[2], memory_order_relaxed);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[2], 2, memory_order_relaxed);
__VERIFIER_memory_scope_device();
  int v12_r4 = atomic_fetch_add_explicit(&vars[1], 1, memory_order_release);
  int v21 = (v7_r1==v9_r2);
  atomic_store_explicit(&atom_1_r1_1_r2_eq, v21, memory_order_release);
  int v23 = (v11_r3==0);
  atomic_store_explicit(&atom_1_r3_0_eq, v23, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  pthread_t thr0; 
  pthread_t thr1; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v13 = atomic_load_explicit(&atom_0_r1_0_r2_eq, memory_order_acquire);
  int v14 = atomic_load_explicit(&atom_1_r1_1_r2_eq, memory_order_acquire);
  int v15 = atomic_load_explicit(&atom_0_r3_0_eq, memory_order_acquire);
  int v16 = atomic_load_explicit(&atom_1_r3_0_eq, memory_order_acquire);
  int v17_conj = v15 & v16;
  int v18_conj = v14 & v17_conj;
  int v19_conj = v13 & v18_conj;
  if (v19_conj == 1) assert(0);
  return 0;
}
