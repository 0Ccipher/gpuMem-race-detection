#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>
#include <stdbool.h>

#define RACEY

#define sc memory_order_seq_cst

#define NBLOCKS 3
#define NTHREADS 1

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
pthread_barrier_t barg[GROUPS];

/***************************************************
 *
 *               KERNEL FUNCTIONS
 *
 ***************************************************/

/***************************************************
 *                  INPUT
 * 
 * Matrix A, Matrix B, Result Matrix C, 
 * # rows of A (= # rows of C), 
 * # columns of A (= # rows of B), 
 * # columns of B (= # columns of C)
 *
 * All in row-major format
 ***************************************************/
#define WARP_SIZE 2
#define ra 2
#define ca 2
#define cb 2

atomic_int rA=ra;
atomic_int cA=ca;
atomic_int cB=cb;
atomic_int A[ra*ca]; 
atomic_int B[ca*cb];
atomic_int C[ra*cb];
atomic_int sh_locks[NBLOCKS * WARP_SIZE];
atomic_int tempCs[NBLOCKS * WARP_SIZE];
atomic_int gl_lock[16]; //1024

void input()
{

    for(int i = 0; i < ra*ca; ++i){
        
        __VERIFIER_memory_scope_device();
        atomic_init(&A[i] , i);
        
    }
     for(int i = 0; i < ca * cb; ++i){
        __VERIFIER_memory_scope_device();
        atomic_init(&B[i] , i);
        
    }
     for(int i = 0; i < ra*cb; ++i){
        __VERIFIER_memory_scope_device();
        atomic_init(&C[i] , 0);
    }
}

void matMultKernel(int global_id, int group_id, int local_id, int kernel_id)
{
    int tid = local_id;
    int bid = group_id;
    
    // Allow each warp its own lock for better parallelism
    __VERIFIER_memory_scope_device();
    atomic_int *sh_lock = &sh_locks[bid * WARP_SIZE + (tid % WARP_SIZE)];
    atomic_int *tempC = &tempCs[bid * WARP_SIZE + (tid % WARP_SIZE)];

    int offset = 0;

    if(tid == 0)
        *sh_lock = 0;

    /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }
    
    // Repeat until entire matrix has been covered
    __VERIFIER_memory_scope_device();
    while(offset / ((cA + NTHREADS - 1) / NTHREADS) < rA) {
        int row = (bid + offset) / ((cA + NTHREADS - 1) / NTHREADS);
        // Iterate over columns in matrix B
        __VERIFIER_memory_scope_device();
        for(int i = 0; i < (cB + WARP_SIZE - 1) / WARP_SIZE; ++i) {
            // Initialize shared variables
            if(tid / WARP_SIZE == 0) {
                __VERIFIER_memory_scope_device();
                *tempC = 0;
            }
            /* Synchronize */
            __VERIFIER_memory_scope_work_group();
            rc = pthread_barrier_wait(&barg[group_id]);
            if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
                printf("Could not wait on barrier\n");
                pthread_exit(NULL);
            }
            for(int j = 0; j < WARP_SIZE; ++j) {
                __VERIFIER_memory_scope_device();
                int col = ((bid + offset) % ((cA + NTHREADS - 1) / NTHREADS)) 
                          * NTHREADS + (tid / WARP_SIZE) * WARP_SIZE + j;
                int t = 0;
                __VERIFIER_memory_scope_device();
                if(row < rA && col < cA && (i *  WARP_SIZE) + (tid % WARP_SIZE) < cB) {
                    // Perform multiplication
                    __VERIFIER_memory_scope_device();
                    t = A[col + row * cA] * B[(i *  WARP_SIZE) + (tid % WARP_SIZE) + col * cB];
                }
                
                // Have each thread update shared variable with value
                bool success = false;
                do {
                    int expected1 = 0;
                    __VERIFIER_memory_scope_work_group();
                    if(atomic_compare_exchange_strong(sh_lock, &expected1,1) == 0) {
#ifdef RACEY
#else
                        __VERIFIER_memory_scope_work_group();
                        atomic_thread_fence(memory_order_seq_cst);
#endif
                        __VERIFIER_memory_scope_device();
                        *tempC += t;
#ifdef RACEY
#else
                        __VERIFIER_memory_scope_work_group();
                        atomic_thread_fence(memory_order_seq_cst);
#endif
                        __VERIFIER_memory_scope_work_group();
                        atomic_exchange(sh_lock, 0);
                        success = true;
                    }
                }while(!success);
            }
            /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
            
            // Update the result array with value
            __VERIFIER_memory_scope_device();
            if(tid / WARP_SIZE == 0 && row < rA && i * WARP_SIZE + tid < cB) {
                bool successful = false;
                do {
#ifdef RACEY
                    // 2 races: One on gl_lock due to block atomic, other on C, due to block-scope locking
                    int expected2 = 0;
                    __VERIFIER_memory_scope_device();
                    int cb1 = cB;
                    __VERIFIER_memory_scope_work_group();
                    if(0 == atomic_compare_exchange_strong(&gl_lock[(i * WARP_SIZE + tid + row * cb1) % NTHREADS], &expected2, 1)) {
                        __VERIFIER_memory_scope_work_group();
                        atomic_thread_fence(memory_order_seq_cst);
#else
                    int expected2 = 0;
                    __VERIFIER_memory_scope_device();
                    int cb1 = cB;
                    __VERIFIER_memory_scope_device();
                    if(0 == atomic_compare_exchange_strong(&gl_lock[(i * WARP_SIZE + tid + row * cb1) % NTHREADS], &expected2, 1)) {
                        __VERIFIER_memory_scope_device();
                        atomic_thread_fence(memory_order_seq_cst);
#endif
                        __VERIFIER_memory_scope_device();
                        C[i * WARP_SIZE + tid + row * cB] += *tempC;
                        __VERIFIER_memory_scope_device();
                         atomic_thread_fence(memory_order_seq_cst);
                        __VERIFIER_memory_scope_work_group();
                        atomic_exchange(&gl_lock[(i * WARP_SIZE + tid + row * cB) % NTHREADS], 0);
                        successful = true;
                    }
                }while(!successful);
            }
        }
        
        offset += NBLOCKS;
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
    
    matMultKernel(global_id, group_id , local_id , kernel_id);
    
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
