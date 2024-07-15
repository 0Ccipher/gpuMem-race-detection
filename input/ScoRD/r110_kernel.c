#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define sc memory_order_seq_cst

#define NBLOCKS 2
#define NTHREADS 1

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS ((WORK_ITEMS_PER_KERNEL / WORK_ITEMS_PER_GROUP)+1)

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
pthread_barrier_t barg[GROUPS];

#define asie 3
#define stepv 1
atomic_int size=asie;
atomic_int steps=stepv;
atomic_int arr[asie];
atomic_int copy[asie];
atomic_int comp[NTHREADS * NBLOCKS];

 /********************************************************************************************
 * Implementation of Rule 110 Cellular Automaton
 * https://en.wikipedia.org/wiki/Rule_110
 ********************************************************************************************/


// __device__ volatile int gl_lock = 0;

/***************************************************
 *
 *               DEVICE FUNCTIONS
 *
 ***************************************************/
bool isBorder(int local_id)
{
    return local_id == 0 || local_id == NTHREADS - 1;
}

/*
 * From Wikipedia:
 * Current pattern           111 110 101 100 011 010 001 000
 * New state for center cell  0   1   1   0   1   1   1   0
 */


void input()
{

    for(int i = 0; i < size; ++i){
        __VERIFIER_memory_scope_device();
        atomic_init(&arr[i],1);
    }
        
}
 void rule110Kernel(int global_id, int group_id, int local_id, int kernel_id, int step)
{
    int tid = local_id + group_id * NTHREADS;
    int btid = local_id;
    int offset = 0;
    while(offset < size) {
        int ind = tid + offset;
        if(ind < size) {
            // Copy array value into a copy
            __VERIFIER_memory_scope_device();
            copy[ind] = arr[ind];
        }
        offset += NBLOCKS * NTHREADS;
    }
    // Threadfence and mark complete
    if(isBorder(local_id)) {
#ifdef RACEY
        __VERIFIER_memory_scope_work_group();
        atomic_thread_fence(memory_order_seq_cst);
#else
        __VERIFIER_memory_scope_device();
        atomic_thread_fence(memory_order_seq_cst);
#endif
        __VERIFIER_memory_scope_device();
        atomic_exchange(&comp[tid], step);
    }
    else {
        __VERIFIER_memory_scope_work_group();
        atomic_thread_fence(memory_order_seq_cst);
         __VERIFIER_memory_scope_work_group();
        atomic_exchange(&comp[tid], step);
    }
    
    // Use device scope for border neighbors, and block for non-border
    if(btid - 1 == 0 || btid == 0) {
        __VERIFIER_memory_scope_device();
        while(step != atomic_fetch_add(&comp[(NBLOCKS * NTHREADS + tid - 1) % (NBLOCKS * NTHREADS)], 0)){
            __VERIFIER_memory_scope_device();
        }
        __VERIFIER_memory_scope_device();
        atomic_thread_fence(memory_order_seq_cst);
    }
    else {
        __VERIFIER_memory_scope_work_group();
        while(step != atomic_fetch_add(&comp[tid - 1], 0)){
            __VERIFIER_memory_scope_work_group();
        }
         __VERIFIER_memory_scope_work_group();
        atomic_thread_fence(memory_order_seq_cst);
    }
    
    offset = 0;
    while(offset < size) {
        int ind = tid + offset;
        
        if(ind < size) {
            __VERIFIER_memory_scope_device();
            if(ind > 0)
                arr[ind] = copy[ind - 1];
            else
                arr[ind] = 0;
        }
        offset += NBLOCKS * NTHREADS;
    }
    
    if(btid + 1 == NTHREADS || btid + 1 == NTHREADS - 1) {
#ifdef RACEY
        __VERIFIER_memory_scope_work_group();
        while(step != atomic_fetch_add(&comp[(NBLOCKS * NTHREADS + tid + 1) % (NBLOCKS * NTHREADS)], 0)){
             __VERIFIER_memory_scope_work_group();
        }
#else
        __VERIFIER_memory_scope_device();
        while(step != atomic_fetch_add(&comp[(NBLOCKS * NTHREADS + tid + 1) % (NBLOCKS * NTHREADS)], 0)){
            __VERIFIER_memory_scope_device();
        }
#endif
        __VERIFIER_memory_scope_device();
        atomic_thread_fence(memory_order_seq_cst);
    }
    else {
        __VERIFIER_memory_scope_work_group();
        while(step != atomic_fetch_add(&comp[tid + 1], 0)){
            __VERIFIER_memory_scope_work_group();
        }
         __VERIFIER_memory_scope_work_group();
        atomic_thread_fence(memory_order_seq_cst);
    }
    
    // Calculate new value of array and update
    offset = 0;
    while(offset < size) {
        int ind = tid + offset;
        if(ind < size) {
            __VERIFIER_memory_scope_device();
            int val = arr[ind];
            val <<= 1;
            __VERIFIER_memory_scope_device();
            if(ind < size)
                val += copy[ind];
            val <<= 1;
            __VERIFIER_memory_scope_device();
            if(ind + 1 < size)
                val += copy[ind + 1];
            // Update value based on neighbors
            switch(val) {
                case 7:
                case 4:
                case 0:
                    val = 0;
                break;
                case 6:
                case 5:
                case 3:
                case 2:
                case 1:
                    val = 1;
                break;                        
            }
            // Calculate new value and store
            __VERIFIER_memory_scope_device();
            arr[ind] = val;
        }
        offset += NBLOCKS * NTHREADS;
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
    
    for(int i = 0; i < steps; ++i)
        rule110Kernel(global_id, group_id , local_id , kernel_id , i+1);
    
    return NULL;
}

int main(int argc, char **argv){


    input();

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    __VERIFIER_groupsize(localWorkSize);

    /* Barrier initialization */
	if (pthread_barrier_init(&bard, NULL, globalWorkSize)) {
		printf("Could not create a barrier\n");
		return -1;
	}

  	pthread_t workItems[totalThreads];
    struct ThreadData workItemInfo[totalThreads];

    int groups = globalWorkSize / localWorkSize;
    int left = globalWorkSize % localWorkSize;
    if( left != 0) groups = groups + 1;

    //kernel1
    int tcount = 0;
    for(int i = 0 ; i < groups-1; i++){
        /* Barrier initialization per Group*/
        if (pthread_barrier_init(&barg[i], NULL, localWorkSize)) {
            printf("Could not create a barrier\n");
            return -1;
        }
        for(int j = 0 ; j < localWorkSize ; j++){
            workItemInfo[tcount].local_id = j, workItemInfo[tcount].group_id = i, 
                workItemInfo[tcount].global_id = tcount+GLOBAL_WORK_OFFSET , workItemInfo[tcount].kernel_id = 0;
            pthread_create(&workItems[tcount], NULL, kernel1, (void *)&workItemInfo[tcount]);
            tcount++;
        }
    }
    //work_items from the last group
    if(left == 0) left = localWorkSize;
    /* Barrier initialization for last Group*/
    if (pthread_barrier_init(&barg[(groups-1)], NULL, left)) {
        printf("Could not create a barrier\n");
        return -1;
    }
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
