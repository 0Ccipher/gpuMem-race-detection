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
atomic_int atom_2_r0_1_eq; 
atomic_int atom_2_r1_0_eq; 
atomic_int atom_3_r0_0_eq; 
atomic_int atom_3_r1_1_eq; 
atomic_int atom_4_r0_0_eq; 
atomic_int atom_4_r1_0_eq; 



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
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
  int v22 = (v2_r0==1);
  atomic_store_explicit(&atom_2_r0_1_eq, v22, memory_order_release);
  int v23 = (v4_r1==0);
  atomic_store_explicit(&atom_2_r1_0_eq, v23, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v6_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v8_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v24 = (v8_r0==0);
  atomic_store_explicit(&atom_3_r0_0_eq, v24, memory_order_release);
  int v25 = (v6_r1==1);
  atomic_store_explicit(&atom_3_r1_1_eq, v25, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v10_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
  int v26 = (0==0);
  atomic_store_explicit(&atom_4_r0_0_eq, v26, memory_order_release);
  int v27 = (v10_r1==0);
  atomic_store_explicit(&atom_4_r1_0_eq, v27, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);

  int v11 = atomic_load_explicit(&atom_2_r0_1_eq, memory_order_acquire);
  int v12 = atomic_load_explicit(&atom_2_r1_0_eq, memory_order_acquire);
  int v13 = atomic_load_explicit(&atom_3_r0_0_eq, memory_order_acquire);
  int v14 = atomic_load_explicit(&atom_3_r1_1_eq, memory_order_acquire);
  int v15 = atomic_load_explicit(&atom_4_r0_0_eq, memory_order_acquire);
  int v16 = atomic_load_explicit(&atom_4_r1_0_eq, memory_order_acquire);
  int v17_conj = v15 & v16;
  int v18_conj = v14 & v17_conj;
  int v19_conj = v13 & v18_conj;
  int v20_conj = v12 & v19_conj;
  int v21_conj = v11 & v20_conj;
  if (v21_conj == 1) assert(0);
  return 0;
}
