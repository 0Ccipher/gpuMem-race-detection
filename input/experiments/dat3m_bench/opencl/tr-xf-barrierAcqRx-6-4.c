#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>

#define sc memory_order_seq_cst

#define NBLOCKS 6
#define NTHREADS 4

#define WORK_ITEMS_PER_GROUP NTHREADS
#define WORK_ITEMS_PER_KERNEL (NTHREADS * NBLOCKS)
#define GLOBAL_WORK_OFFSET 0

#define GROUPS NBLOCKS

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

#define FAIL1
// #define FAIL2
// #define FAIL3
#define FAIL4

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
int in[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0};
int out[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0,0,0};

 void xf_barrier(int global_id, int group_id, int local_id, int kernel_id) {
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);

    unsigned int num_groups = NBLOCKS;

    unsigned int _id = global_id;
    unsigned int global_size = NBLOCKS * NTHREADS;

    __VERIFIER_memory_scope_system();
    in[global_id] = 1;

    if (group_id == 0) {
        if (local_id + 1 < num_groups) {
            __VERIFIER_memory_scope_device();
            while (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){};
            // __VERIFIER_memory_scope_device();
            // if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //      __VERIFIER_memory_scope_device();
            //     if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //         __VERIFIER_memory_scope_device();
            //         if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){
            //             __VERIFIER_memory_scope_device();
            //             if (atomic_load_explicit(&flag[local_id + 1], mo1) == 0){return;};
            //         }
            //     }
            // }
           
            
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
            __VERIFIER_memory_scope_device();
            while (atomic_load_explicit(&flag[group_id], mo4) == 1){};
            //  __VERIFIER_memory_scope_device();
            // if (atomic_load_explicit(&flag[group_id], mo1) == 1){
            //      __VERIFIER_memory_scope_device();
            //     if (atomic_load_explicit(&flag[group_id], mo1) == 1){
            //         __VERIFIER_memory_scope_device();
            //         if (atomic_load_explicit(&flag[group_id], mo1) == 1){
            //             __VERIFIER_memory_scope_device();
            //             if (atomic_load_explicit(&flag[group_id], mo1) == 1){return;};
            //         }
            //     }
            // }

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
    for (unsigned int i = 0; i < global_size; i++) {
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

void *kernel03(void *arg) {
    xf_barrier(3, 0, 3, 0);
    return NULL;
}

void *kernel10(void *arg) {
    xf_barrier(4, 1, 0, 0);
    return NULL;
}

void *kernel11(void *arg) {
    xf_barrier(5, 1, 1, 0);
    return NULL;
}

void *kernel12(void *arg) {
    xf_barrier(6, 1, 2, 0);
    return NULL;
}
void *kernel13(void *arg) {
    xf_barrier(7, 1, 3, 0);
    return NULL;
}
void *kernel20(void *arg) {
    xf_barrier(8, 2, 0, 0);
    return NULL;
}
void *kernel21(void *arg) {
    xf_barrier(9, 2, 1, 0);
    return NULL;
}
void *kernel22(void *arg) {
    xf_barrier(10, 2, 2, 0);
    return NULL;
}
void *kernel23(void *arg) {
    xf_barrier(11, 2, 3, 0);
    return NULL;
}
void *kernel30(void *arg) {
    xf_barrier(12, 3, 0, 0);
    return NULL;
}
void *kernel31(void *arg) {
    xf_barrier(13, 3, 1, 0);
    return NULL;
}
void *kernel32(void *arg) {
    xf_barrier(14, 3, 2, 0);
    return NULL;
}
void *kernel33(void *arg) {
    xf_barrier(15, 3, 3, 0);
    return NULL;
}
void *kernel40(void *arg) {
    xf_barrier(16, 4, 0, 0);
    return NULL;
}
void *kernel41(void *arg) {
    xf_barrier(17, 4, 1, 0);
    return NULL;
}
void *kernel42(void *arg) {
    xf_barrier(18, 4, 2, 0);
    return NULL;
}
void *kernel43(void *arg) {
    xf_barrier(19, 4, 3, 0);
    return NULL;
}

void *kernel50(void *arg) {
    xf_barrier(20, 5, 0, 0);
    return NULL;
}
void *kernel51(void *arg) {
    xf_barrier(21, 5, 1, 0);
    return NULL;
}
void *kernel52(void *arg) {
    xf_barrier(22, 5, 2, 0);
    return NULL;
}
void *kernel53(void *arg) {
    xf_barrier(23, 5, 3, 0);
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

