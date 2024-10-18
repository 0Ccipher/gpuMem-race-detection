
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define RACEY

#define NBLOCKS 27
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

// __global int X = 0;
// __global ient Y = 0;

/**************************************************
 *              INPUT DESCRIPTION
 *
 * V = Number of vertices
 * E = Number of edges
 *
 * For all i < E
 * where u = edgeSetU[i], and v = edgeSetV[i]
 * (u, v) is an edge in the graph
 *
 *************************************************/
#define Edges 3
#define vertices 4
atomic_int V=vertices;
atomic_int E=Edges;
atomic_int edgeSetU[Edges];
atomic_int edgeSetV[Edges];
atomic_int graphComponents[vertices];// d_vertexComponent
atomic_int head[NBLOCKS];
atomic_int tail[NBLOCKS];
atomic_int bases[NBLOCKS];
atomic_int blockIds[NBLOCKS];

pthread_barrier_t bard;
pthread_barrier_t barg[GROUPS];

void input(){
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetU[0],0);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetV[0],1);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetU[1],0);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetV[1],2);
     __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetU[2],1);
    __VERIFIER_memory_scope_device();
    atomic_init(&edgeSetV[2],2);
    //  __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetU[3],2);
    // __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetV[3],3);
    //  __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetU[4],3);
    // __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetV[4],4);
    //  __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetU[5],4);
    // __VERIFIER_memory_scope_device();
    // atomic_init(&edgeSetV[5],5);
    
}

void divideWork(int size, int value){
    if(value < size){
        for(int i=0; i < value ; i++){
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&head[i], i, sc);
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&tail[i], (i+1), sc);
        }
    }
    else{
        int portion = value / size;
        for(int i=0; i < size ; i++){
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&head[i], i*portion, sc);
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&tail[i], (i+1)*portion, sc);
        }
        __VERIFIER_memory_scope_device();
        atomic_store_explicit(&tail[size-1], value, sc);
    }
}

