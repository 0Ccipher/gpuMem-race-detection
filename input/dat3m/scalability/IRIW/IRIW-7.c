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
atomic_int atom_3_r0_1_eq; 
atomic_int atom_3_r1_0_eq; 
atomic_int atom_3_r2_0_eq; 
atomic_int atom_4_r0_0_eq; 
atomic_int atom_4_r1_1_eq; 
atomic_int atom_4_r2_0_eq; 
atomic_int atom_5_r0_0_eq; 
atomic_int atom_5_r1_0_eq; 
atomic_int atom_5_r2_1_eq; 
atomic_int atom_6_r0_0_eq; 
atomic_int atom_6_r1_0_eq; 
atomic_int atom_6_r2_0_eq; 



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
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v46 = (v2_r0==1);
  atomic_store_explicit(&atom_3_r0_1_eq, v46, memory_order_release);
  int v47 = (v4_r1==0);
  atomic_store_explicit(&atom_3_r1_0_eq, v47, memory_order_release);
  int v48 = (v6_r2==0);
  atomic_store_explicit(&atom_3_r2_0_eq, v48, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v8_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v10_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v12_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v49 = (v10_r0==0);
  atomic_store_explicit(&atom_4_r0_0_eq, v49, memory_order_release);
  int v50 = (v8_r1==1);
  atomic_store_explicit(&atom_4_r1_1_eq, v50, memory_order_release);
  int v51 = (v12_r2==0);
  atomic_store_explicit(&atom_4_r2_0_eq, v51, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v14_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v52 = (v18_r0==0);
  atomic_store_explicit(&atom_5_r0_0_eq, v52, memory_order_release);
  int v53 = (v16_r1==0);
  atomic_store_explicit(&atom_5_r1_0_eq, v53, memory_order_release);
  int v54 = (v14_r2==1);
  atomic_store_explicit(&atom_5_r2_1_eq, v54, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v20_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
  int v55 = (0==0);
  atomic_store_explicit(&atom_6_r0_0_eq, v55, memory_order_release);
  int v56 = (v20_r1==0);
  atomic_store_explicit(&atom_6_r1_0_eq, v56, memory_order_release);
  int v57 = (v22_r2==0);
  atomic_store_explicit(&atom_6_r2_0_eq, v57, memory_order_release);
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

  int v23 = atomic_load_explicit(&atom_3_r0_1_eq, memory_order_acquire);
  int v24 = atomic_load_explicit(&atom_3_r1_0_eq, memory_order_acquire);
  int v25 = atomic_load_explicit(&atom_3_r2_0_eq, memory_order_acquire);
  int v26 = atomic_load_explicit(&atom_4_r0_0_eq, memory_order_acquire);
  int v27 = atomic_load_explicit(&atom_4_r1_1_eq, memory_order_acquire);
  int v28 = atomic_load_explicit(&atom_4_r2_0_eq, memory_order_acquire);
  int v29 = atomic_load_explicit(&atom_5_r0_0_eq, memory_order_acquire);
  int v30 = atomic_load_explicit(&atom_5_r1_0_eq, memory_order_acquire);
  int v31 = atomic_load_explicit(&atom_5_r2_1_eq, memory_order_acquire);
  int v32 = atomic_load_explicit(&atom_6_r0_0_eq, memory_order_acquire);
  int v33 = atomic_load_explicit(&atom_6_r1_0_eq, memory_order_acquire);
  int v34 = atomic_load_explicit(&atom_6_r2_0_eq, memory_order_acquire);
  int v35_conj = v33 & v34;
  int v36_conj = v32 & v35_conj;
  int v37_conj = v31 & v36_conj;
  int v38_conj = v30 & v37_conj;
  int v39_conj = v29 & v38_conj;
  int v40_conj = v28 & v39_conj;
  int v41_conj = v27 & v40_conj;
  int v42_conj = v26 & v41_conj;
  int v43_conj = v25 & v42_conj;
  int v44_conj = v24 & v43_conj;
  int v45_conj = v23 & v44_conj;
  if (v45_conj == 1) assert(0);
  return 0;
}
