
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define B 1
#define T 16

#define NBLOCKS B
#define NTHREADS T

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS NBLOCKS

struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};


//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_groupsize(int localWorkSize)    ;


pthread_barrier_t bard;
pthread_barrier_t barg[2];


atomic_int s_ptr_vol[] = {0,2,3,4,5,6,7,8,9,10,11,112,13,14,15,16,17,
18,19,20,21};

void warp_reduce(int global_id, int group_id, int local_id, int kernel_id)
{
        int tidx = local_id;
        int tmp = 0;

        for (int n = 16; n >= 1; n >>= 1) {
            if (tidx < n) {
                double val1, val2;
                __VERIFIER_memory_scope_device();
                val1 = s_ptr_vol[0];
                __VERIFIER_memory_scope_device();
                val2 = s_ptr_vol[n];
				        // __syncthreads();
                __VERIFIER_memory_scope_work_group();
                int rc = pthread_barrier_wait(&barg[0]);
                if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
                    printf("Could not wait on barrier\n");
                    pthread_exit(NULL);
                }
                __VERIFIER_memory_scope_device();
                tmp = val1 + val2;
                __VERIFIER_memory_scope_device();
                s_ptr_vol[0] = tmp;
            }
        }
}


void *kernel1( void *arg) {
    struct ThreadData *data = (struct ThreadData *)arg;
    int global_id = data->global_id;
    int local_id = data->local_id;
    int group_id = data->group_id;
    int kernel_id = data->kernel_id;
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);
    
    warp_reduce(global_id, group_id , local_id , kernel_id);
    
    return NULL;
}

int main(int argc, char **argv)
{

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

    /* Barrier initialization*/
    if (pthread_barrier_init(&barg[0], NULL, T)) {
        printf("Could not create a barrier\n");
        return -1;
    }
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
  return 0;
}

// dl<<<B,T>>>(din);