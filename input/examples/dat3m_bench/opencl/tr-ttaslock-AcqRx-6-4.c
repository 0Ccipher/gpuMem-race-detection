#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define NBLOCKS 6
#define NTHREADS 4

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS NBLOCKS

struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void     __VERIFIER_memory_scope_system()       ;
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

atomic_int l=0;
int x=0;
int A[]={0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0,0,0,0,0,0,0};

// static void lock() {
// #ifdef DV2WG
//        __VERIFIER_memory_scope_work_group();
// #else
//       __VERIFIER_memory_scope_device();
// #endif
//     while(1) {
//         while (atomic_load_explicit(&l, memory_order_relaxed) != 0) {}
//         if(!atomic_exchange_explicit(&l, 1, mo_lock)) {
//             return;
//         }
//     }
// }

// static void unlock() {
// #ifdef DV2WG
//        __VERIFIER_memory_scope_work_group();
// #else
//       __VERIFIER_memory_scope_device();
// #endif
//     atomic_store_explicit(&l, 0, mo_unlock);
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
    while(1) {
        while (atomic_load_explicit(&l, memory_order_relaxed) != 0) {}
        if(!atomic_exchange_explicit(&l, 1, mo_lock)) {
            // return;
            goto CS;
        }
    }
    CS:
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
    atomic_store_explicit(&l, 0, mo_unlock);

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

void *kernel02(void *arg) {
    mutex_test(2, 0, 2, 0);
    return NULL;
}

void *kernel03(void *arg) {
    mutex_test(3, 0, 3, 0);
    return NULL;
}

void *kernel10(void *arg) {
    mutex_test(4, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    mutex_test(5, 1, 1, 0);
    return NULL;
}

void *kernel12(void *arg) {
    mutex_test(6, 1, 2, 0);
    return NULL;
}
void *kernel13(void *arg) {
    mutex_test(7, 1, 3, 0);
    return NULL;
}
void *kernel20(void *arg) {
    mutex_test(8, 2, 0, 0);
    return NULL;
}
void *kernel21(void *arg) {
    mutex_test(9, 2, 1, 0);
    return NULL;
}
void *kernel22(void *arg) {
    mutex_test(10, 2, 2, 0);
    return NULL;
}
void *kernel23(void *arg) {
    mutex_test(11, 2, 3, 0);
    return NULL;
}
void *kernel30(void *arg) {
    mutex_test(12, 3, 0, 0);
    return NULL;
}
void *kernel31(void *arg) {
    mutex_test(13, 3, 1, 0);
    return NULL;
}
void *kernel32(void *arg) {
    mutex_test(14, 3, 2, 0);
    return NULL;
}
void *kernel33(void *arg) {
    mutex_test(15, 3, 3, 0);
    return NULL;
}
void *kernel40(void *arg) {
    mutex_test(16, 4, 0, 0);
    return NULL;
}
void *kernel41(void *arg) {
    mutex_test(17, 4, 1, 0);
    return NULL;
}
void *kernel42(void *arg) {
    mutex_test(18, 4, 2, 0);
    return NULL;
}
void *kernel43(void *arg) {
    mutex_test(19, 4, 3, 0);
    return NULL;
}

void *kernel50(void *arg) {
    mutex_test(20, 5, 0, 0);
    return NULL;
}
void *kernel51(void *arg) {
    mutex_test(21, 5, 1, 0);
    return NULL;
}
void *kernel52(void *arg) {
    mutex_test(22, 5, 2, 0);
    return NULL;
}
void *kernel53(void *arg) {
    mutex_test(23, 5, 3, 0);
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
    pthread_create(&workItems[2], NULL, kernel02, NULL);
    pthread_create(&workItems[3], NULL, kernel03, NULL);

    pthread_create(&workItems[4], NULL, kernel10, NULL);
    pthread_create(&workItems[5], NULL, kernel11, NULL);
    pthread_create(&workItems[6], NULL, kernel12, NULL);
    pthread_create(&workItems[7], NULL, kernel13, NULL);

    pthread_create(&workItems[8], NULL, kernel20,  NULL);
    pthread_create(&workItems[9], NULL, kernel21,  NULL);
    pthread_create(&workItems[10], NULL, kernel22, NULL);
    pthread_create(&workItems[11], NULL, kernel23, NULL);

    pthread_create(&workItems[12], NULL, kernel30, NULL);
    pthread_create(&workItems[13], NULL, kernel31, NULL);
    pthread_create(&workItems[14], NULL, kernel32, NULL);
    pthread_create(&workItems[15], NULL, kernel33, NULL);

    pthread_create(&workItems[16], NULL, kernel40,  NULL);
    pthread_create(&workItems[17], NULL, kernel41,  NULL);
    pthread_create(&workItems[18], NULL, kernel42, NULL);
    pthread_create(&workItems[19], NULL, kernel43, NULL);

    pthread_create(&workItems[20], NULL, kernel50,  NULL);
    pthread_create(&workItems[21], NULL, kernel51,  NULL);
    pthread_create(&workItems[22], NULL, kernel52, NULL);
    pthread_create(&workItems[23], NULL, kernel53, NULL);

    


    // //joinall
    // for(int i=0 ; i < 20 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

