#include <pthread.h>
#include <stdatomic.h>
#include <assert.h>

void __VERIFIER_memory_scope_work_group()       ;
void __VERIFIER_memory_scope_device()           ;
void __VERIFIER_thread_global_id(int a)         ;
void __VERIFIER_thread_local_id(int a)          ;
void __VERIFIER_thread_group_id(int a)          ;
void __VERIFIER_thread_kernel_id(int a)         ;
void __VERIFIER_syncthread()                    ;
void __VERIFIER_memory_scope_system()           ;
void __VERIFIER_weak_access()                   ;
void __VERIFIER_ret_CAS()                       ;
void __VERIFIER_groupsize(int localWorkSize)    ;
atomic_int vars[8]; 
atomic_int atom_8_r0_1_eq; 
atomic_int atom_8_r1_0_eq; 
atomic_int atom_8_r2_0_eq; 
atomic_int atom_8_r3_0_eq; 
atomic_int atom_8_r4_0_eq; 
atomic_int atom_8_r5_0_eq; 
atomic_int atom_8_r6_0_eq; 
atomic_int atom_8_r7_0_eq; 
atomic_int atom_9_r0_0_eq; 
atomic_int atom_9_r1_1_eq; 
atomic_int atom_9_r2_0_eq; 
atomic_int atom_9_r3_0_eq; 
atomic_int atom_9_r4_0_eq; 
atomic_int atom_9_r5_0_eq; 
atomic_int atom_9_r6_0_eq; 
atomic_int atom_9_r7_0_eq; 
atomic_int atom_10_r0_0_eq; 
atomic_int atom_10_r1_0_eq; 
atomic_int atom_10_r2_1_eq; 
atomic_int atom_10_r3_0_eq; 
atomic_int atom_10_r4_0_eq; 
atomic_int atom_10_r5_0_eq; 
atomic_int atom_10_r6_0_eq; 
atomic_int atom_10_r7_0_eq; 
atomic_int atom_11_r0_0_eq; 
atomic_int atom_11_r1_0_eq; 
atomic_int atom_11_r2_0_eq; 
atomic_int atom_11_r3_1_eq; 
atomic_int atom_11_r4_0_eq; 
atomic_int atom_11_r5_0_eq; 
atomic_int atom_11_r6_0_eq; 
atomic_int atom_11_r7_0_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_1_eq; 
atomic_int atom_12_r5_0_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_12_r7_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_0_eq; 
atomic_int atom_13_r2_0_eq; 
atomic_int atom_13_r3_0_eq; 
atomic_int atom_13_r4_0_eq; 
atomic_int atom_13_r5_1_eq; 
atomic_int atom_13_r6_0_eq; 
atomic_int atom_13_r7_0_eq; 
atomic_int atom_14_r0_0_eq; 
atomic_int atom_14_r1_0_eq; 
atomic_int atom_14_r2_0_eq; 
atomic_int atom_14_r3_0_eq; 
atomic_int atom_14_r4_0_eq; 
atomic_int atom_14_r5_0_eq; 
atomic_int atom_14_r6_1_eq; 
atomic_int atom_14_r7_0_eq; 
atomic_int atom_15_r0_0_eq; 
atomic_int atom_15_r1_0_eq; 
atomic_int atom_15_r2_0_eq; 
atomic_int atom_15_r3_0_eq; 
atomic_int atom_15_r4_0_eq; 
atomic_int atom_15_r5_0_eq; 
atomic_int atom_15_r6_0_eq; 
atomic_int atom_15_r7_1_eq; 



void *t0(void *arg){
label_1:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(0);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[0], 1, memory_order_release);
  return NULL;
}




void *t1(void *arg){
label_2:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(1);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[1], 1, memory_order_release);
  return NULL;
}




void *t2(void *arg){
label_3:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(2);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[2], 1, memory_order_release);
  return NULL;
}




void *t3(void *arg){
label_4:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(3);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[3], 1, memory_order_release);
  return NULL;
}




void *t4(void *arg){
label_5:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(4);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[4], 1, memory_order_release);
  return NULL;
}




