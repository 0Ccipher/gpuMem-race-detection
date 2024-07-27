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
void __VERIFIER_weak_access()           ;
void __VERIFIER_groupsize(int localWorkSize)    ;
atomic_int vars[2]; 
atomic_int atom_1_r2_1_ne; 
atomic_int atom_1_r1_0_eq; 

pthread_barrier_t bar_cta_sync_1_dvwg_0_0; 
pthread_barrier_t bar_cta_sync_1_dvwg_1_0; 
pthread_barrier_t bar_cta_sync_2_dvwg_1_0; 


void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  atomic_store_explicit(&vars[0], 1, memory_order_relaxed);
lbl_LC00:;
__VERIFIER_memory_scope_device();
  int v2_r2 = atomic_load_explicit(&vars[1], memory_order_relaxed);
  if (v2_r2!=0)  goto lbl_LC01;
label_2:;
  goto lbl_LC00;
lbl_LC01:;
__VERIFIER_memory_scope_work_group();
  int v3= pthread_barrier_wait(&bar_cta_sync_1_dvwg_0_0);
  if (v3!= 0 && v3 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 0, memory_order_relaxed);
  return NULL;
}




void *t1(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_work_group();
  int v4= pthread_barrier_wait(&bar_cta_sync_1_dvwg_1_0);
  if (v4!= 0 && v4 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_relaxed);
lbl_LC10:;
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[1], memory_order_relaxed);
  if (v6_r2!=1)  goto lbl_LC11;
label_4:;
  goto lbl_LC10;
lbl_LC11:;
__VERIFIER_memory_scope_work_group();
  int v7= pthread_barrier_wait(&bar_cta_sync_2_dvwg_1_0);
  if (v7!= 0 && v7 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_system();
__VERIFIER_weak_access();
  int v9_r1 = atomic_load_explicit(&vars[0], memory_order_relaxed);
  int v15 = (v6_r2!=1);
  atomic_store_explicit(&atom_1_r2_1_ne, v15, memory_order_release);
  int v16 = (v9_r1==0);
  atomic_store_explicit(&atom_1_r1_0_eq, v16, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_5:;
  __VERIFIER_thread_local_id(1);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_work_group();
  int v10= pthread_barrier_wait(&bar_cta_sync_1_dvwg_1_0);
  if (v10!= 0 && v10 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
__VERIFIER_memory_scope_work_group();
  int v11= pthread_barrier_wait(&bar_cta_sync_2_dvwg_1_0);
  if (v11!= 0 && v11 != PTHREAD_BARRIER_SERIAL_THREAD) {
    printf("Could not wait on barrier\n");
    pthread_exit(NULL);
  }
  return NULL;
}




int main(int argc, char **argv){
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 

if (pthread_barrier_init(&bar_cta_sync_1_dvwg_0_0, NULL, 1)) {
            printf("Could not create a barrier\n");
            return -1;
        }
if (pthread_barrier_init(&bar_cta_sync_1_dvwg_1_0, NULL, 2)) {
            printf("Could not create a barrier\n");
            return -1;
        }
if (pthread_barrier_init(&bar_cta_sync_2_dvwg_1_0, NULL, 2)) {
            printf("Could not create a barrier\n");
            return -1;
        }

  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);

  int v12 = atomic_load_explicit(&atom_1_r2_1_ne, memory_order_acquire);
  int v13 = atomic_load_explicit(&atom_1_r1_0_eq, memory_order_acquire);
  int v14_conj = v12 & v13;
  if (v14_conj == 1) assert(0);
  return 0;
}
