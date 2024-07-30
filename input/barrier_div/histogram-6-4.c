
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define RACEY

#define NBLOCKS 6
#define NTHREADS 4

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

#define N 18
#define B 4
atomic_int input[N] = {0,1,2,3,4,5,6,7,8,0,1,2,3,4,5,6,7,8};
atomic_int histogram[B] = {0,0,0,0};
atomic_int local[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};


void compute_histogram(int global_id, int group_id, int local_id, int kernel_id)
{
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);
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
    if(local_id == 3){
        __VERIFIER_memory_scope_work_group();
        int rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
        pthread_exit(NULL);
        }
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

void *kernel02(void *arg) {
    compute_histogram(2, 0, 2, 0);
    return NULL;
}

void *kernel03(void *arg) {
    compute_histogram(3, 0, 3, 0);
    return NULL;
}

void *kernel10(void *arg) {
    compute_histogram(4, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    compute_histogram(5, 1, 1, 0);
    return NULL;
}

void *kernel12(void *arg) {
    compute_histogram(6, 1, 2, 0);
    return NULL;
}
void *kernel13(void *arg) {
    compute_histogram(7, 1, 3, 0);
    return NULL;
}
void *kernel20(void *arg) {
    compute_histogram(8, 2, 0, 0);
    return NULL;
}
void *kernel21(void *arg) {
    compute_histogram(9, 2, 1, 0);
    return NULL;
}
void *kernel22(void *arg) {
    compute_histogram(10, 2, 2, 0);
    return NULL;
}
void *kernel23(void *arg) {
    compute_histogram(11, 2, 3, 0);
    return NULL;
}
void *kernel30(void *arg) {
    compute_histogram(12, 3, 0, 0);
    return NULL;
}
void *kernel31(void *arg) {
    compute_histogram(13, 3, 1, 0);
    return NULL;
}
void *kernel32(void *arg) {
    compute_histogram(14, 3, 2, 0);
    return NULL;
}
void *kernel33(void *arg) {
    compute_histogram(15, 3, 3, 0);
    return NULL;
}
void *kernel40(void *arg) {
    compute_histogram(16, 4, 0, 0);
    return NULL;
}
void *kernel41(void *arg) {
    compute_histogram(17, 4, 1, 0);
    return NULL;
}
void *kernel42(void *arg) {
    compute_histogram(18, 4, 2, 0);
    return NULL;
}
void *kernel43(void *arg) {
    compute_histogram(19, 4, 3, 0);
    return NULL;
}

void *kernel50(void *arg) {
    compute_histogram(20, 5, 0, 0);
    return NULL;
}
void *kernel51(void *arg) {
    compute_histogram(21, 5, 1, 0);
    return NULL;
}
void *kernel52(void *arg) {
    compute_histogram(22, 5, 2, 0);
    return NULL;
}
void *kernel53(void *arg) {
    compute_histogram(23, 5, 3, 0);
    return NULL;
}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    pthread_t workItems[totalThreads];
    if (pthread_barrier_init(&barg[0], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[1], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[2], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[3], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    if (pthread_barrier_init(&barg[4], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }

    if (pthread_barrier_init(&barg[5], NULL, 4)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    
    pthread_create(&workItems[0], NULL, kernel00,  NULL);
    pthread_create(&workItems[1], NULL, kernel01,  NULL);
    pthread_create(&workItems[2], NULL, kernel02, NULL);
    pthread_create(&workItems[3], NULL, kernel03, NULL);

    pthread_create(&workItems[4], NULL, kernel10, NULL);
    pthread_create(&workItems[5], NULL, kernel11, NULL);
    pthread_create(&workItems[6], NULL, kernel12, NULL);
    pthread_create(&workItems[7], NULL, kernel13, NULL);

    pthread_create(&workItems[8], NULL, kernel20,  NULL);
    pthread_create(&workItems[9], NULL, kernel21,  NULL);
    pthread_create(&workItems[10], NULL, kernel22, NULL);
    pthread_create(&workItems[11], NULL, kernel23, NULL);

    pthread_create(&workItems[12], NULL, kernel30, NULL);
    pthread_create(&workItems[13], NULL, kernel31, NULL);
    pthread_create(&workItems[14], NULL, kernel32, NULL);
    pthread_create(&workItems[15], NULL, kernel33, NULL);

    pthread_create(&workItems[16], NULL, kernel40,  NULL);
    pthread_create(&workItems[17], NULL, kernel41,  NULL);
    pthread_create(&workItems[18], NULL, kernel42, NULL);
    pthread_create(&workItems[19], NULL, kernel43, NULL);

    pthread_create(&workItems[20], NULL, kernel50,  NULL);
    pthread_create(&workItems[21], NULL, kernel51,  NULL);
    pthread_create(&workItems[22], NULL, kernel52, NULL);
    pthread_create(&workItems[23], NULL, kernel53, NULL);

    


    // //joinall
    // for(int i=0 ; i < 20 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