void initKernel(int global_id, int group_id, int local_id, int kernel_id){
    int tid = local_id;//const int tid = threadIdx.x;
    int bid = group_id;//int bid       = blockIdx.x;
    atomic_int *base = &bases[bid]; //int *base     = &bases[bid];
    atomic_int *blockId = &blockIds[bid]; //int *blockId  = &blockIds[bid];
    
    if(tid == 0){
        __VERIFIER_memory_scope_device();
        *base = atomic_fetch_add_explicit(&head[bid],NTHREADS,sc);
        // __VERIFIER_memory_scope_device();
        // atomic_store_explicit(&bases[bid],base,sc);
        __VERIFIER_memory_scope_work_group();
        atomic_exchange_explicit(blockId , bid, sc); //atomicExch_block(blockId, bid);
    }
     /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    __VERIFIER_memory_scope_device();
    int my_base = atomic_load_explicit(base,sc);
    __VERIFIER_memory_scope_device();
    int n_t_last = atomic_load_explicit(&tail[bid],sc);

    while(my_base < n_t_last) {
        if(tid + my_base < n_t_last) {
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&graphComponents[tid + my_base],tid + my_base,sc);
        }
#ifdef RACEY
#else
        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
#endif

        if(tid == 0) {
            __VERIFIER_memory_scope_device();
           *base = atomic_fetch_add_explicit(&head[bid],NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
        }

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(base,sc);

        __VERIFIER_memory_scope_device();
        if(atomic_load_explicit(base,sc) < n_t_last)
            continue;

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        if (tid == 0) {
            int otherBlock = 0;
            for (int block = (bid + 1);
                block < (bid + NBLOCKS); block++) {
                otherBlock = block % NBLOCKS;
                __VERIFIER_memory_scope_device();
                int h = atomic_fetch_add_explicit(&head[otherBlock], 0,sc);
                __VERIFIER_memory_scope_device();
                int t = atomic_load_explicit(&tail[otherBlock],sc);
                if ((h + NTHREADS) < t) {
                    break;
                }
            }
             // *base = atomicAdd(&head[otherBlock], NTHREADS);
            // atomicExch_block(blockId, otherBlock);
            __VERIFIER_memory_scope_device();
            *base = atomic_fetch_add_explicit(&head[otherBlock],NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            //  atomic_store_explicit(&bases[bid],base,sc);
            __VERIFIER_memory_scope_work_group();
            atomic_exchange_explicit(blockId , otherBlock, sc);
           
        }

        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        //  bid = atomicAdd_block(blockId, 0);
        __VERIFIER_memory_scope_work_group();
        bid = atomic_fetch_add_explicit(blockId , 0, sc);

        __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(base,sc);
        __VERIFIER_memory_scope_device();
        n_t_last = atomic_load_explicit(&tail[bid],sc);
    }
}

void linkKernel(int global_id, int group_id, int local_id, int kernel_id)
{
  
    int tid = local_id;//const int tid = threadIdx.x;
    int bid = group_id;//int bid       = blockIdx.x;
    atomic_int *base = &bases[bid]; //int *base     = &bases[bid];
    atomic_int *blockId = &blockIds[bid]; //int *blockId  = &blockIds[bid];
    
    if(tid == 0){
        __VERIFIER_memory_scope_device();
        *base = atomic_fetch_add_explicit(&head[bid],NTHREADS,sc);
        // __VERIFIER_memory_scope_device();
        // atomic_store_explicit(&bases[bid],base,sc);
        __VERIFIER_memory_scope_work_group();
        atomic_exchange_explicit(blockId , bid, sc); //atomicExch_block(blockId, bid);
    }
    // __syncthreads();
    /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    __VERIFIER_memory_scope_device();
    int my_base = atomic_load_explicit(base,sc);
    __VERIFIER_memory_scope_device();
    int n_t_last = atomic_load_explicit(&tail[bid],sc);
    
    while(my_base < n_t_last) {
        if(tid + my_base < n_t_last) {

            __VERIFIER_memory_scope_device();
            int U = atomic_load_explicit(&edgeSetU[tid + my_base],sc);
            __VERIFIER_memory_scope_device();
            int V = atomic_load_explicit(&edgeSetV[tid + my_base],sc);
            __VERIFIER_memory_scope_device();
            int p1 = atomic_fetch_add_explicit(&graphComponents[U], 0,sc);
            __VERIFIER_memory_scope_device();
            int p2 = atomic_fetch_add_explicit(&graphComponents[V], 0,sc);

            while (p1 != p2) {
                int maxi = p1 > p2 ? p1 : p2;
                int mini = p1 + (p2 - maxi);
                
                int cmpmaxi = maxi;
                __VERIFIER_memory_scope_device();
                int prev = atomic_compare_exchange_strong_explicit(&graphComponents[maxi], &cmpmaxi, mini,sc,sc);

                if (prev == maxi || prev == mini) 
                    break;
                __VERIFIER_memory_scope_device();
                p1 = atomic_fetch_add_explicit(&graphComponents[atomic_fetch_add_explicit(&graphComponents[maxi], 0,sc)], 0,sc);
                __VERIFIER_memory_scope_device();
                p2 = atomic_fetch_add_explicit(&graphComponents[mini], 0,sc);
            }
        }
#ifdef RACEY
#else
        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
#endif


        if(tid == 0) {
             __VERIFIER_memory_scope_device();
            *base = atomic_fetch_add_explicit(&head[bid], NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
        }

        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

         __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(base,sc);

         __VERIFIER_memory_scope_device();
        if(atomic_load_explicit(base,sc) < n_t_last)
            continue;

        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        if (tid == 0) {
            int otherBlock = 0;
            for (int block = (bid + 1);
                block < (bid + NBLOCKS); block++) {
                otherBlock = block % NBLOCKS;
                __VERIFIER_memory_scope_device();
                int h = atomic_fetch_add_explicit(&head[otherBlock], 0,sc);
                __VERIFIER_memory_scope_device();
                int t = atomic_load_explicit(&tail[otherBlock],sc);
                if ((h + NTHREADS) < t) {
                    break;
                }
            }
#ifdef RACEY
            // *base = atomicAdd_block(&head[otherBlock], NTHREADS);
            __VERIFIER_memory_scope_work_group();
            *base = atomic_fetch_add_explicit(&head[otherBlock], NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
#else
            __VERIFIER_memory_scope_device();
            *base = atomic_fetch_add_explicit(&head[otherBlock], NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
#endif
            __VERIFIER_memory_scope_work_group();
            atomic_exchange_explicit(blockId, otherBlock,sc);
        }
        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
     
        __VERIFIER_memory_scope_work_group();
        bid = atomic_fetch_add_explicit(blockId , 0, sc);
        __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(base,sc);
        __VERIFIER_memory_scope_device();
        n_t_last = atomic_load_explicit(&tail[bid],sc);
    
    }
}

void compressKernel(int global_id, int group_id, int local_id, int kernel_id)
{
    int tid = local_id;//const int tid = threadIdx.x;
    int bid = group_id;//int bid       = blockIdx.x;
    atomic_int *base = &bases[bid]; //int *base     = &bases[bid];
    atomic_int *blockId = &blockIds[bid]; //int *blockId  = &blockIds[bid];
    
    if(tid == 0){
        __VERIFIER_memory_scope_device();
        *base = atomic_fetch_add_explicit(&head[bid],NTHREADS,sc);
        // __VERIFIER_memory_scope_device();
        // atomic_store_explicit(&bases[bid],base,sc);
        __VERIFIER_memory_scope_work_group();
        atomic_exchange_explicit(&blockIds[bid] , bid, sc); //atomicExch_block(blockId, bid);
    }

    // __syncthreads();
    /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    __VERIFIER_memory_scope_device();
    int my_base = atomic_load_explicit(base,sc);
    __VERIFIER_memory_scope_device();
    int n_t_last = atomic_load_explicit(&tail[bid],sc);
    
    while(my_base < n_t_last) {
        if(tid + my_base < n_t_last) {
            __VERIFIER_memory_scope_device();
            int current = atomic_fetch_add_explicit(&graphComponents[tid + my_base], 0,sc);
            __VERIFIER_memory_scope_device();
            int parent = atomic_fetch_add_explicit(&graphComponents[current], 0,sc);

            while (current != parent) {
                int cmpcurrent = current;
                __VERIFIER_memory_scope_device();
                int val = atomic_compare_exchange_strong_explicit(&graphComponents[tid + my_base], &cmpcurrent, parent,sc,sc);
                if(val == current) {
                    // Successful swap, continue compression
                    current = parent;
                    __VERIFIER_memory_scope_device();
                    parent = atomic_fetch_add_explicit(&graphComponents[current], 0,sc);
                }
                else {
                    // Unsuccessful swap, restart compression
                    __VERIFIER_memory_scope_device();
                    current = atomic_fetch_add_explicit(&graphComponents[tid + my_base], 0,sc);
                    __VERIFIER_memory_scope_device();
                    parent = atomic_fetch_add_explicit(&graphComponents[current], 0,sc);
                }
            }
 
        }
#ifdef RACEY
#else
        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
#endif
        if(tid == 0) {
             __VERIFIER_memory_scope_device();
            *base = atomic_fetch_add_explicit(&head[bid], NTHREADS,sc);
            //  __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
        }

        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

         __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(base,sc);

         __VERIFIER_memory_scope_device();
        if(atomic_load_explicit(base,sc) < n_t_last)
            continue;

        // __syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
       rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        if (tid == 0) {
            int otherBlock = 0;
            for (int block = (bid + 1);
                block < (bid + NBLOCKS); block++) {
                otherBlock = block % NBLOCKS;
                __VERIFIER_memory_scope_device();
                int h = atomic_fetch_add_explicit(&head[otherBlock], 0,sc);
                __VERIFIER_memory_scope_device();
                int t = atomic_load_explicit(&tail[otherBlock],sc);
                if ((h + NTHREADS) < t) {
                    break;
                }
            }
#ifdef RACEY
            // *base = atomicAdd_block(&head[otherBlock], NTHREADS);
            __VERIFIER_memory_scope_work_group();
            *base = atomic_fetch_add_explicit(&head[otherBlock], NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
#else
            __VERIFIER_memory_scope_device();
            *base = atomic_fetch_add_explicit(&head[otherBlock], NTHREADS,sc);
            // __VERIFIER_memory_scope_device();
            // atomic_store_explicit(&bases[bid],base,sc);
#endif
            __VERIFIER_memory_scope_work_group();
            atomic_exchange_explicit(blockId, otherBlock,sc);
        }
        //__syncthreads();
        /* Synchronize */
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }

        //  bid = atomicAdd_block(blockId, 0);
        __VERIFIER_memory_scope_work_group();
        int bid1 = atomic_fetch_add_explicit(&blockIds[bid] , 0, sc);
        __VERIFIER_memory_scope_device();
        my_base = atomic_load_explicit(&bases[bid],sc);
        __VERIFIER_memory_scope_device();
        n_t_last = atomic_load_explicit(&tail[bid],sc);
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
    __VERIFIER_thread_kernel_id(0);

    // __VERIFIER_memory_scope_device();
    // int rc = pthread_barrier_wait(&bard);
    // if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
    //     printf("Could not wait on barrier\n");
    //     pthread_exit(NULL);
    // }
    //step 0
    if(group_id == -10){
            divideWork(NBLOCKS, V);
    }
    __VERIFIER_memory_scope_device();
    int rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    if(group_id != -10){initKernel(global_id, group_id , local_id , kernel_id);}
    
    __VERIFIER_memory_scope_device();
    rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    //step 2
    if(group_id == -10){
            divideWork(NBLOCKS, E);
    }
    __VERIFIER_memory_scope_device();
    rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    if(group_id != -10){linkKernel(global_id, group_id , local_id , kernel_id);}

    __VERIFIER_memory_scope_device();
    rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }
    
    //step 3
    if(group_id == -10){
            divideWork(NBLOCKS, V);
    }
    __VERIFIER_memory_scope_device();
    rc = pthread_barrier_wait(&bard);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    if(group_id != -10){compressKernel(global_id, group_id , local_id , kernel_id);}

    // __VERIFIER_memory_scope_device();
    // int rc = pthread_barrier_wait(&bard);
    // if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        
    //     printf("Could not wait on barrier\n");
    //     pthread_exit(NULL);
    // }
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
	if (pthread_barrier_init(&bard, NULL, globalWorkSize+1)) {
		printf("Could not create a barrier\n");
		return -1;
	}

  	pthread_t workItems[totalThreads+1];
    struct ThreadData workItemInfo[totalThreads+1];

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

    //special thread
     workItemInfo[tcount].local_id = -1, workItemInfo[tcount].group_id = -10, 
            workItemInfo[tcount].global_id = -1, workItemInfo[tcount].kernel_id = 0;
        pthread_create(&workItems[tcount], NULL, kernel1, (void *)&workItemInfo[tcount]);

    //joinall
    for(int i=0 ; i < tcount+1 ; i++){
        pthread_join(workItems[i] , NULL);
    }

  return 0;
}
