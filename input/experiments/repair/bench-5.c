/*Inspired from : https://github.com/csl-iisc/ScoR/blob/master/microbenchmarks/src/race_interblock_blklock_waw.cu*/
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define NBLOCKS 8
#define NTHREADS 1

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

int data[1];
atomic_int lock = 0;


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

      int expected1 = 0;
      int expected2 = 0;
      int desired = 1;
      if(group_id == 0){
            //  while(atomicCAS_block(&lock, 0, 1) != 0) {}
            __VERIFIER_memory_scope_work_group();
            if(atomic_compare_exchange_strong(&lock, &expected1,desired) == 0){
                  __VERIFIER_memory_scope_work_group();
                  atomic_thread_fence(memory_order_seq_cst);
                  data[0]=1;
                //    __VERIFIER_memory_scope_device();
                //   atomic_store_explicit(&data[0], 1,memory_order_seq_cst);
                  __VERIFIER_memory_scope_work_group();
                  atomic_thread_fence(memory_order_seq_cst);
                  __VERIFIER_memory_scope_work_group();
                  atomic_exchange_explicit(&lock, 0,memory_order_seq_cst);
            }
           
      }    
      else{
            //  while(atomicCAS_block(&lock, 0, 1) != 0) {}
            __VERIFIER_memory_scope_work_group();
            if(atomic_compare_exchange_strong(&lock, &expected2,desired) == 0){
                  __VERIFIER_memory_scope_work_group();
                  atomic_thread_fence(memory_order_seq_cst);
                  data[0]=2;
                //    __VERIFIER_memory_scope_device();
                //   atomic_store_explicit(&data[0], 2,memory_order_seq_cst);
                  __VERIFIER_memory_scope_work_group();
                  atomic_thread_fence(memory_order_seq_cst);
                  __VERIFIER_memory_scope_work_group();
                  atomic_exchange_explicit(&lock, 0,memory_order_seq_cst);
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
