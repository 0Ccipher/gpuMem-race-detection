
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define RACEY

#define NBLOCKS 5
#define NTHREADS 4

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS NBLOCKS

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


struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

// #define atomic_float _Atomic(float)

pthread_barrier_t bard;
pthread_barrier_t barg[GROUPS];

#define WARP_SIZE (NTHREADS < 32 ? NTHREADS : 32)
#define NTHREADS_TOT  (NBLOCKS * NTHREADS)

#define fsize (NBLOCKS < 15 ? NBLOCKS : 15)
#define arrsize 20+NBLOCKS
atomic_int filter[fsize];
atomic_int filterSize = fsize;
atomic_int array[arrsize];
atomic_int arraySize = arrsize;
atomic_int output[arrsize];


void input(){
    for(int i = 0 ; i < arrsize ; i++){
        __VERIFIER_memory_scope_device();
        atomic_init(&array[i],i);
    }
    for(int i = 0 ; i < fsize ; i++){
        __VERIFIER_memory_scope_device();
        int in=0;
        in = (i%3)?1:0; 
        atomic_init(&filter[i],in);
    }
}

void initKernel(int global_id, int group_id, int local_id, int kernel_id)
{
    int bid  = group_id;
    int btid = local_id;
    int gtid = bid * NTHREADS + btid;
    
    int yid = gtid;
    __VERIFIER_memory_scope_device();
    while (yid < arraySize) {
        __VERIFIER_memory_scope_device();
        atomic_store_explicit(&output[yid],0,sc);
        // output[yid] = 0;//0.0;
        yid += NTHREADS_TOT;
        __VERIFIER_memory_scope_device();
    }
}


void convolveKernel(int global_id, int group_id, int local_id, int kernel_id)
{
    int bid  = group_id;
    int btid = local_id;
    int gtid = bid * NTHREADS + btid;
    
    int offset = 0;
    __VERIFIER_memory_scope_device();
    while(offset < arraySize * filterSize) {
        __VERIFIER_memory_scope_device();
        int filterIndex = (offset + gtid) % filterSize;
        __VERIFIER_memory_scope_device();
        int outputIndex = (offset + gtid) / filterSize; 
        __VERIFIER_memory_scope_device();
        if(outputIndex < arraySize) {
            __VERIFIER_memory_scope_device();
            int inputIndex = outputIndex - (filterIndex - filterSize / 2);
            __VERIFIER_memory_scope_device();
            if(inputIndex >= 0 && inputIndex < arraySize) {
                __VERIFIER_memory_scope_device();
                int arri = array[inputIndex];
                __VERIFIER_memory_scope_device();
                int filteri = filter[filterIndex];
                __VERIFIER_memory_scope_device();
#ifdef RACEY
                __VERIFIER_memory_scope_work_group();
                atomic_fetch_add(&output[outputIndex], arri * filteri);
#else
                // Only this block's threads are writing to location
                __VERIFIER_memory_scope_device();
                if(btid >= filterIndex && NTHREADS - btid >= filterSize - filterIndex){
                    // atomicAdd_block(&output[outputIndex], array[inputIndex] * filter[filterIndex]);
                    __VERIFIER_memory_scope_work_group();
                    atomic_fetch_add(&output[outputIndex], arri * filteri);
                }
                    
                else{
                    __VERIFIER_memory_scope_device();
                    atomic_fetch_add(&output[outputIndex], arri * filteri);
                }
                    
#endif
            }
        }
        __VERIFIER_memory_scope_device();
        offset += NTHREADS_TOT;
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
    
    initKernel(global_id, group_id , local_id , kernel_id);
    __VERIFIER_memory_scope_device();
    int rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }
    convolveKernel(global_id, group_id , local_id , kernel_id);
    // printf("total components , TODO\n");
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
