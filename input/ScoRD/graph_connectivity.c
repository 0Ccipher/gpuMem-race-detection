// Overhauling SC Atomics in C11 and OpenCL: Mark Batty, Alastair F. Donaldson, John Wickerson
// example-4
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define NBLOCKS 2
#define NTHREADS 2

#define WORK_ITEMS_PER_GROUP 2
#define WORK_ITEMS_PER_KERNEL 4
#define GLOBAL_WORK_OFFSET 0

#define GROUPS ((WORK_ITEMS_PER_KERNEL / WORK_ITEMS_PER_GROUP)+1)

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

// __global int X = 0;
// __global ient Y = 0;

/**************************************************
 *              INPUT DESCRIPTION
 *
 * V = Number of vertices
 * E = Number of edges
 *
 * For all i < E
 * where u = edgeListU[i], and v = edgeListV[i]
 * (u, v) is an edge in the graph
 *
 *************************************************/
#define Edges 2
#define vertices 3
atomic_int V=vertices;
atomic_int E=Edges;
atomic_int edgeListU[Edges];
atomic_int edgeListV[Edges];
atomic_int graphComponents[vertices];// d_vertexComponent
atomic_int d_head[NBLOCKS];
atomic_int d_tail[NBLOCKS];
atomic_int d_base[NBLOCKS];
atomic_int d_blockId[NBLOCKS];

atomic_int X = 0;
atomic_int Y = 0;
atomic_int Z = 0;
atomic_int w = 0;


struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};

pthread_barrier_t bard;
pthread_barrier_t bar[GROUPS];

void input(){
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeListU[0],1);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeListV[0],2);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeListU[1],1);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeListV[1],3);
    
}

void devideWork(int size, int value){
    if(value < size){
        for(int i=0; i < value ; i++){
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&d_head[i], i, memory_order_seq_cst);
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&d_tail[i], (i+1), memory_order_seq_cst);
        }
    }
    else{
        int portion = value / size;
        for(int i=0; i < size ; i++){
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&d_head[i], i*portion, memory_order_seq_cst);
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&d_tail[i], (i+1)*portion, memory_order_seq_cst);
        }
        __VERIFIER_memory_scope_device();
        atomic_store_explicit(&d_tail[size-1], value, memory_order_seq_cst);
    }
}

void initKernel(int global_id, int group_id, int local_id, int kernel_id){
    int tid = local_id;//const int tid = threadIdx.x;
    int bid = group_id;//int bid       = blockIdx.x;
    __VERIFIER_memory_scope_device();
    int base = atomic_load_explicit(&d_base[bid],memory_order_seq_cst);
    __VERIFIER_memory_scope_device();
    int blockId = atomic_load_explicit(&d_blockId[bid],memory_order_seq_cst);
    if(tid == 0){
        __VERIFIER_memory_scope_device();
        base = atomic_fetch_add_explicit(&d_head[bid],NTHREADS,memory_order_seq_cst);
        __VERIFIER_memory_scope_device();
        atomic_store_explicit(&d_base[bid],base,memory_order_seq_cst);
        __VERIFIER_memory_scope_work_group();
        atomic_exchange_explicit(&d_blockId[bid] , bid, memory_order_seq_cst); //atomicExch_block(blockId, bid);
    }
     /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&bar[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    int my_base = atomic_load_explicit(&d_base[bid],memory_order_seq_cst);
    int n_t_last = atomic_load_explicit(&d_tail[bid],memory_order_seq_cst);
    while(my_base < n_t_last) {
        if(tid + my_base < n_t_last) {
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&graphComponents[tid + my_base],tid + my_base,memory_order_seq_cst);
        }
#ifdef RACEY
#else
        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&bar[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
#endif

        if(tid == 0) {
            __VERIFIER_memory_scope_device();
            base = atomic_fetch_add_explicit(&d_head[bid],NTHREADS,memory_order_seq_cst);
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&d_base[bid],base,memory_order_seq_cst);
        }

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&bar[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        my_base = atomic_load_explicit(&d_base[bid],memory_order_seq_cst);

        if(atomic_load_explicit(&d_base[bid],memory_order_seq_cst) < n_t_last)
            continue;

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&bar[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        if (tid == 0) {
            int otherBlock = 0;
            for (int block = (bid + 1);
                block < (bid + NBLOCKS); block++) {
                otherBlock = block % NBLOCKS;
                int h = atomic_fetch_add_explicit(&d_head[otherBlock], 0,memory_order_seq_cst);
                int t = atomic_load_explicit(&d_tail[otherBlock],memory_order_seq_cst);
                if ((h + NTHREADS) < t) {
                    break;
                }
            }
             // *base = atomicAdd(&head[otherBlock], NTHREADS);
            // atomicExch_block(blockId, otherBlock);
             __VERIFIER_memory_scope_device();
             base = atomic_fetch_add_explicit(&d_head[otherBlock],NTHREADS,memory_order_seq_cst);
            __VERIFIER_memory_scope_device();
             atomic_store_explicit(&d_base[bid],base,memory_order_seq_cst);
            __VERIFIER_memory_scope_work_group();
            atomic_exchange_explicit(&d_blockId[bid] , otherBlock, memory_order_seq_cst);
           
        }

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&bar[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        //  bid = atomicAdd_block(blockId, 0);
        __VERIFIER_memory_scope_work_group();
        bid = atomic_fetch_add_explicit(&d_blockId[bid] , 0, memory_order_seq_cst);

        my_base = atomic_load_explicit(&d_base[bid],memory_order_seq_cst);
        n_t_last = atomic_load_explicit(&d_tail[bid],memory_order_seq_cst);
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
    
    // initKernel(global_id, group_id , local_id , kernel_id);
    
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
