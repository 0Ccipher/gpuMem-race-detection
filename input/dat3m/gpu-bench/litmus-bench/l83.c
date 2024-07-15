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
void __VERIFIER_groupsize(int localWorkSize)    ;
atomic_int vars[1]; 


void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
lbl_LC00:;
__VERIFIER_memory_scope_device();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  if (v2_r0!=0)  goto lbl_LC01;
label_2:;
  goto lbl_LC02;
lbl_LC01:;
__VERIFIER_memory_scope_device();
  int v3_r1 = atomic_exchange_explicit(&vars[0], 1, memory_order_relaxed);
  if (v3_r1!=1)  goto lbl_LC02;
label_3:;
  goto lbl_LC01;
lbl_LC02:;
  return NULL;
}




void *t1(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
lbl_LC10:;
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
lbl_LC11:;
  return NULL;
}




void *t2(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
lbl_LC20:;
__VERIFIER_memory_scope_device();
  int v4_r2 = atomic_exchange_explicit(&vars[0], 0, memory_order_relaxed);
  if (v4_r2!=0)  goto lbl_LC21;
label_6:;
  goto lbl_LC20;
lbl_LC21:;
  return NULL;
}




int main(int argc, char **argv){
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 

  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);

  // int v5 = (0 == 0);
  // if (v5 == 1) assert(0);
  return 0;
}
