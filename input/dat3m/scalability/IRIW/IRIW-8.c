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
atomic_int vars[4]; 
atomic_int atom_4_r0_1_eq; 
atomic_int atom_4_r1_0_eq; 
atomic_int atom_4_r2_0_eq; 
atomic_int atom_4_r3_0_eq; 
atomic_int atom_5_r0_0_eq; 
atomic_int atom_5_r1_1_eq; 
atomic_int atom_5_r2_0_eq; 
atomic_int atom_5_r3_0_eq; 
atomic_int atom_6_r0_0_eq; 
atomic_int atom_6_r1_0_eq; 
atomic_int atom_6_r2_1_eq; 
atomic_int atom_6_r3_0_eq; 
atomic_int atom_7_r0_0_eq; 
atomic_int atom_7_r1_0_eq; 
atomic_int atom_7_r2_0_eq; 
atomic_int atom_7_r3_1_eq; 



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
  atomic_store_explicit(&vars[3], 1, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v8_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
  int v64 = (v2_r0==1);
  atomic_store_explicit(&atom_4_r0_1_eq, v64, memory_order_release);
  int v65 = (v4_r1==0);
  atomic_store_explicit(&atom_4_r1_0_eq, v65, memory_order_release);
  int v66 = (v6_r2==0);
  atomic_store_explicit(&atom_4_r2_0_eq, v66, memory_order_release);
  int v67 = (v8_r3==0);
  atomic_store_explicit(&atom_4_r3_0_eq, v67, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v10_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v12_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v14_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
  int v68 = (v12_r0==0);
  atomic_store_explicit(&atom_5_r0_0_eq, v68, memory_order_release);
  int v69 = (v10_r1==1);
  atomic_store_explicit(&atom_5_r1_1_eq, v69, memory_order_release);
  int v70 = (v14_r2==0);
  atomic_store_explicit(&atom_5_r2_0_eq, v70, memory_order_release);
  int v71 = (v16_r3==0);
  atomic_store_explicit(&atom_5_r3_0_eq, v71, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v18_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v20_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
  int v72 = (v22_r0==0);
  atomic_store_explicit(&atom_6_r0_0_eq, v72, memory_order_release);
  int v73 = (v20_r1==0);
  atomic_store_explicit(&atom_6_r1_0_eq, v73, memory_order_release);
  int v74 = (v18_r2==1);
  atomic_store_explicit(&atom_6_r2_1_eq, v74, memory_order_release);
  int v75 = (v24_r3==0);
  atomic_store_explicit(&atom_6_r3_0_eq, v75, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v26_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v76 = (v32_r0==0);
  atomic_store_explicit(&atom_7_r0_0_eq, v76, memory_order_release);
  int v77 = (v28_r1==0);
  atomic_store_explicit(&atom_7_r1_0_eq, v77, memory_order_release);
  int v78 = (v30_r2==0);
  atomic_store_explicit(&atom_7_r2_0_eq, v78, memory_order_release);
  int v79 = (v26_r3==1);
  atomic_store_explicit(&atom_7_r3_1_eq, v79, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 
  pthread_t thr6; 
  pthread_t thr7; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);
  pthread_create(&thr7, NULL , t7, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);
  pthread_join(thr7,NULL);

  int v33 = atomic_load_explicit(&atom_4_r0_1_eq, memory_order_acquire);
  int v34 = atomic_load_explicit(&atom_4_r1_0_eq, memory_order_acquire);
  int v35 = atomic_load_explicit(&atom_4_r2_0_eq, memory_order_acquire);
  int v36 = atomic_load_explicit(&atom_4_r3_0_eq, memory_order_acquire);
  int v37 = atomic_load_explicit(&atom_5_r0_0_eq, memory_order_acquire);
  int v38 = atomic_load_explicit(&atom_5_r1_1_eq, memory_order_acquire);
  int v39 = atomic_load_explicit(&atom_5_r2_0_eq, memory_order_acquire);
  int v40 = atomic_load_explicit(&atom_5_r3_0_eq, memory_order_acquire);
  int v41 = atomic_load_explicit(&atom_6_r0_0_eq, memory_order_acquire);
  int v42 = atomic_load_explicit(&atom_6_r1_0_eq, memory_order_acquire);
  int v43 = atomic_load_explicit(&atom_6_r2_1_eq, memory_order_acquire);
  int v44 = atomic_load_explicit(&atom_6_r3_0_eq, memory_order_acquire);
  int v45 = atomic_load_explicit(&atom_7_r0_0_eq, memory_order_acquire);
  int v46 = atomic_load_explicit(&atom_7_r1_0_eq, memory_order_acquire);
  int v47 = atomic_load_explicit(&atom_7_r2_0_eq, memory_order_acquire);
  int v48 = atomic_load_explicit(&atom_7_r3_1_eq, memory_order_acquire);
  int v49_conj = v47 & v48;
  int v50_conj = v46 & v49_conj;
  int v51_conj = v45 & v50_conj;
  int v52_conj = v44 & v51_conj;
  int v53_conj = v43 & v52_conj;
  int v54_conj = v42 & v53_conj;
  int v55_conj = v41 & v54_conj;
  int v56_conj = v40 & v55_conj;
  int v57_conj = v39 & v56_conj;
  int v58_conj = v38 & v57_conj;
  int v59_conj = v37 & v58_conj;
  int v60_conj = v36 & v59_conj;
  int v61_conj = v35 & v60_conj;
  int v62_conj = v34 & v61_conj;
  int v63_conj = v33 & v62_conj;
  if (v63_conj == 1) assert(0);
  return 0;
}
