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
atomic_int atom_0_r0_1_eq; 

pthread_barrier_t bar_cta_sync_0_dvwg_0_0; 
pthread_barrier_t bar_cta_sync_1_dvwg_0_0; 


void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_relaxed);
__VERIFIER_memory_scope_work_group();
  int v3= pthread_barrier_wait(&bar_cta_sync_0_dvwg_0_0);
  if (v3!= 0 && v3 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_work_group();
  int v4= pthread_barrier_wait(&bar_cta_sync_1_dvwg_0_0);
  if (v4!= 0 && v4 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
  int v8 = (v2_r0==1);
  atomic_store_explicit(&atom_0_r0_1_eq, v8, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_work_group();
  int v5= pthread_barrier_wait(&bar_cta_sync_1_dvwg_0_0);
  if (v5!= 0 && v5 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
__VERIFIER_memory_scope_work_group();
  int v6= pthread_barrier_wait(&bar_cta_sync_0_dvwg_0_0);
  if (v6!= 0 && v6 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  pthread_t thr0; 
  pthread_t thr1; 

if (pthread_barrier_init(&bar_cta_sync_0_dvwg_0_0, NULL, 2)) {
            printf("Could not create a barrier\n");
            return -1;
        }
if (pthread_barrier_init(&bar_cta_sync_1_dvwg_0_0, NULL, 2)) {
            printf("Could not create a barrier\n");
            return -1;
        }

  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v7 = atomic_load_explicit(&atom_0_r0_1_eq, memory_order_acquire);
  if (v7 == 1) assert(0);
  return 0;
}
