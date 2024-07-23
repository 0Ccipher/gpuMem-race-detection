#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define NBLOCKS 3
#define NTHREADS 3

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS ((WORK_ITEMS_PER_KERNEL / WORK_ITEMS_PER_GROUP)+1)

struct ThreadData;

//  also track the work-item offset in clEnqueueNDRangeKernel()
void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void     __VERIFIER_memory_scope_system()       ;
void __VERIFIER_thread__id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_thread_global_id(int global_id)     ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_groupsize(int localWorkSize)    ;

struct ThreadData
{
    int local_id;
    int group_id;
    int global_id;
    int kernel_id;
};


pthread_barrier_t bard;
pthread_barrier_t barg[GROUPS];

#ifdef FAIL1
#define mo1 memory_order_relaxed
#else
#define mo1 memory_order_acquire
#endif

#ifdef FAIL2
#define mo2 memory_order_relaxed
#else
#define mo2 memory_order_release
#endif

#ifdef FAIL3
#define mo3 memory_order_relaxed
#else
#define mo3 memory_order_release
#endif

#ifdef FAIL4
#define mo4 memory_order_relaxed
#else
#define mo4 memory_order_acquire
#endif

atomic_int flag[] = {0, 0, 0, 0, 0, 0, 0, 0};
int in[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};  
int out[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

 void xf_barrier(int global_id, int group_id, int local_id, int kernel_id) {
    unsigned int num_groups = NBLOCKS;

    unsigned int _id = global_id;
    unsigned int _size = NBLOCKS * NTHREADS;

    __VERIFIER_memory_scope_system();
    in[_id] = 1;

    if (group_id == 0) {
        if (local_id + 1 < num_groups) {
            // __VERIFIER_memory_scope_device();
            // while (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){};
            __VERIFIER_memory_scope_device();
            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                 __VERIFIER_memory_scope_device();
                if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                    __VERIFIER_memory_scope_device();
                    if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                        __VERIFIER_memory_scope_device();
                        if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                    if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                        if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
           
            
        }
        // barrier(CLK__MEM_FENCE);
        __VERIFIER_memory_scope_work_group();
        int rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
        if (local_id + 1 < num_groups) {
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&flag[local_id + 1], 0, mo2);
        }
    } else {
        // barrier(CLK__MEM_FENCE);
        __VERIFIER_memory_scope_work_group();
        int rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
        if (local_id == 0) {
            __VERIFIER_memory_scope_device();
            atomic_store_explicit(&flag[group_id], 1, mo3);
            // __VERIFIER_memory_scope_device();
            // while (atomic_load_explicit(&flag[group_id], mo4) == 1){};
            //  __VERIFIER_memory_scope_device();
            // if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //      __VERIFIER_memory_scope_device();
            //     if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //         __VERIFIER_memory_scope_device();
            //         if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //             __VERIFIER_memory_scope_device();
            //             if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){};
            //         }
            //     }
            // }
            __VERIFIER_memory_scope_device();
            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                 __VERIFIER_memory_scope_device();
                if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                    __VERIFIER_memory_scope_device();
                    if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                        __VERIFIER_memory_scope_device();
                        if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                    if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                        if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
                                            if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){

                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }

        }
        // barrier(CLK__MEM_FENCE);
        __VERIFIER_memory_scope_work_group();
        rc = pthread_barrier_wait(&barg[group_id]);
        if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
            printf("Could not wait on barrier\n");
            pthread_exit(NULL);
        }
    }
    __VERIFIER_memory_scope_system();
    for (unsigned int i = 0; i < _size; i++) {
        out[_id] += in[i];
    }
}


void *kernel00(void *arg) {
    xf_barrier(0, 0, 0, 0);
    return NULL;
}

void *kernel01(void *arg) {
    xf_barrier(1, 0, 1, 0);
    return NULL;
}

void *kernel02(void *arg) {
    xf_barrier(2, 0, 2, 0);
    return NULL;
}

void *kernel10(void *arg) {
    xf_barrier(3, 1, 0, 0);
    return NULL;
}
void *kernel11(void *arg) {
    xf_barrier(4, 1, 1, 0);
    return NULL;
}

void *kernel12(void *arg) {
    xf_barrier(5, 1, 2, 0);
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
    // if (pthread_barrier_init(&barg[3], NULL, 2)) {
    //     printf("Could not create a barrier\n");
    //     return -1;
    // }
    pthread_create(&workItems[0], NULL, kernel00,  NULL);
    pthread_create(&workItems[1], NULL, kernel01,  NULL);
    pthread_create(&workItems[2], NULL, kernel10, NULL);
    pthread_create(&workItems[3], NULL, kernel11, NULL);
    pthread_create(&workItems[4], NULL, kernel02, NULL);
    pthread_create(&workItems[5], NULL, kernel12, NULL);
    // pthread_create(&workItems[6], NULL, kernel30, NULL);
    // pthread_create(&workItems[7], NULL, kernel31, NULL);


    //joinall
    // for(int i=0 ; i < 8 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

