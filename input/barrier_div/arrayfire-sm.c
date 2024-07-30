
#include <assert.h>
#include <stdint.h>
#include <stdatomic.h>
#include <pthread.h>
#include <stdio.h>
#include <limits.h>


#define B 1
#define T 256

#define NBLOCKS B
#define NTHREADS T

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
pthread_barrier_t barg[2];


atomic_int s_dist[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 
44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 
68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 
92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 
 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 
 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 
 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 
 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 
 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 
 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 
 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259, 
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};


atomic_int s_idx[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 
44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 
68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 
92, 93, 94, 95, 96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112,
 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 
 132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149, 150, 
 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167, 168, 169, 
 170, 171, 172, 173, 174, 175, 176, 177, 178, 179, 180, 181, 182, 183, 184, 185, 186, 187, 188, 
 189, 190, 191, 192, 193, 194, 195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 
 208, 209, 210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224, 225, 226, 
 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239, 240, 241, 242, 243, 244, 245, 
 246, 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257, 258, 259,
 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };


void select_matches(int global_id, int group_id, int local_id_x, int local_id_y, int kernel_id)
{
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);
    // unsigned f = blockIdx.x * blockDim.x + threadIdx.x;
    unsigned f = group_id * 16 + local_id_x;
    // unsigned sid = threadIdx.x * blockDim.y + thredIdx.y;
    unsigned sid = local_id_x * 16 + local_id_y;


    // Reduce best matches and find the best of them all
    for (unsigned i = 16 / 2; i > 0; i >>= 1) {
        if (local_id_y < i) {
          __VERIFIER_memory_scope_device();
            int dist = s_dist[sid + i];
            __VERIFIER_memory_scope_device();
            if (dist < s_dist[sid]) {
              __VERIFIER_memory_scope_device();
                s_dist[sid] = dist;
                __VERIFIER_memory_scope_device();
                s_idx[sid]  = s_idx[sid + i];
            }
            // __syncthreads();
            __VERIFIER_memory_scope_work_group();
            int rc = pthread_barrier_wait(&barg[0]);
            if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {
                printf("Could not wait on barrier\n");
            pthread_exit(NULL);
            }

        }
    }

}

