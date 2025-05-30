#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define NBLOCKS 4
#define NTHREADS 2

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS NBLOCKS

struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_memory_scope_system()           ;
void __VERIFIER_thread__id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_thread_global_id(int global_id)     ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_groupsize(int localWorkSize)    ;

struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

#define ACQ2RX

#ifdef ACQ2RX
#define mo_lock memory_order_relaxed
#else
#define mo_lock memory_order_acquire
#endif
#ifdef REL2RX
#define mo_unlock memory_order_relaxed
#else
#define mo_unlock memory_order_release
#endif

#ifdef DV2WG
#define scope memory_scope_work_group
#else
#define scope memory_scope_device
#endif

atomic_int owner=0;
atomic_int next=0;
int x=0;
int A[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//  void lock( ) {
// #ifdef DV2WG
//        __VERIFIER_memory_scope_work_group();
// #else
//       __VERIFIER_memory_scope_device();
// #endif
//     int ticket = atomic_fetch_add_explicit(&next, 1, memory_order_relaxed);
//     while (atomic_load_explicit(&owner, mo_lock) != ticket) {}
// }

//  void unlock() {
// #ifdef DV2WG
//        __VERIFIER_memory_scope_work_group();
// #else
//       __VERIFIER_memory_scope_device();
// #endif
//     int current = atomic_load_explicit(&owner, memory_order_relaxed);
//     atomic_store_explicit(&owner, current + 1, mo_unlock);
// }
void mutex_test(int global_id, int group_id, int local_id, int kernel_id) {
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);
    int a;
    // lock();
#ifdef DV2WG
       __VERIFIER_memory_scope_work_group();
#else
      __VERIFIER_memory_scope_device();
#endif
    int ticket = atomic_fetch_add_explicit(&next, 1, memory_order_relaxed);
    while (atomic_load_explicit(&owner, mo_lock) != ticket) {}
    __VERIFIER_memory_scope_system();
    a = x;
    __VERIFIER_memory_scope_system();
    x = a + 1;
    // unlock();
#ifdef DV2WG
       __VERIFIER_memory_scope_work_group();
#else
      __VERIFIER_memory_scope_device();
#endif
    int current = atomic_load_explicit(&owner, memory_order_relaxed);
    atomic_store_explicit(&owner, current + 1, mo_unlock);
    __VERIFIER_memory_scope_system();
    A[global_id] = a;
} 

void *kernel00(void *arg) {
    mutex_test(0, 0, 0, 0);
    return NULL;
}

void *kernel01(void *arg) {
    mutex_test(1, 0, 1, 0);
    return NULL;
}

void *kernel10(void *arg) {
    mutex_test(2, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    mutex_test(3, 1, 1, 0);
    return NULL;
}
void *kernel20(void *arg) {
    mutex_test(4, 2, 0, 0);
    return NULL;
}

void *kernel21(void *arg) {
    mutex_test(5, 2, 1, 0);
    return NULL;
}

void *kernel30(void *arg) {
    mutex_test(6, 3, 0, 0);
    return NULL;
}

void *kernel31(void *arg) {
    mutex_test(7, 3, 1, 0);
    return NULL;
}
int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    pthread_t workItems[totalThreads];
    
    pthread_create(&workItems[0], NULL, kernel00,  NULL);
    pthread_create(&workItems[1], NULL, kernel01,  NULL);
    pthread_create(&workItems[2], NULL, kernel10, NULL);
    pthread_create(&workItems[3], NULL, kernel11, NULL);
    pthread_create(&workItems[4], NULL, kernel20, NULL);
    pthread_create(&workItems[5], NULL, kernel21, NULL);
    pthread_create(&workItems[6], NULL, kernel30, NULL);
    pthread_create(&workItems[7], NULL, kernel31, NULL);


    //joinall
    // for(int i=0 ; i < 8 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

