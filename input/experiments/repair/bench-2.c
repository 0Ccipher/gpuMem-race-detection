/*Inspired from : https://github.com/csl-iisc/ScoR/blob/master/microbenchmarks/src/race_interblock_blkfence_raw.cu*/
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define NBLOCKS 2
#define NTHREADS 3

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



void *kernel1( void *arg) {
    struct ThreadData *tdata = (struct ThreadData *)arg;
    int global_id = tdata->global_id;
    int local_id = tdata->local_id;
    int group_id = tdata->group_id;
    int kernel_id = tdata->kernel_id;
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);

      if(group_id == 0){
            __VERIFIER_memory_scope_work_group();
            atomic_store_explicit(&data[0], 1,memory_order_relaxed);
            __VERIFIER_memory_scope_work_group();
            atomic_thread_fence(memory_order_seq_cst);
            __VERIFIER_memory_scope_work_group();
            atomic_exchange_explicit(&flag, 1,memory_order_relaxed);
      }    
      else{
            // while(atomicExch(&flag, 0) == 0) {}
            __VERIFIER_memory_scope_work_group();
            if(atomic_exchange_explicit(&flag, 0,memory_order_relaxed) == 1){
                  __VERIFIER_memory_scope_work_group();
                   int a = atomic_load_explicit(&data[0],memory_order_relaxed);
                  __VERIFIER_memory_scope_work_group();
                  atomic_exchange_explicit(&flag, a,memory_order_relaxed);
            }
      }
    
    return NULL;
}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    __VERIFIER_groupsize(localWorkSize);

  	pthread_t workItems[totalThreads];
    struct ThreadData workItemInfo[totalThreads];

    int groups = globalWorkSize / localWorkSize;
    int left = globalWorkSize % localWorkSize;
    if( left != 0) groups = groups + 1;

    //kernel1
    int tcount = 0;
    for(int i = 0 ; i < groups-1; i++){
        for(int j = 0 ; j < localWorkSize ; j++){
            workItemInfo[tcount].local_id = j, workItemInfo[tcount].group_id = i, 
                workItemInfo[tcount].global_id = tcount+GLOBAL_WORK_OFFSET , workItemInfo[tcount].kernel_id = 0;
            pthread_create(&workItems[tcount], NULL, kernel1, (void *)&workItemInfo[tcount]);
            tcount++;
        }
    }
    //work_items from the last group
    if(left == 0) left = localWorkSize;
    for(int j = 0 ; j < left ; j++){
        workItemInfo[tcount].local_id = j, workItemInfo[tcount].group_id = groups-1, 
            workItemInfo[tcount].global_id = tcount + GLOBAL_WORK_OFFSET, workItemInfo[tcount].kernel_id = 0;
        pthread_create(&workItems[tcount], NULL, kernel1, (void *)&workItemInfo[tcount]);
        tcount++;
    }

    //joinall
    for(int i=0 ; i < tcount ; i++){
        pthread_join(workItems[i] , NULL);
    }

	// printf("_____________________________________\n");
  return 0;
}
