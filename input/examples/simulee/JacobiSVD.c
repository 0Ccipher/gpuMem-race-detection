
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define NBLOCKS 2
#define NTHREADS 8

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

atomic_int acc[512]={1};
atomic_int s_S[16*81]={1};
atomic_int s_V[16*81]={1};
atomic_int S[16*81]={1};
atomic_int V[16*81]={1};
atomic_int d[16*9]={1};


void JacobiSVD(int global_id, int group_id, int local_id_x, int local_id_y, int kernel_id)   //(int* S, int* V, int m, int n)
{ 
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);

    const int iterations = 30;

    int tid_x = local_id_x;// threadIdx.x;
    int bsz_x = 1;// blockDim.x;
    int tid_y = local_id_y;// threadIdx.y;
    int gid_y = group_id * NTHREADS + tid_y; //blockIdx.y * blockDim.y + tid_y;

    atomic_int* acc1 = acc;
    atomic_int* acc2 = acc + 256;

	int n = 10, m = 3;

        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                __VERIFIER_memory_scope_device();
                atomic_int* Si = s_S + tid_y*81 + i*m;
                atomic_int* Sj = s_S + tid_y*81 + j*m;

                int p = (int)0;
                __VERIFIER_memory_scope_device();
                for (int k = 0; k < m; k++)
                    p += Si[k]*Sj[k];

                __VERIFIER_memory_scope_device();
                int y = d[tid_y*9 + i] - d[tid_y*9 + j];
                int r = p*2;
                int r2 = r*2;
                int c, s;
                if (y >= 0) {
                    c = (r + y) / r2;
                    s = r2*c;
                }
                else {
                    s = (r - y) / r2;
                    c = r2*s;
                }

                if (tid_x < m) {
                    __VERIFIER_memory_scope_device();
                    int t0 = c*Si[tid_x] + s*Sj[tid_x];
                    __VERIFIER_memory_scope_device();
                    int t1 = c*Sj[tid_x] - s*Si[tid_x];
                    __VERIFIER_memory_scope_device();
                    Si[tid_x] = t0;
                    Sj[tid_x] = t1;
                    __VERIFIER_memory_scope_device();
                    acc1[tid_y*16 + tid_x] = t0*t0;
                    acc2[tid_y*16 + tid_x] = t1*t1;
                }
			}
             // __syncthreads();
            __VERIFIER_memory_scope_work_group();
            int rc = pthread_barrier_wait(&barg[group_id]);
            if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
                printf("Could not wait on barrier\n");
            pthread_exit(NULL);
            }
        }
     // __syncthreads();
    __VERIFIER_memory_scope_work_group();
    int rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
    pthread_exit(NULL);
    }
    __VERIFIER_memory_scope_device();
    for (int i = 0; i <= 4; i++)
        V[gid_y * 81 + tid_x+i*bsz_x] = s_V[tid_y * 81 + tid_x+i*bsz_x];
    __VERIFIER_memory_scope_device();
    if (tid_x == 0)
        V[gid_y * 81 + 80] = s_V[tid_y * 81 + 80];

    // __syncthreads();
    __VERIFIER_memory_scope_work_group();
    rc = pthread_barrier_wait(&barg[group_id]);
    if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
        printf("Could not wait on barrier\n");
    pthread_exit(NULL);
    }
}


void *t0( void *arg){JacobiSVD(0, 0, 0, 0, 0);return NULL;}
void *t1( void *arg){JacobiSVD(1, 0, 0, 1, 0);return NULL;}
void *t2( void *arg){JacobiSVD(2, 0, 0, 2, 0);return NULL;}
void *t3( void *arg){JacobiSVD(3, 0, 0, 3, 0);return NULL;}
void *t4( void *arg){JacobiSVD(4, 0, 0, 4, 0);return NULL;}
void *t5( void *arg){JacobiSVD(5, 0, 0, 5, 0);return NULL;}
void *t6( void *arg){JacobiSVD(6, 0, 0, 6, 0);return NULL;}
void *t7( void *arg){JacobiSVD(7, 0, 0, 7, 0);return NULL;}
  void *t8( void *arg){JacobiSVD(8, 1, 0, 0, 0);return NULL;}
  void *t9( void *arg){JacobiSVD(9, 1, 0, 1, 0);return NULL;}
void *t10( void *arg){JacobiSVD(10, 1, 0, 2, 0);return NULL;}
void *t11( void *arg){JacobiSVD(11, 1, 0, 3, 0);return NULL;}
void *t12( void *arg){JacobiSVD(12, 1, 0, 4, 0);return NULL;}
void *t13( void *arg){JacobiSVD(13, 1, 0, 5, 0);return NULL;}
void *t14( void *arg){JacobiSVD(14, 1, 0, 6, 0);return NULL;}
void *t15( void *arg){JacobiSVD(15, 1, 0, 7, 0);return NULL;}


int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    pthread_t workItems[totalThreads];
    if (pthread_barrier_init(&barg[0], NULL, NTHREADS)) {
        printf("Could not create a barrier\n");
        return -1;
    }
     if (pthread_barrier_init(&barg[1], NULL, NTHREADS)) {
        printf("Could not create a barrier\n");
        return -1;
    }
    pthread_create(&workItems[0], NULL, t0,  NULL);
    pthread_create(&workItems[1], NULL, t1,  NULL);
    pthread_create(&workItems[2], NULL, t2,  NULL);
    pthread_create(&workItems[3], NULL, t3,  NULL);
    pthread_create(&workItems[4], NULL, t4,  NULL);
    pthread_create(&workItems[5], NULL, t5,  NULL);
    pthread_create(&workItems[6], NULL, t6,  NULL);
    pthread_create(&workItems[7], NULL, t7,  NULL);
    pthread_create(&workItems[8], NULL, t8,  NULL);
    pthread_create(&workItems[9], NULL, t9,  NULL);
    pthread_create(&workItems[10], NULL, t10,  NULL);
    pthread_create(&workItems[11], NULL, t11,  NULL);
    pthread_create(&workItems[12], NULL, t12,  NULL);
    pthread_create(&workItems[13], NULL, t13,  NULL);
    pthread_create(&workItems[14], NULL, t14,  NULL);
    pthread_create(&workItems[15], NULL, t15,  NULL);

    return 0;
}
