/*Inspired from : https://github.com/csl-iisc/ScoR/blob/master/microbenchmarks/src/race_interblock_blkfence_raw.cu*/
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define NBLOCKS 3
#define NTHREADS 2

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GROUPS NBLOCKS
#define GLOBAL_WORK_OFFSET 0
struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_groupsize(int localWorkSize)    ;

atomic_int data[1];
atomic_int flag = 0;


struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

pthread_barrier_t barr[GROUPS];
pthread_barrier_t barrd;



void *kernel(int global_id, int group_id, int local_id, int kernel_id) {
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);
      if(group_id == 0){
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&data[0], 1,memory_order_seq_cst);
            __VERIFIER_memory_scope_work_group();
            atomic_thread_fence(memory_order_seq_cst);
            __VERIFIER_memory_scope_device();
            atomic_exchange_explicit(&flag, 1,memory_order_seq_cst);
      }    
      else{
            // while(atomicExch(&flag, 0) == 0) {}
            __VERIFIER_memory_scope_device();
            if(atomic_exchange_explicit(&flag, 0,memory_order_seq_cst) == 1){
                  __VERIFIER_memory_scope_device();
                   int a = atomic_load_explicit(&data[0],memory_order_seq_cst);
                  __VERIFIER_memory_scope_device();
                  atomic_exchange_explicit(&flag, a,memory_order_seq_cst);
            }
      }
    
    return NULL;
}

void *kernel00(void *arg) {
    kernel(0, 0, 0, 0);
    return NULL;
}

void *kernel01(void *arg) {
    kernel(1, 0, 1, 0);
    return NULL;
}
void *kernel10(void *arg) {
    kernel(2, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    kernel(3, 1, 1, 0);
    return NULL;
}
void *kernel20(void *arg) {
    kernel(4, 2, 0, 0);
    return NULL;
}

void *kernel21(void *arg) {
    kernel(5, 2, 1, 0);
    return NULL;
}

void *kernel30(void *arg) {
    kernel(6, 3, 0, 0);
    return NULL;
}

void *kernel31(void *arg) {
    kernel(7, 3, 1, 0);
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
    // pthread_create(&workItems[6], NULL, kernel30, NULL);
    // pthread_create(&workItems[7], NULL, kernel31, NULL);


    //joinall
    // for(int i=0 ; i < 8 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

