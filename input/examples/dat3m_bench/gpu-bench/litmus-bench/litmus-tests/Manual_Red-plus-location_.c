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
atomic_int vars[1]; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  int v1 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acq_rel);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
  int v2 = atomic_fetch_add_explicit(&vars[0], 1, memory_order_acq_rel);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  pthread_t thr0; 
  pthread_t thr1; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v3 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v4 = (v3==2);
  if (v4 == 0) assert(0);
  return 0;
}