void *t0( void *arg){select_matches(0, 0, 0, 0, 0);return NULL;}
void *t1( void *arg){select_matches(1, 0, 0, 1, 0);return NULL;}
void *t2( void *arg){select_matches(2, 0, 0, 2, 0);return NULL;}
void *t3( void *arg){select_matches(3, 0, 0, 3, 0);return NULL;}
void *t4( void *arg){select_matches(4, 0, 0, 4, 0);return NULL;}
void *t5( void *arg){select_matches(5, 0, 0, 5, 0);return NULL;}
void *t6( void *arg){select_matches(6, 0, 0, 6, 0);return NULL;}
void *t7( void *arg){select_matches(7, 0, 0, 7, 0);return NULL;}
void *t8( void *arg){select_matches(8, 0, 0, 8, 0);return NULL;}
void *t9( void *arg){select_matches(9, 0, 0, 9, 0);return NULL;}
void *t10( void *arg){select_matches(10, 0, 0, 10, 0);return NULL;}
void *t11( void *arg){select_matches(11, 0, 0, 11, 0);return NULL;}
void *t12( void *arg){select_matches(12, 0, 0, 12, 0);return NULL;}
void *t13( void *arg){select_matches(13, 0, 0, 13, 0);return NULL;}
void *t14( void *arg){select_matches(14, 0, 0, 14, 0);return NULL;}
void *t15( void *arg){select_matches(15, 0, 0, 15, 0);return NULL;}
void *t16( void *arg){select_matches(16, 0, 1, 0, 0);return NULL;}
void *t17( void *arg){select_matches(17, 0, 1, 1, 0);return NULL;}
void *t18( void *arg){select_matches(18, 0, 1, 2, 0);return NULL;}
void *t19( void *arg){select_matches(19, 0, 1, 3, 0);return NULL;}
void *t20( void *arg){select_matches(20, 0, 1, 4, 0);return NULL;}
void *t21( void *arg){select_matches(21, 0, 1, 5, 0);return NULL;}
void *t22( void *arg){select_matches(22, 0, 1, 6, 0);return NULL;}
void *t23( void *arg){select_matches(23, 0, 1, 7, 0);return NULL;}
void *t24( void *arg){select_matches(24, 0, 1, 8, 0);return NULL;}
void *t25( void *arg){select_matches(25, 0, 1, 9, 0);return NULL;}
void *t26( void *arg){select_matches(26, 0, 1, 10, 0);return NULL;}
void *t27( void *arg){select_matches(27, 0, 1, 11, 0);return NULL;}
void *t28( void *arg){select_matches(28, 0, 1, 12, 0);return NULL;}
void *t29( void *arg){select_matches(29, 0, 1, 13, 0);return NULL;}
void *t30( void *arg){select_matches(30, 0, 1, 14, 0);return NULL;}
void *t31( void *arg){select_matches(31, 0, 1, 15, 0);return NULL;}
void *t32( void *arg){select_matches(32, 0, 2, 0, 0);return NULL;}
void *t33( void *arg){select_matches(33, 0, 2, 1, 0);return NULL;}
void *t34( void *arg){select_matches(34, 0, 2, 2, 0);return NULL;}
void *t35( void *arg){select_matches(35, 0, 2, 3, 0);return NULL;}
void *t36( void *arg){select_matches(36, 0, 2, 4, 0);return NULL;}
void *t37( void *arg){select_matches(37, 0, 2, 5, 0);return NULL;}
void *t38( void *arg){select_matches(38, 0, 2, 6, 0);return NULL;}
void *t39( void *arg){select_matches(39, 0, 2, 7, 0);return NULL;}
void *t40( void *arg){select_matches(40, 0, 2, 8, 0);return NULL;}
void *t41( void *arg){select_matches(41, 0, 2, 9, 0);return NULL;}
void *t42( void *arg){select_matches(42, 0, 2, 10, 0);return NULL;}
void *t43( void *arg){select_matches(43, 0, 2, 11, 0);return NULL;}
void *t44( void *arg){select_matches(44, 0, 2, 12, 0);return NULL;}
void *t45( void *arg){select_matches(45, 0, 2, 13, 0);return NULL;}
void *t46( void *arg){select_matches(46, 0, 2, 14, 0);return NULL;}
void *t47( void *arg){select_matches(47, 0, 2, 15, 0);return NULL;}
void *t48( void *arg){select_matches(48, 0, 3, 0, 0);return NULL;}
void *t49( void *arg){select_matches(49, 0, 3, 1, 0);return NULL;}
void *t50( void *arg){select_matches(50, 0, 3, 2, 0);return NULL;}
void *t51( void *arg){select_matches(51, 0, 3, 3, 0);return NULL;}
void *t52( void *arg){select_matches(52, 0, 3, 4, 0);return NULL;}
void *t53( void *arg){select_matches(53, 0, 3, 5, 0);return NULL;}
void *t54( void *arg){select_matches(54, 0, 3, 6, 0);return NULL;}
void *t55( void *arg){select_matches(55, 0, 3, 7, 0);return NULL;}
void *t56( void *arg){select_matches(56, 0, 3, 8, 0);return NULL;}
void *t57( void *arg){select_matches(57, 0, 3, 9, 0);return NULL;}
void *t58( void *arg){select_matches(58, 0, 3, 10, 0);return NULL;}
void *t59( void *arg){select_matches(59, 0, 3, 11, 0);return NULL;}
void *t60( void *arg){select_matches(60, 0, 3, 12, 0);return NULL;}
void *t61( void *arg){select_matches(61, 0, 3, 13, 0);return NULL;}
void *t62( void *arg){select_matches(62, 0, 3, 14, 0);return NULL;}
void *t63( void *arg){select_matches(63, 0, 3, 15, 0);return NULL;}
void *t64( void *arg){select_matches(64, 0, 4, 0, 0);return NULL;}
void *t65( void *arg){select_matches(65, 0, 4, 1, 0);return NULL;}
void *t66( void *arg){select_matches(66, 0, 4, 2, 0);return NULL;}
void *t67( void *arg){select_matches(67, 0, 4, 3, 0);return NULL;}
void *t68( void *arg){select_matches(68, 0, 4, 4, 0);return NULL;}
void *t69( void *arg){select_matches(69, 0, 4, 5, 0);return NULL;}
void *t70( void *arg){select_matches(70, 0, 4, 6, 0);return NULL;}
void *t71( void *arg){select_matches(71, 0, 4, 7, 0);return NULL;}
void *t72( void *arg){select_matches(72, 0, 4, 8, 0);return NULL;}
void *t73( void *arg){select_matches(73, 0, 4, 9, 0);return NULL;}
void *t74( void *arg){select_matches(74, 0, 4, 10, 0);return NULL;}
void *t75( void *arg){select_matches(75, 0, 4, 11, 0);return NULL;}
void *t76( void *arg){select_matches(76, 0, 4, 12, 0);return NULL;}
void *t77( void *arg){select_matches(77, 0, 4, 13, 0);return NULL;}
void *t78( void *arg){select_matches(78, 0, 4, 14, 0);return NULL;}
void *t79( void *arg){select_matches(79, 0, 4, 15, 0);return NULL;}
void *t80( void *arg){select_matches(80, 0, 5, 0, 0);return NULL;}
void *t81( void *arg){select_matches(81, 0, 5, 1, 0);return NULL;}
void *t82( void *arg){select_matches(82, 0, 5, 2, 0);return NULL;}
void *t83( void *arg){select_matches(83, 0, 5, 3, 0);return NULL;}
void *t84( void *arg){select_matches(84, 0, 5, 4, 0);return NULL;}
void *t85( void *arg){select_matches(85, 0, 5, 5, 0);return NULL;}
void *t86( void *arg){select_matches(86, 0, 5, 6, 0);return NULL;}
void *t87( void *arg){select_matches(87, 0, 5, 7, 0);return NULL;}
void *t88( void *arg){select_matches(88, 0, 5, 8, 0);return NULL;}
void *t89( void *arg){select_matches(89, 0, 5, 9, 0);return NULL;}
void *t90( void *arg){select_matches(90, 0, 5, 10, 0);return NULL;}
void *t91( void *arg){select_matches(91, 0, 5, 11, 0);return NULL;}
void *t92( void *arg){select_matches(92, 0, 5, 12, 0);return NULL;}
void *t93( void *arg){select_matches(93, 0, 5, 13, 0);return NULL;}
void *t94( void *arg){select_matches(94, 0, 5, 14, 0);return NULL;}
void *t95( void *arg){select_matches(95, 0, 5, 15, 0);return NULL;}
void *t96( void *arg){select_matches(96, 0, 6, 0, 0);return NULL;}
void *t97( void *arg){select_matches(97, 0, 6, 1, 0);return NULL;}
void *t98( void *arg){select_matches(98, 0, 6, 2, 0);return NULL;}
void *t99( void *arg){select_matches(99, 0, 6, 3, 0);return NULL;}
void *t100( void *arg){select_matches(100, 0, 6, 4, 0);return NULL;}
void *t101( void *arg){select_matches(101, 0, 6, 5, 0);return NULL;}
void *t102( void *arg){select_matches(102, 0, 6, 6, 0);return NULL;}
void *t103( void *arg){select_matches(103, 0, 6, 7, 0);return NULL;}
void *t104( void *arg){select_matches(104, 0, 6, 8, 0);return NULL;}
void *t105( void *arg){select_matches(105, 0, 6, 9, 0);return NULL;}
void *t106( void *arg){select_matches(106, 0, 6, 10, 0);return NULL;}
void *t107( void *arg){select_matches(107, 0, 6, 11, 0);return NULL;}
void *t108( void *arg){select_matches(108, 0, 6, 12, 0);return NULL;}
void *t109( void *arg){select_matches(109, 0, 6, 13, 0);return NULL;}
void *t110( void *arg){select_matches(110, 0, 6, 14, 0);return NULL;}
void *t111( void *arg){select_matches(111, 0, 6, 15, 0);return NULL;}
void *t112( void *arg){select_matches(112, 0, 7, 0, 0);return NULL;}
void *t113( void *arg){select_matches(113, 0, 7, 1, 0);return NULL;}
void *t114( void *arg){select_matches(114, 0, 7, 2, 0);return NULL;}
void *t115( void *arg){select_matches(115, 0, 7, 3, 0);return NULL;}
void *t116( void *arg){select_matches(116, 0, 7, 4, 0);return NULL;}
void *t117( void *arg){select_matches(117, 0, 7, 5, 0);return NULL;}
void *t118( void *arg){select_matches(118, 0, 7, 6, 0);return NULL;}
void *t119( void *arg){select_matches(119, 0, 7, 7, 0);return NULL;}
void *t120( void *arg){select_matches(120, 0, 7, 8, 0);return NULL;}
void *t121( void *arg){select_matches(121, 0, 7, 9, 0);return NULL;}
void *t122( void *arg){select_matches(122, 0, 7, 10, 0);return NULL;}
void *t123( void *arg){select_matches(123, 0, 7, 11, 0);return NULL;}
void *t124( void *arg){select_matches(124, 0, 7, 12, 0);return NULL;}
void *t125( void *arg){select_matches(125, 0, 7, 13, 0);return NULL;}
void *t126( void *arg){select_matches(126, 0, 7, 14, 0);return NULL;}
void *t127( void *arg){select_matches(127, 0, 7, 15, 0);return NULL;}
void *t128( void *arg){select_matches(128, 0, 8, 0, 0);return NULL;}
void *t129( void *arg){select_matches(129, 0, 8, 1, 0);return NULL;}
void *t130( void *arg){select_matches(130, 0, 8, 2, 0);return NULL;}
void *t131( void *arg){select_matches(131, 0, 8, 3, 0);return NULL;}
void *t132( void *arg){select_matches(132, 0, 8, 4, 0);return NULL;}
void *t133( void *arg){select_matches(133, 0, 8, 5, 0);return NULL;}
void *t134( void *arg){select_matches(134, 0, 8, 6, 0);return NULL;}
void *t135( void *arg){select_matches(135, 0, 8, 7, 0);return NULL;}
void *t136( void *arg){select_matches(136, 0, 8, 8, 0);return NULL;}
void *t137( void *arg){select_matches(137, 0, 8, 9, 0);return NULL;}
void *t138( void *arg){select_matches(138, 0, 8, 10, 0);return NULL;}
void *t139( void *arg){select_matches(139, 0, 8, 11, 0);return NULL;}
void *t140( void *arg){select_matches(140, 0, 8, 12, 0);return NULL;}
void *t141( void *arg){select_matches(141, 0, 8, 13, 0);return NULL;}
void *t142( void *arg){select_matches(142, 0, 8, 14, 0);return NULL;}
void *t143( void *arg){select_matches(143, 0, 8, 15, 0);return NULL;}
void *t144( void *arg){select_matches(144, 0, 9, 0, 0);return NULL;}
void *t145( void *arg){select_matches(145, 0, 9, 1, 0);return NULL;}
void *t146( void *arg){select_matches(146, 0, 9, 2, 0);return NULL;}
void *t147( void *arg){select_matches(147, 0, 9, 3, 0);return NULL;}
void *t148( void *arg){select_matches(148, 0, 9, 4, 0);return NULL;}
void *t149( void *arg){select_matches(149, 0, 9, 5, 0);return NULL;}
void *t150( void *arg){select_matches(150, 0, 9, 6, 0);return NULL;}
void *t151( void *arg){select_matches(151, 0, 9, 7, 0);return NULL;}
void *t152( void *arg){select_matches(152, 0, 9, 8, 0);return NULL;}
void *t153( void *arg){select_matches(153, 0, 9, 9, 0);return NULL;}
void *t154( void *arg){select_matches(154, 0, 9, 10, 0);return NULL;}
void *t155( void *arg){select_matches(155, 0, 9, 11, 0);return NULL;}
void *t156( void *arg){select_matches(156, 0, 9, 12, 0);return NULL;}
void *t157( void *arg){select_matches(157, 0, 9, 13, 0);return NULL;}
void *t158( void *arg){select_matches(158, 0, 9, 14, 0);return NULL;}
void *t159( void *arg){select_matches(159, 0, 9, 15, 0);return NULL;}
void *t160( void *arg){select_matches(160, 0, 10, 0, 0);return NULL;}
void *t161( void *arg){select_matches(161, 0, 10, 1, 0);return NULL;}
void *t162( void *arg){select_matches(162, 0, 10, 2, 0);return NULL;}
void *t163( void *arg){select_matches(163, 0, 10, 3, 0);return NULL;}
void *t164( void *arg){select_matches(164, 0, 10, 4, 0);return NULL;}
void *t165( void *arg){select_matches(165, 0, 10, 5, 0);return NULL;}
void *t166( void *arg){select_matches(166, 0, 10, 6, 0);return NULL;}
void *t167( void *arg){select_matches(167, 0, 10, 7, 0);return NULL;}
void *t168( void *arg){select_matches(168, 0, 10, 8, 0);return NULL;}
void *t169( void *arg){select_matches(169, 0, 10, 9, 0);return NULL;}
void *t170( void *arg){select_matches(170, 0, 10, 10, 0);return NULL;}
void *t171( void *arg){select_matches(171, 0, 10, 11, 0);return NULL;}
void *t172( void *arg){select_matches(172, 0, 10, 12, 0);return NULL;}
void *t173( void *arg){select_matches(173, 0, 10, 13, 0);return NULL;}
void *t174( void *arg){select_matches(174, 0, 10, 14, 0);return NULL;}
void *t175( void *arg){select_matches(175, 0, 10, 15, 0);return NULL;}
void *t176( void *arg){select_matches(176, 0, 11, 0, 0);return NULL;}
void *t177( void *arg){select_matches(177, 0, 11, 1, 0);return NULL;}
void *t178( void *arg){select_matches(178, 0, 11, 2, 0);return NULL;}
void *t179( void *arg){select_matches(179, 0, 11, 3, 0);return NULL;}
void *t180( void *arg){select_matches(180, 0, 11, 4, 0);return NULL;}
void *t181( void *arg){select_matches(181, 0, 11, 5, 0);return NULL;}
void *t182( void *arg){select_matches(182, 0, 11, 6, 0);return NULL;}
void *t183( void *arg){select_matches(183, 0, 11, 7, 0);return NULL;}
void *t184( void *arg){select_matches(184, 0, 11, 8, 0);return NULL;}
void *t185( void *arg){select_matches(185, 0, 11, 9, 0);return NULL;}
void *t186( void *arg){select_matches(186, 0, 11, 10, 0);return NULL;}
void *t187( void *arg){select_matches(187, 0, 11, 11, 0);return NULL;}
void *t188( void *arg){select_matches(188, 0, 11, 12, 0);return NULL;}
void *t189( void *arg){select_matches(189, 0, 11, 13, 0);return NULL;}
void *t190( void *arg){select_matches(190, 0, 11, 14, 0);return NULL;}
void *t191( void *arg){select_matches(191, 0, 11, 15, 0);return NULL;}
void *t192( void *arg){select_matches(192, 0, 12, 0, 0);return NULL;}
void *t193( void *arg){select_matches(193, 0, 12, 1, 0);return NULL;}
void *t194( void *arg){select_matches(194, 0, 12, 2, 0);return NULL;}
void *t195( void *arg){select_matches(195, 0, 12, 3, 0);return NULL;}
void *t196( void *arg){select_matches(196, 0, 12, 4, 0);return NULL;}
void *t197( void *arg){select_matches(197, 0, 12, 5, 0);return NULL;}
void *t198( void *arg){select_matches(198, 0, 12, 6, 0);return NULL;}
void *t199( void *arg){select_matches(199, 0, 12, 7, 0);return NULL;}
void *t200( void *arg){select_matches(200, 0, 12, 8, 0);return NULL;}
void *t201( void *arg){select_matches(201, 0, 12, 9, 0);return NULL;}
void *t202( void *arg){select_matches(202, 0, 12, 10, 0);return NULL;}
void *t203( void *arg){select_matches(203, 0, 12, 11, 0);return NULL;}
void *t204( void *arg){select_matches(204, 0, 12, 12, 0);return NULL;}
void *t205( void *arg){select_matches(205, 0, 12, 13, 0);return NULL;}
void *t206( void *arg){select_matches(206, 0, 12, 14, 0);return NULL;}
void *t207( void *arg){select_matches(207, 0, 12, 15, 0);return NULL;}
void *t208( void *arg){select_matches(208, 0, 13, 0, 0);return NULL;}
void *t209( void *arg){select_matches(209, 0, 13, 1, 0);return NULL;}
void *t210( void *arg){select_matches(210, 0, 13, 2, 0);return NULL;}
void *t211( void *arg){select_matches(211, 0, 13, 3, 0);return NULL;}
void *t212( void *arg){select_matches(212, 0, 13, 4, 0);return NULL;}
void *t213( void *arg){select_matches(213, 0, 13, 5, 0);return NULL;}
void *t214( void *arg){select_matches(214, 0, 13, 6, 0);return NULL;}
void *t215( void *arg){select_matches(215, 0, 13, 7, 0);return NULL;}
void *t216( void *arg){select_matches(216, 0, 13, 8, 0);return NULL;}
void *t217( void *arg){select_matches(217, 0, 13, 9, 0);return NULL;}
void *t218( void *arg){select_matches(218, 0, 13, 10, 0);return NULL;}
void *t219( void *arg){select_matches(219, 0, 13, 11, 0);return NULL;}
void *t220( void *arg){select_matches(220, 0, 13, 12, 0);return NULL;}
void *t221( void *arg){select_matches(221, 0, 13, 13, 0);return NULL;}
void *t222( void *arg){select_matches(222, 0, 13, 14, 0);return NULL;}
void *t223( void *arg){select_matches(223, 0, 13, 15, 0);return NULL;}
void *t224( void *arg){select_matches(224, 0, 14, 0, 0);return NULL;}
void *t225( void *arg){select_matches(225, 0, 14, 1, 0);return NULL;}
void *t226( void *arg){select_matches(226, 0, 14, 2, 0);return NULL;}
void *t227( void *arg){select_matches(227, 0, 14, 3, 0);return NULL;}
void *t228( void *arg){select_matches(228, 0, 14, 4, 0);return NULL;}
void *t229( void *arg){select_matches(229, 0, 14, 5, 0);return NULL;}
void *t230( void *arg){select_matches(230, 0, 14, 6, 0);return NULL;}
void *t231( void *arg){select_matches(231, 0, 14, 7, 0);return NULL;}
void *t232( void *arg){select_matches(232, 0, 14, 8, 0);return NULL;}
void *t233( void *arg){select_matches(233, 0, 14, 9, 0);return NULL;}
void *t234( void *arg){select_matches(234, 0, 14, 10, 0);return NULL;}
void *t235( void *arg){select_matches(235, 0, 14, 11, 0);return NULL;}
void *t236( void *arg){select_matches(236, 0, 14, 12, 0);return NULL;}
void *t237( void *arg){select_matches(237, 0, 14, 13, 0);return NULL;}
void *t238( void *arg){select_matches(238, 0, 14, 14, 0);return NULL;}
void *t239( void *arg){select_matches(239, 0, 14, 15, 0);return NULL;}
void *t240( void *arg){select_matches(240, 0, 15, 0, 0);return NULL;}
void *t241( void *arg){select_matches(241, 0, 15, 1, 0);return NULL;}
void *t242( void *arg){select_matches(242, 0, 15, 2, 0);return NULL;}
void *t243( void *arg){select_matches(243, 0, 15, 3, 0);return NULL;}
void *t244( void *arg){select_matches(244, 0, 15, 4, 0);return NULL;}
void *t245( void *arg){select_matches(245, 0, 15, 5, 0);return NULL;}
void *t246( void *arg){select_matches(246, 0, 15, 6, 0);return NULL;}
void *t247( void *arg){select_matches(247, 0, 15, 7, 0);return NULL;}
void *t248( void *arg){select_matches(248, 0, 15, 8, 0);return NULL;}
void *t249( void *arg){select_matches(249, 0, 15, 9, 0);return NULL;}
void *t250( void *arg){select_matches(250, 0, 15, 10, 0);return NULL;}
void *t251( void *arg){select_matches(251, 0, 15, 11, 0);return NULL;}
void *t252( void *arg){select_matches(252, 0, 15, 12, 0);return NULL;}
void *t253( void *arg){select_matches(253, 0, 15, 13, 0);return NULL;}
void *t254( void *arg){select_matches(254, 0, 15, 14, 0);return NULL;}
void *t255( void *arg){select_matches(255, 0, 15, 15, 0);return NULL;}

