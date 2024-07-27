
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define RACEY

#define NBLOCKS 5
#define NTHREADS 2

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

#define N 9
#define B 3
atomic_int input[N] = {0,1,2,3,4,5,6,7,8};
atomic_int histogram[B] = {0,0,0};
atomic_int local[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


void compute_histogram(int global_id, int group_id, int local_id, int kernel_id)
{
    int num_groups = NBLOCKS;
    int gid = global_id;
    int lid = local_id;
    int lsize = NTHREADS;
    int group_start = (gid / lsize) * (N / num_groups);
    int group_end = group_start + (N / num_groups);

    // Phase 1: Work-items co-operate to zero local memory

    // Phase 2: Work-groups each compute a chunk of the input.
    // Work-items co-operate to compute histogram in local memory
    for (int i = group_start + lid; i < group_end; i += lsize) {
        int32_t b = input[i] % B;
        int li = group_id * B + b;
        __VERIFIER_memory_scope_work_group();
        atomic_fetch_add_explicit(&local[li],1,memory_order_relaxed);
    }
      // Wait for all local histogram updates to complete
      /* Synchronize */
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
        pthread_exit(NULL);
    }

    // Phase 3: Work-items co-operate to update global memory
    for (int32_t b = lid; b < B; b += lsize) {
         int li = group_id * B + b;
         __VERIFIER_memory_scope_device();
        atomic_fetch_add_explicit(&histogram[b], local[li],memory_order_relaxed);
    }
}


void *kernel00(void *arg) {
    compute_histogram(0, 0, 0, 0);
    return NULL;
}

void *kernel01(void *arg) {
    compute_histogram(1, 0, 1, 0);
    return NULL;
}

void *kernel10(void *arg) {
    compute_histogram(2, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    compute_histogram(3, 1, 1, 0);
    return NULL;
}
void *kernel20(void *arg) {
    compute_histogram(4, 2, 0, 0);
    return NULL;
}

void *kernel21(void *arg) {
    compute_histogram(5, 2, 1, 0);
    return NULL;
}

void *kernel30(void *arg) {
    compute_histogram(6, 3, 0, 0);
    return NULL;
}

void *kernel31(void *arg) {
    compute_histogram(7, 3, 1, 0);
    return NULL;
}


void *kernel40(void *arg) {
    compute_histogram(8, 4, 0, 0);
    return NULL;
}

void *kernel41(void *arg) {
    compute_histogram(9, 4, 1, 0);
    return NULL;
}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    pthread_t workItems[totalThreads];
    if (pthread_barrier_init(&barg[0], NULL, 2)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[1], NULL, 2)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[2], NULL, 2)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[3], NULL, 2)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[4], NULL, 2)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    pthread_create(&workItems[0], NULL, kernel00,  NULL);
    pthread_create(&workItems[1], NULL, kernel01,  NULL);
    pthread_create(&workItems[2], NULL, kernel10, NULL);
    pthread_create(&workItems[3], NULL, kernel11, NULL);
    pthread_create(&workItems[4], NULL, kernel20, NULL);
    pthread_create(&workItems[5], NULL, kernel21, NULL);
    pthread_create(&workItems[6], NULL, kernel30, NULL);
    pthread_create(&workItems[7], NULL, kernel31, NULL);
    pthread_create(&workItems[8], NULL, kernel40, NULL);
    pthread_create(&workItems[9], NULL, kernel41, NULL);


    //joinall
    // for(int i=0 ; i < 10 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

