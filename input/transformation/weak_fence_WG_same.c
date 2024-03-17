// Overhauling SC Atomics in C11 and OpenCL: Mark Batty, Alastair F. Donaldson, John Wickerson
// example-4
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>

#define WORK_ITEMS_PER_GROUP 2
#define WORK_ITEMS_PER_KERNEL 2
#define GLOBAL_WORK_OFFSET 0
struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
atomic_int X = 0;
atomic_int Y = 0;
// __global int X = 0;
// __global ient Y = 0;

struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

void thr1(){
    __VERIFIER_memory_scope_device();
    atomic_store_explicit(&X, 42, memory_order_relaxed);

     __VERIFIER_memory_scope_work_group();
    atomic_thread_fence(memory_order_release);

    __VERIFIER_memory_scope_device();
    atomic_store_explicit(&Y, 42, memory_order_relaxed);
}

void thr2(){
    int value = -1;
    __VERIFIER_memory_scope_device();
    int tempy = atomic_load_explicit(&Y, memory_order_relaxed);
    
    __VERIFIER_memory_scope_work_group();
    atomic_thread_fence(memory_order_acquire);

    __VERIFIER_memory_scope_device();
    value = atomic_load_explicit(&X, memory_order_relaxed);
    
    printf("y : %d \t x : %d\n",tempy,value);
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
    printf("group-id : %d , local-id : %d \n",group_id , local_id);
    if(local_id == 0)
        thr1(); // executed by thread1
    else
        thr2(); // executed by thread2
    
  
    return NULL;
}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

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

	printf("_____________________________________\n");
  return 0;
}