int main(int argc, char **argv){

    int globalWorkSize = WORK_ITEMS_PER_KERNEL;
    int localWorkSize = WORK_ITEMS_PER_GROUP;
    int kernels = 1;
    int totalThreads = kernels * globalWorkSize;

    pthread_t workItems[totalThreads];
    if (pthread_barrier_init(&barg[0], NULL, T)) {
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
    pthread_create(&workItems[16], NULL, t16,  NULL);
    pthread_create(&workItems[17], NULL, t17,  NULL);
    pthread_create(&workItems[18], NULL, t18,  NULL);
    pthread_create(&workItems[19], NULL, t19,  NULL);
    pthread_create(&workItems[20], NULL, t20,  NULL);
    pthread_create(&workItems[21], NULL, t21,  NULL);
    pthread_create(&workItems[22], NULL, t22,  NULL);
    pthread_create(&workItems[23], NULL, t23,  NULL);
    pthread_create(&workItems[24], NULL, t24,  NULL);
    pthread_create(&workItems[25], NULL, t25,  NULL);
    pthread_create(&workItems[26], NULL, t26,  NULL);
    pthread_create(&workItems[27], NULL, t27,  NULL);
    pthread_create(&workItems[28], NULL, t28,  NULL);
    pthread_create(&workItems[29], NULL, t29,  NULL);
    pthread_create(&workItems[30], NULL, t30,  NULL);
    pthread_create(&workItems[31], NULL, t31,  NULL);
    pthread_create(&workItems[32], NULL, t32,  NULL);
    pthread_create(&workItems[33], NULL, t33,  NULL);
    pthread_create(&workItems[34], NULL, t34,  NULL);
    pthread_create(&workItems[35], NULL, t35,  NULL);
    pthread_create(&workItems[36], NULL, t36,  NULL);
    pthread_create(&workItems[37], NULL, t37,  NULL);
    pthread_create(&workItems[38], NULL, t38,  NULL);
    pthread_create(&workItems[39], NULL, t39,  NULL);
    pthread_create(&workItems[40], NULL, t40,  NULL);
    pthread_create(&workItems[41], NULL, t41,  NULL);
    pthread_create(&workItems[42], NULL, t42,  NULL);
    pthread_create(&workItems[43], NULL, t43,  NULL);
    pthread_create(&workItems[44], NULL, t44,  NULL);
    pthread_create(&workItems[45], NULL, t45,  NULL);
    pthread_create(&workItems[46], NULL, t46,  NULL);
    pthread_create(&workItems[47], NULL, t47,  NULL);
    pthread_create(&workItems[48], NULL, t48,  NULL);
    pthread_create(&workItems[49], NULL, t49,  NULL);
    pthread_create(&workItems[50], NULL, t50,  NULL);
    pthread_create(&workItems[51], NULL, t51,  NULL);
    pthread_create(&workItems[52], NULL, t52,  NULL);
    pthread_create(&workItems[53], NULL, t53,  NULL);
    pthread_create(&workItems[54], NULL, t54,  NULL);
    pthread_create(&workItems[55], NULL, t55,  NULL);
    pthread_create(&workItems[56], NULL, t56,  NULL);
    pthread_create(&workItems[57], NULL, t57,  NULL);
    pthread_create(&workItems[58], NULL, t58,  NULL);
    pthread_create(&workItems[59], NULL, t59,  NULL);
    pthread_create(&workItems[60], NULL, t60,  NULL);
    pthread_create(&workItems[61], NULL, t61,  NULL);
    pthread_create(&workItems[62], NULL, t62,  NULL);
    pthread_create(&workItems[63], NULL, t63,  NULL);
    pthread_create(&workItems[64], NULL, t64,  NULL);
    pthread_create(&workItems[65], NULL, t65,  NULL);
    pthread_create(&workItems[66], NULL, t66,  NULL);
    pthread_create(&workItems[67], NULL, t67,  NULL);
    pthread_create(&workItems[68], NULL, t68,  NULL);
    pthread_create(&workItems[69], NULL, t69,  NULL);
    pthread_create(&workItems[70], NULL, t70,  NULL);
    pthread_create(&workItems[71], NULL, t71,  NULL);
    pthread_create(&workItems[72], NULL, t72,  NULL);
    pthread_create(&workItems[73], NULL, t73,  NULL);
    pthread_create(&workItems[74], NULL, t74,  NULL);
    pthread_create(&workItems[75], NULL, t75,  NULL);
    pthread_create(&workItems[76], NULL, t76,  NULL);
    pthread_create(&workItems[77], NULL, t77,  NULL);
    pthread_create(&workItems[78], NULL, t78,  NULL);
    pthread_create(&workItems[79], NULL, t79,  NULL);
    pthread_create(&workItems[80], NULL, t80,  NULL);
    pthread_create(&workItems[81], NULL, t81,  NULL);
    pthread_create(&workItems[82], NULL, t82,  NULL);
    pthread_create(&workItems[83], NULL, t83,  NULL);
    pthread_create(&workItems[84], NULL, t84,  NULL);
    pthread_create(&workItems[85], NULL, t85,  NULL);
    pthread_create(&workItems[86], NULL, t86,  NULL);
    pthread_create(&workItems[87], NULL, t87,  NULL);
    pthread_create(&workItems[88], NULL, t88,  NULL);
    pthread_create(&workItems[89], NULL, t89,  NULL);
    pthread_create(&workItems[90], NULL, t90,  NULL);
    pthread_create(&workItems[91], NULL, t91,  NULL);
    pthread_create(&workItems[92], NULL, t92,  NULL);
    pthread_create(&workItems[93], NULL, t93,  NULL);
    pthread_create(&workItems[94], NULL, t94,  NULL);
    pthread_create(&workItems[95], NULL, t95,  NULL);
    pthread_create(&workItems[96], NULL, t96,  NULL);
    pthread_create(&workItems[97], NULL, t97,  NULL);
    pthread_create(&workItems[98], NULL, t98,  NULL);
    pthread_create(&workItems[99], NULL, t99,  NULL);
    pthread_create(&workItems[100], NULL, t100,  NULL);
    pthread_create(&workItems[101], NULL, t101,  NULL);
    pthread_create(&workItems[102], NULL, t102,  NULL);
    pthread_create(&workItems[103], NULL, t103,  NULL);
    pthread_create(&workItems[104], NULL, t104,  NULL);
    pthread_create(&workItems[105], NULL, t105,  NULL);
    pthread_create(&workItems[106], NULL, t106,  NULL);
    pthread_create(&workItems[107], NULL, t107,  NULL);
    pthread_create(&workItems[108], NULL, t108,  NULL);
    pthread_create(&workItems[109], NULL, t109,  NULL);
    pthread_create(&workItems[110], NULL, t110,  NULL);
    pthread_create(&workItems[111], NULL, t111,  NULL);
    pthread_create(&workItems[112], NULL, t112,  NULL);
    pthread_create(&workItems[113], NULL, t113,  NULL);
    pthread_create(&workItems[114], NULL, t114,  NULL);
    pthread_create(&workItems[115], NULL, t115,  NULL);
    pthread_create(&workItems[116], NULL, t116,  NULL);
    pthread_create(&workItems[117], NULL, t117,  NULL);
    pthread_create(&workItems[118], NULL, t118,  NULL);
    pthread_create(&workItems[119], NULL, t119,  NULL);
    pthread_create(&workItems[120], NULL, t120,  NULL);
    pthread_create(&workItems[121], NULL, t121,  NULL);
    pthread_create(&workItems[122], NULL, t122,  NULL);
    pthread_create(&workItems[123], NULL, t123,  NULL);
    pthread_create(&workItems[124], NULL, t124,  NULL);
    pthread_create(&workItems[125], NULL, t125,  NULL);
    pthread_create(&workItems[126], NULL, t126,  NULL);
    pthread_create(&workItems[127], NULL, t127,  NULL);
    pthread_create(&workItems[128], NULL, t128,  NULL);
    pthread_create(&workItems[129], NULL, t129,  NULL);
    pthread_create(&workItems[130], NULL, t130,  NULL);
    pthread_create(&workItems[131], NULL, t131,  NULL);
    pthread_create(&workItems[132], NULL, t132,  NULL);
    pthread_create(&workItems[133], NULL, t133,  NULL);
    pthread_create(&workItems[134], NULL, t134,  NULL);
    pthread_create(&workItems[135], NULL, t135,  NULL);
    pthread_create(&workItems[136], NULL, t136,  NULL);
    pthread_create(&workItems[137], NULL, t137,  NULL);
    pthread_create(&workItems[138], NULL, t138,  NULL);
    pthread_create(&workItems[139], NULL, t139,  NULL);
    pthread_create(&workItems[140], NULL, t140,  NULL);
    pthread_create(&workItems[141], NULL, t141,  NULL);
    pthread_create(&workItems[142], NULL, t142,  NULL);
    pthread_create(&workItems[143], NULL, t143,  NULL);
    pthread_create(&workItems[144], NULL, t144,  NULL);
    pthread_create(&workItems[145], NULL, t145,  NULL);
    pthread_create(&workItems[146], NULL, t146,  NULL);
    pthread_create(&workItems[147], NULL, t147,  NULL);
    pthread_create(&workItems[148], NULL, t148,  NULL);
    pthread_create(&workItems[149], NULL, t149,  NULL);
    pthread_create(&workItems[150], NULL, t150,  NULL);
    pthread_create(&workItems[151], NULL, t151,  NULL);
    pthread_create(&workItems[152], NULL, t152,  NULL);
    pthread_create(&workItems[153], NULL, t153,  NULL);
    pthread_create(&workItems[154], NULL, t154,  NULL);
    pthread_create(&workItems[155], NULL, t155,  NULL);
    pthread_create(&workItems[156], NULL, t156,  NULL);
    pthread_create(&workItems[157], NULL, t157,  NULL);
    pthread_create(&workItems[158], NULL, t158,  NULL);
    pthread_create(&workItems[159], NULL, t159,  NULL);
    pthread_create(&workItems[160], NULL, t160,  NULL);
    pthread_create(&workItems[161], NULL, t161,  NULL);
    pthread_create(&workItems[162], NULL, t162,  NULL);
    pthread_create(&workItems[163], NULL, t163,  NULL);
    pthread_create(&workItems[164], NULL, t164,  NULL);
    pthread_create(&workItems[165], NULL, t165,  NULL);
    pthread_create(&workItems[166], NULL, t166,  NULL);
    pthread_create(&workItems[167], NULL, t167,  NULL);
    pthread_create(&workItems[168], NULL, t168,  NULL);
    pthread_create(&workItems[169], NULL, t169,  NULL);
    pthread_create(&workItems[170], NULL, t170,  NULL);
    pthread_create(&workItems[171], NULL, t171,  NULL);
    pthread_create(&workItems[172], NULL, t172,  NULL);
    pthread_create(&workItems[173], NULL, t173,  NULL);
    pthread_create(&workItems[174], NULL, t174,  NULL);
    pthread_create(&workItems[175], NULL, t175,  NULL);
    pthread_create(&workItems[176], NULL, t176,  NULL);
    pthread_create(&workItems[177], NULL, t177,  NULL);
    pthread_create(&workItems[178], NULL, t178,  NULL);
    pthread_create(&workItems[179], NULL, t179,  NULL);
    pthread_create(&workItems[180], NULL, t180,  NULL);
    pthread_create(&workItems[181], NULL, t181,  NULL);
    pthread_create(&workItems[182], NULL, t182,  NULL);
    pthread_create(&workItems[183], NULL, t183,  NULL);
    pthread_create(&workItems[184], NULL, t184,  NULL);
    pthread_create(&workItems[185], NULL, t185,  NULL);
    pthread_create(&workItems[186], NULL, t186,  NULL);
    pthread_create(&workItems[187], NULL, t187,  NULL);
    pthread_create(&workItems[188], NULL, t188,  NULL);
    pthread_create(&workItems[189], NULL, t189,  NULL);
    pthread_create(&workItems[190], NULL, t190,  NULL);
    pthread_create(&workItems[191], NULL, t191,  NULL);
    pthread_create(&workItems[192], NULL, t192,  NULL);
    pthread_create(&workItems[193], NULL, t193,  NULL);
    pthread_create(&workItems[194], NULL, t194,  NULL);
    pthread_create(&workItems[195], NULL, t195,  NULL);
    pthread_create(&workItems[196], NULL, t196,  NULL);
    pthread_create(&workItems[197], NULL, t197,  NULL);
    pthread_create(&workItems[198], NULL, t198,  NULL);
    pthread_create(&workItems[199], NULL, t199,  NULL);
    pthread_create(&workItems[200], NULL, t200,  NULL);
    pthread_create(&workItems[201], NULL, t201,  NULL);
    pthread_create(&workItems[202], NULL, t202,  NULL);
    pthread_create(&workItems[203], NULL, t203,  NULL);
    pthread_create(&workItems[204], NULL, t204,  NULL);
    pthread_create(&workItems[205], NULL, t205,  NULL);
    pthread_create(&workItems[206], NULL, t206,  NULL);
    pthread_create(&workItems[207], NULL, t207,  NULL);
    pthread_create(&workItems[208], NULL, t208,  NULL);
    pthread_create(&workItems[209], NULL, t209,  NULL);
    pthread_create(&workItems[210], NULL, t210,  NULL);
    pthread_create(&workItems[211], NULL, t211,  NULL);
    pthread_create(&workItems[212], NULL, t212,  NULL);
    pthread_create(&workItems[213], NULL, t213,  NULL);
    pthread_create(&workItems[214], NULL, t214,  NULL);
    pthread_create(&workItems[215], NULL, t215,  NULL);
    pthread_create(&workItems[216], NULL, t216,  NULL);
    pthread_create(&workItems[217], NULL, t217,  NULL);
    pthread_create(&workItems[218], NULL, t218,  NULL);
    pthread_create(&workItems[219], NULL, t219,  NULL);
    pthread_create(&workItems[220], NULL, t220,  NULL);
    pthread_create(&workItems[221], NULL, t221,  NULL);
    pthread_create(&workItems[222], NULL, t222,  NULL);
    pthread_create(&workItems[223], NULL, t223,  NULL);
    pthread_create(&workItems[224], NULL, t224,  NULL);
    pthread_create(&workItems[225], NULL, t225,  NULL);
    pthread_create(&workItems[226], NULL, t226,  NULL);
    pthread_create(&workItems[227], NULL, t227,  NULL);
    pthread_create(&workItems[228], NULL, t228,  NULL);
    pthread_create(&workItems[229], NULL, t229,  NULL);
    pthread_create(&workItems[230], NULL, t230,  NULL);
    pthread_create(&workItems[231], NULL, t231,  NULL);
    pthread_create(&workItems[232], NULL, t232,  NULL);
    pthread_create(&workItems[233], NULL, t233,  NULL);
    pthread_create(&workItems[234], NULL, t234,  NULL);
    pthread_create(&workItems[235], NULL, t235,  NULL);
    pthread_create(&workItems[236], NULL, t236,  NULL);
    pthread_create(&workItems[237], NULL, t237,  NULL);
    pthread_create(&workItems[238], NULL, t238,  NULL);
    pthread_create(&workItems[239], NULL, t239,  NULL);
    pthread_create(&workItems[240], NULL, t240,  NULL);
    pthread_create(&workItems[241], NULL, t241,  NULL);
    pthread_create(&workItems[242], NULL, t242,  NULL);
    pthread_create(&workItems[243], NULL, t243,  NULL);
    pthread_create(&workItems[244], NULL, t244,  NULL);
    pthread_create(&workItems[245], NULL, t245,  NULL);
    pthread_create(&workItems[246], NULL, t246,  NULL);
    pthread_create(&workItems[247], NULL, t247,  NULL);
    pthread_create(&workItems[248], NULL, t248,  NULL);
    pthread_create(&workItems[249], NULL, t249,  NULL);
    pthread_create(&workItems[250], NULL, t250,  NULL);
    pthread_create(&workItems[251], NULL, t251,  NULL);
    pthread_create(&workItems[252], NULL, t252,  NULL);
    pthread_create(&workItems[253], NULL, t253,  NULL);
    pthread_create(&workItems[254], NULL, t254,  NULL);
    pthread_create(&workItems[255], NULL, t255,  NULL);    


    // //joinall
    // for(int i=0 ; i < 20 ; i++){
    //     pthread_join(workItems[i] , NULL);
    // }
  return 0;
}

