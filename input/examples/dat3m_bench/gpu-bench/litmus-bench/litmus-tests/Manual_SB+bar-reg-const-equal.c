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
atomic_int atom_0_r0_1_eq; 
atomic_int atom_1_r1_1_eq; 

pthread_barrier_t bar_cta_sync_r2_dvwg_0_0; 
pthread_barrier_t bar_cta_sync_0_dvwg_0_0; 


void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
__VERIFIER_memory_scope_work_group();
  int v1= pthread_barrier_wait(&bar_cta_sync_r2_dvwg_0_0);
  if (v1!= 0 && v1 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v3_r0 = atomic_load_explicit(&vars[1], memory_order_relaxed);
  int v10 = (v3_r0==1);
  atomic_store_explicit(&atom_0_r0_1_eq, v10, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[1], 1, memory_order_relaxed);
__VERIFIER_memory_scope_work_group();
  int v4= pthread_barrier_wait(&bar_cta_sync_0_dvwg_0_0);
  if (v4!= 0 && v4 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v6_r1 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v11 = (v6_r1==1);
  atomic_store_explicit(&atom_1_r1_1_eq, v11, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  pthread_t thr0; 
  pthread_t thr1; 

if (pthread_barrier_init(&bar_cta_sync_r2_dvwg_0_0, NULL, 1)) {
            printf("Could not create a barrier\n");
            return -1;
        }
if (pthread_barrier_init(&bar_cta_sync_0_dvwg_0_0, NULL, 1)) {
            printf("Could not create a barrier\n");
            return -1;
        }

  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);

  int v7 = atomic_load_explicit(&atom_0_r0_1_eq, memory_order_acquire);
  int v8 = atomic_load_explicit(&atom_1_r1_1_eq, memory_order_acquire);
  int v9_disj = v7 | v8;
  if (v9_disj == 0) assert(0);
  return 0;
}
