// Overhauling SC Atomics in C11 and OpenCL: Mark Batty, Alastair F. Donaldson, John Wickerson
// example-4
#include <assert.h>
#include <stdint.h>
#include <pthread.h>
#include <stdio.h>
#include <atomic>


#define WORK_ITEMS_PER_GROUP 1
#define WORK_ITEMS_PER_KERNEL 1
#define GLOBAL_WORK_OFFSET 0
extern "C" {
struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_memory_scope_system()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_weak_access()                   ;


std::atomic<int> X;
std::atomic<int> Y;
// __global int X = 0;
// __global ient Y = 0;

struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

void *kernel1( void *arg) {
    struct ThreadData *data = (struct ThreadData *)arg;
    int global_id = data->global_id;
    int local_id = data->local_id;
    int group_id = data->group_id;
    int kernel_id = data->kernel_id;
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(1);
    // printf("\n Kernel 1 Group : %d , LocalItemID: %d , GlobalItemID : %d \n" ,group_id , local_id ,global_id);
    
    __VERIFIER_memory_scope_device();
    // __VERIFIER_weak_access();
    atomic_store_explicit(&X, 42, std::memory_order_release);

    __VERIFIER_memory_scope_system();
    // __VERIFIER_weak_access();
    atomic_store_explicit(&Y, 1, std::memory_order_release);
  
    return NULL;
}

void *kernel2(void *arg) {
    struct ThreadData *data = (struct ThreadData *)arg;
    int global_id = data->global_id;
    int local_id = data->local_id;
    int group_id = data->group_id;
    int kernel_id = data->kernel_id;
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(1);
    int index = global_id-GLOBAL_WORK_OFFSET % 5;
    // printf("\n Kernel 2 Group : %d , LocalItemID: %d , GlobalItemID: %d \n" ,group_id , local_id ,global_id);
     
   
    int value = -1;
    __VERIFIER_memory_scope_device();
    int tempy = atomic_load_explicit(&Y, std::memory_order_acquire);
    if(tempy == 1){
        __VERIFIER_memory_scope_device();
        value = atomic_load_explicit(&X, std::memory_order_acquire);
    }
    printf("tempy : %d \t value : %d\n",tempy,value);
    return NULL;
}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    // clEnqueueNDRangeKernel(queue1, kernel1, 1, nullptr, &globalWorkSize, &localWorkSize, 0, nullptr, nullptr);
    // clEnqueueNDRangeKernel(queue2, kernel2, 1, nullptr, &globalWorkSize, &localWorkSize, 0, nullptr, nullptr);
    int kernels = 2;
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

    //kernel2
    for(int i = 0 ; i < groups-1; i++){
        for(int j = 0 ; j < localWorkSize ; j++){
            workItemInfo[tcount].local_id = j, workItemInfo[tcount].group_id = i, 
                workItemInfo[tcount].global_id = tcount + GLOBAL_WORK_OFFSET, workItemInfo[tcount].kernel_id = 1;
            pthread_create(&workItems[tcount], NULL, kernel2, (void *)&workItemInfo[tcount]);
            tcount++;
        }
    }
    //work_items from the last group
    if(left == 0) left = localWorkSize;
    for(int j = 0 ; j < left ; j++){
        workItemInfo[tcount].local_id = j, workItemInfo[tcount].group_id = groups-1, 
            workItemInfo[tcount].global_id = tcount + GLOBAL_WORK_OFFSET , workItemInfo[tcount].kernel_id = 1;
        pthread_create(&workItems[tcount], NULL, kernel2, (void *)&workItemInfo[tcount]);
        tcount++;
    }

    //joinall
    for(int i=0 ; i < tcount ; i++){
        pthread_join(workItems[i] , NULL);
    }

	printf("_____________________________________\n");
  return 0;
}
}