void *t5(void *arg){
label_6:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(5);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[5], 1, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[6], 1, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  atomic_store_explicit(&vars[7], 1, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v8_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v10_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v12_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v14_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v256 = (v2_r0==1);
  atomic_store_explicit(&atom_8_r0_1_eq, v256, memory_order_release);
  int v257 = (v4_r1==0);
  atomic_store_explicit(&atom_8_r1_0_eq, v257, memory_order_release);
  int v258 = (v6_r2==0);
  atomic_store_explicit(&atom_8_r2_0_eq, v258, memory_order_release);
  int v259 = (v8_r3==0);
  atomic_store_explicit(&atom_8_r3_0_eq, v259, memory_order_release);
  int v260 = (v10_r4==0);
  atomic_store_explicit(&atom_8_r4_0_eq, v260, memory_order_release);
  int v261 = (v12_r5==0);
  atomic_store_explicit(&atom_8_r5_0_eq, v261, memory_order_release);
  int v262 = (v14_r6==0);
  atomic_store_explicit(&atom_8_r6_0_eq, v262, memory_order_release);
  int v263 = (v16_r7==0);
  atomic_store_explicit(&atom_8_r7_0_eq, v263, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v18_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v20_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v264 = (v20_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v264, memory_order_release);
  int v265 = (v18_r1==1);
  atomic_store_explicit(&atom_9_r1_1_eq, v265, memory_order_release);
  int v266 = (v22_r2==0);
  atomic_store_explicit(&atom_9_r2_0_eq, v266, memory_order_release);
  int v267 = (v24_r3==0);
  atomic_store_explicit(&atom_9_r3_0_eq, v267, memory_order_release);
  int v268 = (v26_r4==0);
  atomic_store_explicit(&atom_9_r4_0_eq, v268, memory_order_release);
  int v269 = (v28_r5==0);
  atomic_store_explicit(&atom_9_r5_0_eq, v269, memory_order_release);
  int v270 = (v30_r6==0);
  atomic_store_explicit(&atom_9_r6_0_eq, v270, memory_order_release);
  int v271 = (v32_r7==0);
  atomic_store_explicit(&atom_9_r7_0_eq, v271, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v34_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v272 = (v38_r0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v272, memory_order_release);
  int v273 = (v36_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v273, memory_order_release);
  int v274 = (v34_r2==1);
  atomic_store_explicit(&atom_10_r2_1_eq, v274, memory_order_release);
  int v275 = (v40_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v275, memory_order_release);
  int v276 = (v42_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v276, memory_order_release);
  int v277 = (v44_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v277, memory_order_release);
  int v278 = (v46_r6==0);
  atomic_store_explicit(&atom_10_r6_0_eq, v278, memory_order_release);
  int v279 = (v48_r7==0);
  atomic_store_explicit(&atom_10_r7_0_eq, v279, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v50_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v280 = (v56_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v280, memory_order_release);
  int v281 = (v52_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v281, memory_order_release);
  int v282 = (v54_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v282, memory_order_release);
  int v283 = (v50_r3==1);
  atomic_store_explicit(&atom_11_r3_1_eq, v283, memory_order_release);
  int v284 = (v58_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v284, memory_order_release);
  int v285 = (v60_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v285, memory_order_release);
  int v286 = (v62_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v286, memory_order_release);
  int v287 = (v64_r7==0);
  atomic_store_explicit(&atom_11_r7_0_eq, v287, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v66_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v74_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v288 = (v74_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v288, memory_order_release);
  int v289 = (v68_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v289, memory_order_release);
  int v290 = (v70_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v290, memory_order_release);
  int v291 = (v72_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v291, memory_order_release);
  int v292 = (v66_r4==1);
  atomic_store_explicit(&atom_12_r4_1_eq, v292, memory_order_release);
  int v293 = (v76_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v293, memory_order_release);
  int v294 = (v78_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v294, memory_order_release);
  int v295 = (v80_r7==0);
  atomic_store_explicit(&atom_12_r7_0_eq, v295, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v82_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v86_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v296 = (v92_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v296, memory_order_release);
  int v297 = (v84_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v297, memory_order_release);
  int v298 = (v86_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v298, memory_order_release);
  int v299 = (v88_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v299, memory_order_release);
  int v300 = (v90_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v300, memory_order_release);
  int v301 = (v82_r5==1);
  atomic_store_explicit(&atom_13_r5_1_eq, v301, memory_order_release);
  int v302 = (v94_r6==0);
  atomic_store_explicit(&atom_13_r6_0_eq, v302, memory_order_release);
  int v303 = (v96_r7==0);
  atomic_store_explicit(&atom_13_r7_0_eq, v303, memory_order_release);
  return NULL;
}




void *t14(void *arg){
label_15:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(14);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v98_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v100_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v102_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v104_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v106_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v108_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v110_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v112_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
  int v304 = (v110_r0==0);
  atomic_store_explicit(&atom_14_r0_0_eq, v304, memory_order_release);
  int v305 = (v100_r1==0);
  atomic_store_explicit(&atom_14_r1_0_eq, v305, memory_order_release);
  int v306 = (v102_r2==0);
  atomic_store_explicit(&atom_14_r2_0_eq, v306, memory_order_release);
  int v307 = (v104_r3==0);
  atomic_store_explicit(&atom_14_r3_0_eq, v307, memory_order_release);
  int v308 = (v106_r4==0);
  atomic_store_explicit(&atom_14_r4_0_eq, v308, memory_order_release);
  int v309 = (v108_r5==0);
  atomic_store_explicit(&atom_14_r5_0_eq, v309, memory_order_release);
  int v310 = (v98_r6==1);
  atomic_store_explicit(&atom_14_r6_1_eq, v310, memory_order_release);
  int v311 = (v112_r7==0);
  atomic_store_explicit(&atom_14_r7_0_eq, v311, memory_order_release);
  return NULL;
}




void *t15(void *arg){
label_16:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(15);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v114_r7 = atomic_load_explicit(&vars[7], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v116_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v118_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v120_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v122_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v124_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v126_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v128_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v312 = (v128_r0==0);
  atomic_store_explicit(&atom_15_r0_0_eq, v312, memory_order_release);
  int v313 = (v116_r1==0);
  atomic_store_explicit(&atom_15_r1_0_eq, v313, memory_order_release);
  int v314 = (v118_r2==0);
  atomic_store_explicit(&atom_15_r2_0_eq, v314, memory_order_release);
  int v315 = (v120_r3==0);
  atomic_store_explicit(&atom_15_r3_0_eq, v315, memory_order_release);
  int v316 = (v122_r4==0);
  atomic_store_explicit(&atom_15_r4_0_eq, v316, memory_order_release);
  int v317 = (v124_r5==0);
  atomic_store_explicit(&atom_15_r5_0_eq, v317, memory_order_release);
  int v318 = (v126_r6==0);
  atomic_store_explicit(&atom_15_r6_0_eq, v318, memory_order_release);
  int v319 = (v114_r7==1);
  atomic_store_explicit(&atom_15_r7_1_eq, v319, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  atomic_init(&vars[4], 0);
  atomic_init(&vars[5], 0);
  atomic_init(&vars[6], 0);
  atomic_init(&vars[7], 0);
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 
  pthread_t thr4; 
  pthread_t thr5; 
  pthread_t thr6; 
  pthread_t thr7; 
  pthread_t thr8; 
  pthread_t thr9; 
  pthread_t thr10; 
  pthread_t thr11; 
  pthread_t thr12; 
  pthread_t thr13; 
  pthread_t thr14; 
  pthread_t thr15; 


  pthread_create(&thr0, NULL , t0, NULL);
  pthread_create(&thr1, NULL , t1, NULL);
  pthread_create(&thr2, NULL , t2, NULL);
  pthread_create(&thr3, NULL , t3, NULL);
  pthread_create(&thr4, NULL , t4, NULL);
  pthread_create(&thr5, NULL , t5, NULL);
  pthread_create(&thr6, NULL , t6, NULL);
  pthread_create(&thr7, NULL , t7, NULL);
  pthread_create(&thr8, NULL , t8, NULL);
  pthread_create(&thr9, NULL , t9, NULL);
  pthread_create(&thr10, NULL , t10, NULL);
  pthread_create(&thr11, NULL , t11, NULL);
  pthread_create(&thr12, NULL , t12, NULL);
  pthread_create(&thr13, NULL , t13, NULL);
  pthread_create(&thr14, NULL , t14, NULL);
  pthread_create(&thr15, NULL , t15, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);
  pthread_join(thr4,NULL);
  pthread_join(thr5,NULL);
  pthread_join(thr6,NULL);
  pthread_join(thr7,NULL);
  pthread_join(thr8,NULL);
  pthread_join(thr9,NULL);
  pthread_join(thr10,NULL);
  pthread_join(thr11,NULL);
  pthread_join(thr12,NULL);
  pthread_join(thr13,NULL);
  pthread_join(thr14,NULL);
  pthread_join(thr15,NULL);

  int v129 = atomic_load_explicit(&atom_8_r0_1_eq, memory_order_acquire);
  int v130 = atomic_load_explicit(&atom_8_r1_0_eq, memory_order_acquire);
  int v131 = atomic_load_explicit(&atom_8_r2_0_eq, memory_order_acquire);
  int v132 = atomic_load_explicit(&atom_8_r3_0_eq, memory_order_acquire);
  int v133 = atomic_load_explicit(&atom_8_r4_0_eq, memory_order_acquire);
  int v134 = atomic_load_explicit(&atom_8_r5_0_eq, memory_order_acquire);
  int v135 = atomic_load_explicit(&atom_8_r6_0_eq, memory_order_acquire);
  int v136 = atomic_load_explicit(&atom_8_r7_0_eq, memory_order_acquire);
  int v137 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v138 = atomic_load_explicit(&atom_9_r1_1_eq, memory_order_acquire);
  int v139 = atomic_load_explicit(&atom_9_r2_0_eq, memory_order_acquire);
  int v140 = atomic_load_explicit(&atom_9_r3_0_eq, memory_order_acquire);
  int v141 = atomic_load_explicit(&atom_9_r4_0_eq, memory_order_acquire);
  int v142 = atomic_load_explicit(&atom_9_r5_0_eq, memory_order_acquire);
  int v143 = atomic_load_explicit(&atom_9_r6_0_eq, memory_order_acquire);
  int v144 = atomic_load_explicit(&atom_9_r7_0_eq, memory_order_acquire);
  int v145 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v146 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v147 = atomic_load_explicit(&atom_10_r2_1_eq, memory_order_acquire);
  int v148 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v149 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v150 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v151 = atomic_load_explicit(&atom_10_r6_0_eq, memory_order_acquire);
  int v152 = atomic_load_explicit(&atom_10_r7_0_eq, memory_order_acquire);
  int v153 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v154 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v155 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v156 = atomic_load_explicit(&atom_11_r3_1_eq, memory_order_acquire);
  int v157 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v158 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v159 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v160 = atomic_load_explicit(&atom_11_r7_0_eq, memory_order_acquire);
  int v161 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v162 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v163 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v164 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v165 = atomic_load_explicit(&atom_12_r4_1_eq, memory_order_acquire);
  int v166 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v167 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v168 = atomic_load_explicit(&atom_12_r7_0_eq, memory_order_acquire);
  int v169 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v170 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v171 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v172 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v173 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v174 = atomic_load_explicit(&atom_13_r5_1_eq, memory_order_acquire);
  int v175 = atomic_load_explicit(&atom_13_r6_0_eq, memory_order_acquire);
  int v176 = atomic_load_explicit(&atom_13_r7_0_eq, memory_order_acquire);
  int v177 = atomic_load_explicit(&atom_14_r0_0_eq, memory_order_acquire);
  int v178 = atomic_load_explicit(&atom_14_r1_0_eq, memory_order_acquire);
  int v179 = atomic_load_explicit(&atom_14_r2_0_eq, memory_order_acquire);
  int v180 = atomic_load_explicit(&atom_14_r3_0_eq, memory_order_acquire);
  int v181 = atomic_load_explicit(&atom_14_r4_0_eq, memory_order_acquire);
  int v182 = atomic_load_explicit(&atom_14_r5_0_eq, memory_order_acquire);
  int v183 = atomic_load_explicit(&atom_14_r6_1_eq, memory_order_acquire);
  int v184 = atomic_load_explicit(&atom_14_r7_0_eq, memory_order_acquire);
  int v185 = atomic_load_explicit(&atom_15_r0_0_eq, memory_order_acquire);
  int v186 = atomic_load_explicit(&atom_15_r1_0_eq, memory_order_acquire);
  int v187 = atomic_load_explicit(&atom_15_r2_0_eq, memory_order_acquire);
  int v188 = atomic_load_explicit(&atom_15_r3_0_eq, memory_order_acquire);
  int v189 = atomic_load_explicit(&atom_15_r4_0_eq, memory_order_acquire);
  int v190 = atomic_load_explicit(&atom_15_r5_0_eq, memory_order_acquire);
  int v191 = atomic_load_explicit(&atom_15_r6_0_eq, memory_order_acquire);
  int v192 = atomic_load_explicit(&atom_15_r7_1_eq, memory_order_acquire);
  int v193_conj = v191 & v192;
  int v194_conj = v190 & v193_conj;
  int v195_conj = v189 & v194_conj;
  int v196_conj = v188 & v195_conj;
  int v197_conj = v187 & v196_conj;
  int v198_conj = v186 & v197_conj;
  int v199_conj = v185 & v198_conj;
  int v200_conj = v184 & v199_conj;
  int v201_conj = v183 & v200_conj;
  int v202_conj = v182 & v201_conj;
  int v203_conj = v181 & v202_conj;
  int v204_conj = v180 & v203_conj;
  int v205_conj = v179 & v204_conj;
  int v206_conj = v178 & v205_conj;
  int v207_conj = v177 & v206_conj;
  int v208_conj = v176 & v207_conj;
  int v209_conj = v175 & v208_conj;
  int v210_conj = v174 & v209_conj;
  int v211_conj = v173 & v210_conj;
  int v212_conj = v172 & v211_conj;
  int v213_conj = v171 & v212_conj;
  int v214_conj = v170 & v213_conj;
  int v215_conj = v169 & v214_conj;
  int v216_conj = v168 & v215_conj;
  int v217_conj = v167 & v216_conj;
  int v218_conj = v166 & v217_conj;
  int v219_conj = v165 & v218_conj;
  int v220_conj = v164 & v219_conj;
  int v221_conj = v163 & v220_conj;
  int v222_conj = v162 & v221_conj;
  int v223_conj = v161 & v222_conj;
  int v224_conj = v160 & v223_conj;
  int v225_conj = v159 & v224_conj;
  int v226_conj = v158 & v225_conj;
  int v227_conj = v157 & v226_conj;
  int v228_conj = v156 & v227_conj;
  int v229_conj = v155 & v228_conj;
  int v230_conj = v154 & v229_conj;
  int v231_conj = v153 & v230_conj;
  int v232_conj = v152 & v231_conj;
  int v233_conj = v151 & v232_conj;
  int v234_conj = v150 & v233_conj;
  int v235_conj = v149 & v234_conj;
  int v236_conj = v148 & v235_conj;
  int v237_conj = v147 & v236_conj;
  int v238_conj = v146 & v237_conj;
  int v239_conj = v145 & v238_conj;
  int v240_conj = v144 & v239_conj;
  int v241_conj = v143 & v240_conj;
  int v242_conj = v142 & v241_conj;
  int v243_conj = v141 & v242_conj;
  int v244_conj = v140 & v243_conj;
  int v245_conj = v139 & v244_conj;
  int v246_conj = v138 & v245_conj;
  int v247_conj = v137 & v246_conj;
  int v248_conj = v136 & v247_conj;
  int v249_conj = v135 & v248_conj;
  int v250_conj = v134 & v249_conj;
  int v251_conj = v133 & v250_conj;
  int v252_conj = v132 & v251_conj;
  int v253_conj = v131 & v252_conj;
  int v254_conj = v130 & v253_conj;
  int v255_conj = v129 & v254_conj;
  if (v255_conj == 1) assert(0);
  return 0;
}
