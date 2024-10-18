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
atomic_int vars[7]; 
atomic_int atom_0_r1_0_eq; 
atomic_int atom_1_r2_0_eq; 
atomic_int atom_2_r3_0_eq; 
atomic_int atom_3_r4_0_eq; 
atomic_int atom_4_r5_0_eq; 
atomic_int atom_5_r6_0_eq; 
atomic_int atom_6_r0_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v2_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
  int v28 = (v2_r1==0);
  atomic_store_explicit(&atom_0_r1_0_eq, v28, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v4_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v29 = (v4_r2==0);
  atomic_store_explicit(&atom_1_r2_0_eq, v29, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(2);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v6_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
  int v30 = (v6_r3==0);
  atomic_store_explicit(&atom_2_r3_0_eq, v30, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[3], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v8_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v31 = (v8_r4==0);
  atomic_store_explicit(&atom_3_r4_0_eq, v31, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[4], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v10_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v32 = (v10_r5==0);
  atomic_store_explicit(&atom_4_r5_0_eq, v32, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[5], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v12_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v33 = (v12_r6==0);
  atomic_store_explicit(&atom_5_r6_0_eq, v33, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[6], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v14_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v34 = (v14_r0==0);
  atomic_store_explicit(&atom_6_r0_0_eq, v34, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  atomic_init(&vars[4], 0);
  atomic_init(&vars[5], 0);
  atomic_init(&vars[6], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 
  pthread_t thr6; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);

  int v15 = atomic_load_explicit(&atom_0_r1_0_eq, memory_order_acquire);
  int v16 = atomic_load_explicit(&atom_1_r2_0_eq, memory_order_acquire);
  int v17 = atomic_load_explicit(&atom_2_r3_0_eq, memory_order_acquire);
  int v18 = atomic_load_explicit(&atom_3_r4_0_eq, memory_order_acquire);
  int v19 = atomic_load_explicit(&atom_4_r5_0_eq, memory_order_acquire);
  int v20 = atomic_load_explicit(&atom_5_r6_0_eq, memory_order_acquire);
  int v21 = atomic_load_explicit(&atom_6_r0_0_eq, memory_order_acquire);
  int v22_conj = v20 & v21;
  int v23_conj = v19 & v22_conj;
  int v24_conj = v18 & v23_conj;
  int v25_conj = v17 & v24_conj;
  int v26_conj = v16 & v25_conj;
  int v27_conj = v15 & v26_conj;
  if (v27_conj == 1) assert(0);
  return 0;
}
