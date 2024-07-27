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
atomic_int atom_8_r0_0_eq; 
atomic_int atom_8_r1_0_eq; 
atomic_int atom_8_r2_0_eq; 
atomic_int atom_8_r3_0_eq; 



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
  int v78 = (v2_r0==1);
  atomic_store_explicit(&atom_4_r0_1_eq, v78, memory_order_release);
  int v79 = (v4_r1==0);
  atomic_store_explicit(&atom_4_r1_0_eq, v79, memory_order_release);
  int v80 = (v6_r2==0);
  atomic_store_explicit(&atom_4_r2_0_eq, v80, memory_order_release);
  int v81 = (v8_r3==0);
  atomic_store_explicit(&atom_4_r3_0_eq, v81, memory_order_release);
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
  int v82 = (v12_r0==0);
  atomic_store_explicit(&atom_5_r0_0_eq, v82, memory_order_release);
  int v83 = (v10_r1==1);
  atomic_store_explicit(&atom_5_r1_1_eq, v83, memory_order_release);
  int v84 = (v14_r2==0);
  atomic_store_explicit(&atom_5_r2_0_eq, v84, memory_order_release);
  int v85 = (v16_r3==0);
  atomic_store_explicit(&atom_5_r3_0_eq, v85, memory_order_release);
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
  int v86 = (v22_r0==0);
  atomic_store_explicit(&atom_6_r0_0_eq, v86, memory_order_release);
  int v87 = (v20_r1==0);
  atomic_store_explicit(&atom_6_r1_0_eq, v87, memory_order_release);
  int v88 = (v18_r2==1);
  atomic_store_explicit(&atom_6_r2_1_eq, v88, memory_order_release);
  int v89 = (v24_r3==0);
  atomic_store_explicit(&atom_6_r3_0_eq, v89, memory_order_release);
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
  int v90 = (v32_r0==0);
  atomic_store_explicit(&atom_7_r0_0_eq, v90, memory_order_release);
  int v91 = (v28_r1==0);
  atomic_store_explicit(&atom_7_r1_0_eq, v91, memory_order_release);
  int v92 = (v30_r2==0);
  atomic_store_explicit(&atom_7_r2_0_eq, v92, memory_order_release);
  int v93 = (v26_r3==1);
  atomic_store_explicit(&atom_7_r3_1_eq, v93, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v34_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
  int v94 = (0==0);
  atomic_store_explicit(&atom_8_r0_0_eq, v94, memory_order_release);
  int v95 = (v34_r1==0);
  atomic_store_explicit(&atom_8_r1_0_eq, v95, memory_order_release);
  int v96 = (v36_r2==0);
  atomic_store_explicit(&atom_8_r2_0_eq, v96, memory_order_release);
  int v97 = (v38_r3==0);
  atomic_store_explicit(&atom_8_r3_0_eq, v97, memory_order_release);
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
  pthread_t thr8; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);
  pthread_create(&thr7, NULL , t7, NULL);
  pthread_create(&thr8, NULL , t8, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);
  pthread_join(thr7,NULL);
  pthread_join(thr8,NULL);

  int v39 = atomic_load_explicit(&atom_4_r0_1_eq, memory_order_acquire);
  int v40 = atomic_load_explicit(&atom_4_r1_0_eq, memory_order_acquire);
  int v41 = atomic_load_explicit(&atom_4_r2_0_eq, memory_order_acquire);
  int v42 = atomic_load_explicit(&atom_4_r3_0_eq, memory_order_acquire);
  int v43 = atomic_load_explicit(&atom_5_r0_0_eq, memory_order_acquire);
  int v44 = atomic_load_explicit(&atom_5_r1_1_eq, memory_order_acquire);
  int v45 = atomic_load_explicit(&atom_5_r2_0_eq, memory_order_acquire);
  int v46 = atomic_load_explicit(&atom_5_r3_0_eq, memory_order_acquire);
  int v47 = atomic_load_explicit(&atom_6_r0_0_eq, memory_order_acquire);
  int v48 = atomic_load_explicit(&atom_6_r1_0_eq, memory_order_acquire);
  int v49 = atomic_load_explicit(&atom_6_r2_1_eq, memory_order_acquire);
  int v50 = atomic_load_explicit(&atom_6_r3_0_eq, memory_order_acquire);
  int v51 = atomic_load_explicit(&atom_7_r0_0_eq, memory_order_acquire);
  int v52 = atomic_load_explicit(&atom_7_r1_0_eq, memory_order_acquire);
  int v53 = atomic_load_explicit(&atom_7_r2_0_eq, memory_order_acquire);
  int v54 = atomic_load_explicit(&atom_7_r3_1_eq, memory_order_acquire);
  int v55 = atomic_load_explicit(&atom_8_r0_0_eq, memory_order_acquire);
  int v56 = atomic_load_explicit(&atom_8_r1_0_eq, memory_order_acquire);
  int v57 = atomic_load_explicit(&atom_8_r2_0_eq, memory_order_acquire);
  int v58 = atomic_load_explicit(&atom_8_r3_0_eq, memory_order_acquire);
  int v59_conj = v57 & v58;
  int v60_conj = v56 & v59_conj;
  int v61_conj = v55 & v60_conj;
  int v62_conj = v54 & v61_conj;
  int v63_conj = v53 & v62_conj;
  int v64_conj = v52 & v63_conj;
  int v65_conj = v51 & v64_conj;
  int v66_conj = v50 & v65_conj;
  int v67_conj = v49 & v66_conj;
  int v68_conj = v48 & v67_conj;
  int v69_conj = v47 & v68_conj;
  int v70_conj = v46 & v69_conj;
  int v71_conj = v45 & v70_conj;
  int v72_conj = v44 & v71_conj;
  int v73_conj = v43 & v72_conj;
  int v74_conj = v42 & v73_conj;
  int v75_conj = v41 & v74_conj;
  int v76_conj = v40 & v75_conj;
  int v77_conj = v39 & v76_conj;
  if (v77_conj == 1) assert(0);
  return 0;
}
