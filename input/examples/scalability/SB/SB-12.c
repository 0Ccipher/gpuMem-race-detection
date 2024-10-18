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
atomic_int vars[12]; 
atomic_int atom_0_r1_0_eq; 
atomic_int atom_1_r2_0_eq; 
atomic_int atom_2_r3_0_eq; 
atomic_int atom_3_r4_0_eq; 
atomic_int atom_4_r5_0_eq; 
atomic_int atom_5_r6_0_eq; 
atomic_int atom_6_r7_0_eq; 
atomic_int atom_7_r8_0_eq; 
atomic_int atom_8_r9_0_eq; 
atomic_int atom_9_r10_0_eq; 
atomic_int atom_10_r11_0_eq; 
atomic_int atom_11_r0_0_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v2_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
  int v48 = (v2_r1==0);
  atomic_store_explicit(&atom_0_r1_0_eq, v48, memory_order_release);
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
  int v49 = (v4_r2==0);
  atomic_store_explicit(&atom_1_r2_0_eq, v49, memory_order_release);
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
  int v50 = (v6_r3==0);
  atomic_store_explicit(&atom_2_r3_0_eq, v50, memory_order_release);
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
  int v51 = (v8_r4==0);
  atomic_store_explicit(&atom_3_r4_0_eq, v51, memory_order_release);
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
  int v52 = (v10_r5==0);
  atomic_store_explicit(&atom_4_r5_0_eq, v52, memory_order_release);
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
  int v53 = (v12_r6==0);
  atomic_store_explicit(&atom_5_r6_0_eq, v53, memory_order_release);
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
  int v14_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v54 = (v14_r7==0);
  atomic_store_explicit(&atom_6_r7_0_eq, v54, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[7], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v16_r8 = atomic_load_explicit(&vars[8], memory_order_acquire);
  int v55 = (v16_r8==0);
  atomic_store_explicit(&atom_7_r8_0_eq, v55, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[8], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v18_r9 = atomic_load_explicit(&vars[9], memory_order_acquire);
  int v56 = (v18_r9==0);
  atomic_store_explicit(&atom_8_r9_0_eq, v56, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[9], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v20_r10 = atomic_load_explicit(&vars[10], memory_order_acquire);
  int v57 = (v20_r10==0);
  atomic_store_explicit(&atom_9_r10_0_eq, v57, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[10], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v22_r11 = atomic_load_explicit(&vars[11], memory_order_acquire);
  int v58 = (v22_r11==0);
  atomic_store_explicit(&atom_10_r11_0_eq, v58, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[11], 1, memory_order_release);
__VERIFIER_memory_scope_device();
  int v24_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v59 = (v24_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v59, memory_order_release);
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
  atomic_init(&vars[7], 0);
  atomic_init(&vars[8], 0);
  atomic_init(&vars[9], 0);
  atomic_init(&vars[10], 0);
  atomic_init(&vars[11], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 
  pthread_t thr6; 
  pthread_t thr7; 
  pthread_t thr8; 
  pthread_t thr9; 
  pthread_t thr10; 
  pthread_t thr11; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);
  pthread_create(&thr7, NULL , t7, NULL);
  pthread_create(&thr8, NULL , t8, NULL);
  pthread_create(&thr9, NULL , t9, NULL);
  pthread_create(&thr10, NULL , t10, NULL);
  pthread_create(&thr11, NULL , t11, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);
  pthread_join(thr7,NULL);
  pthread_join(thr8,NULL);
  pthread_join(thr9,NULL);
  pthread_join(thr10,NULL);
  pthread_join(thr11,NULL);

  int v25 = atomic_load_explicit(&atom_0_r1_0_eq, memory_order_acquire);
  int v26 = atomic_load_explicit(&atom_1_r2_0_eq, memory_order_acquire);
  int v27 = atomic_load_explicit(&atom_2_r3_0_eq, memory_order_acquire);
  int v28 = atomic_load_explicit(&atom_3_r4_0_eq, memory_order_acquire);
  int v29 = atomic_load_explicit(&atom_4_r5_0_eq, memory_order_acquire);
  int v30 = atomic_load_explicit(&atom_5_r6_0_eq, memory_order_acquire);
  int v31 = atomic_load_explicit(&atom_6_r7_0_eq, memory_order_acquire);
  int v32 = atomic_load_explicit(&atom_7_r8_0_eq, memory_order_acquire);
  int v33 = atomic_load_explicit(&atom_8_r9_0_eq, memory_order_acquire);
  int v34 = atomic_load_explicit(&atom_9_r10_0_eq, memory_order_acquire);
  int v35 = atomic_load_explicit(&atom_10_r11_0_eq, memory_order_acquire);
  int v36 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v37_conj = v35 & v36;
  int v38_conj = v34 & v37_conj;
  int v39_conj = v33 & v38_conj;
  int v40_conj = v32 & v39_conj;
  int v41_conj = v31 & v40_conj;
  int v42_conj = v30 & v41_conj;
  int v43_conj = v29 & v42_conj;
  int v44_conj = v28 & v43_conj;
  int v45_conj = v27 & v44_conj;
  int v46_conj = v26 & v45_conj;
  int v47_conj = v25 & v46_conj;
  if (v47_conj == 1) assert(0);
  return 0;
}
