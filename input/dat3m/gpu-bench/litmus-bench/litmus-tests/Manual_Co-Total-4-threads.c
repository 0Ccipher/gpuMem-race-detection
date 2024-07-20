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
atomic_int atom_3_r3_1_eq; 
atomic_int atom_3_r4_1_eq; 
atomic_int atom_3_r5_2_eq; 



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
  int v24 = (v2_r0==1);
  atomic_store_explicit(&atom_2_r0_1_eq, v24, memory_order_release);
  int v25 = (v4_r1==1);
  atomic_store_explicit(&atom_2_r1_1_eq, v25, memory_order_release);
  int v26 = (v6_r2==1);
  atomic_store_explicit(&atom_2_r2_1_eq, v26, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(3);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  int v8_r3 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_system();
  int v10_r4 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v12_r5 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v27 = (v8_r3==1);
  atomic_store_explicit(&atom_3_r3_1_eq, v27, memory_order_release);
  int v28 = (v10_r4==1);
  atomic_store_explicit(&atom_3_r4_1_eq, v28, memory_order_release);
  int v29 = (v12_r5==2);
  atomic_store_explicit(&atom_3_r5_2_eq, v29, memory_order_release);
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


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);

  int v13 = atomic_load_explicit(&atom_2_r0_1_eq, memory_order_acquire);
  int v14 = atomic_load_explicit(&atom_2_r1_1_eq, memory_order_acquire);
  int v15 = atomic_load_explicit(&atom_2_r2_1_eq, memory_order_acquire);
  int v16 = atomic_load_explicit(&atom_3_r3_1_eq, memory_order_acquire);
  int v17 = atomic_load_explicit(&atom_3_r4_1_eq, memory_order_acquire);
  int v18 = atomic_load_explicit(&atom_3_r5_2_eq, memory_order_acquire);
  int v19_conj = v17 & v18;
  int v20_conj = v16 & v19_conj;
  int v21_conj = v15 & v20_conj;
  int v22_conj = v14 & v21_conj;
  int v23_conj = v13 & v22_conj;
  if (v23_conj == 1) assert(0);
  return 0;
}
