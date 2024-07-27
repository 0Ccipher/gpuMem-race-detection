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
atomic_int vars[7]; 
atomic_int atom_7_r0_1_eq; 
atomic_int atom_7_r1_0_eq; 
atomic_int atom_7_r2_0_eq; 
atomic_int atom_7_r3_0_eq; 
atomic_int atom_7_r4_0_eq; 
atomic_int atom_7_r5_0_eq; 
atomic_int atom_7_r6_0_eq; 
atomic_int atom_8_r0_0_eq; 
atomic_int atom_8_r1_1_eq; 
atomic_int atom_8_r2_0_eq; 
atomic_int atom_8_r3_0_eq; 
atomic_int atom_8_r4_0_eq; 
atomic_int atom_8_r5_0_eq; 
atomic_int atom_8_r6_0_eq; 
atomic_int atom_9_r0_0_eq; 
atomic_int atom_9_r1_0_eq; 
atomic_int atom_9_r2_1_eq; 
atomic_int atom_9_r3_0_eq; 
atomic_int atom_9_r4_0_eq; 
atomic_int atom_9_r5_0_eq; 
atomic_int atom_9_r6_0_eq; 
atomic_int atom_10_r0_0_eq; 
atomic_int atom_10_r1_0_eq; 
atomic_int atom_10_r2_0_eq; 
atomic_int atom_10_r3_1_eq; 
atomic_int atom_10_r4_0_eq; 
atomic_int atom_10_r5_0_eq; 
atomic_int atom_10_r6_0_eq; 
atomic_int atom_11_r0_0_eq; 
atomic_int atom_11_r1_0_eq; 
atomic_int atom_11_r2_0_eq; 
atomic_int atom_11_r3_0_eq; 
atomic_int atom_11_r4_1_eq; 
atomic_int atom_11_r5_0_eq; 
atomic_int atom_11_r6_0_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_1_eq; 
atomic_int atom_12_r6_0_eq; 
atomic_int atom_13_r0_0_eq; 
atomic_int atom_13_r1_0_eq; 
atomic_int atom_13_r2_0_eq; 
atomic_int atom_13_r3_0_eq; 
atomic_int atom_13_r4_0_eq; 
atomic_int atom_13_r5_0_eq; 
atomic_int atom_13_r6_1_eq; 



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
  int v196 = (v2_r0==1);
  atomic_store_explicit(&atom_7_r0_1_eq, v196, memory_order_release);
  int v197 = (v4_r1==0);
  atomic_store_explicit(&atom_7_r1_0_eq, v197, memory_order_release);
  int v198 = (v6_r2==0);
  atomic_store_explicit(&atom_7_r2_0_eq, v198, memory_order_release);
  int v199 = (v8_r3==0);
  atomic_store_explicit(&atom_7_r3_0_eq, v199, memory_order_release);
  int v200 = (v10_r4==0);
  atomic_store_explicit(&atom_7_r4_0_eq, v200, memory_order_release);
  int v201 = (v12_r5==0);
  atomic_store_explicit(&atom_7_r5_0_eq, v201, memory_order_release);
  int v202 = (v14_r6==0);
  atomic_store_explicit(&atom_7_r6_0_eq, v202, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v16_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v20_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v203 = (v18_r0==0);
  atomic_store_explicit(&atom_8_r0_0_eq, v203, memory_order_release);
  int v204 = (v16_r1==1);
  atomic_store_explicit(&atom_8_r1_1_eq, v204, memory_order_release);
  int v205 = (v20_r2==0);
  atomic_store_explicit(&atom_8_r2_0_eq, v205, memory_order_release);
  int v206 = (v22_r3==0);
  atomic_store_explicit(&atom_8_r3_0_eq, v206, memory_order_release);
  int v207 = (v24_r4==0);
  atomic_store_explicit(&atom_8_r4_0_eq, v207, memory_order_release);
  int v208 = (v26_r5==0);
  atomic_store_explicit(&atom_8_r5_0_eq, v208, memory_order_release);
  int v209 = (v28_r6==0);
  atomic_store_explicit(&atom_8_r6_0_eq, v209, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v30_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v210 = (v34_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v210, memory_order_release);
  int v211 = (v32_r1==0);
  atomic_store_explicit(&atom_9_r1_0_eq, v211, memory_order_release);
  int v212 = (v30_r2==1);
  atomic_store_explicit(&atom_9_r2_1_eq, v212, memory_order_release);
  int v213 = (v36_r3==0);
  atomic_store_explicit(&atom_9_r3_0_eq, v213, memory_order_release);
  int v214 = (v38_r4==0);
  atomic_store_explicit(&atom_9_r4_0_eq, v214, memory_order_release);
  int v215 = (v40_r5==0);
  atomic_store_explicit(&atom_9_r5_0_eq, v215, memory_order_release);
  int v216 = (v42_r6==0);
  atomic_store_explicit(&atom_9_r6_0_eq, v216, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v44_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v217 = (v50_r0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v217, memory_order_release);
  int v218 = (v46_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v218, memory_order_release);
  int v219 = (v48_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v219, memory_order_release);
  int v220 = (v44_r3==1);
  atomic_store_explicit(&atom_10_r3_1_eq, v220, memory_order_release);
  int v221 = (v52_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v221, memory_order_release);
  int v222 = (v54_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v222, memory_order_release);
  int v223 = (v56_r6==0);
  atomic_store_explicit(&atom_10_r6_0_eq, v223, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v58_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v62_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v224 = (v66_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v224, memory_order_release);
  int v225 = (v60_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v225, memory_order_release);
  int v226 = (v62_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v226, memory_order_release);
  int v227 = (v64_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v227, memory_order_release);
  int v228 = (v58_r4==1);
  atomic_store_explicit(&atom_11_r4_1_eq, v228, memory_order_release);
  int v229 = (v68_r5==0);
  atomic_store_explicit(&atom_11_r5_0_eq, v229, memory_order_release);
  int v230 = (v70_r6==0);
  atomic_store_explicit(&atom_11_r6_0_eq, v230, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v72_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v74_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v84_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
  int v231 = (v82_r0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v231, memory_order_release);
  int v232 = (v74_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v232, memory_order_release);
  int v233 = (v76_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v233, memory_order_release);
  int v234 = (v78_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v234, memory_order_release);
  int v235 = (v80_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v235, memory_order_release);
  int v236 = (v72_r5==1);
  atomic_store_explicit(&atom_12_r5_1_eq, v236, memory_order_release);
  int v237 = (v84_r6==0);
  atomic_store_explicit(&atom_12_r6_0_eq, v237, memory_order_release);
  return NULL;
}




void *t13(void *arg){
label_14:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(13);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v86_r6 = atomic_load_explicit(&vars[6], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v88_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v90_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v92_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v94_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v96_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v98_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v238 = (v98_r0==0);
  atomic_store_explicit(&atom_13_r0_0_eq, v238, memory_order_release);
  int v239 = (v88_r1==0);
  atomic_store_explicit(&atom_13_r1_0_eq, v239, memory_order_release);
  int v240 = (v90_r2==0);
  atomic_store_explicit(&atom_13_r2_0_eq, v240, memory_order_release);
  int v241 = (v92_r3==0);
  atomic_store_explicit(&atom_13_r3_0_eq, v241, memory_order_release);
  int v242 = (v94_r4==0);
  atomic_store_explicit(&atom_13_r4_0_eq, v242, memory_order_release);
  int v243 = (v96_r5==0);
  atomic_store_explicit(&atom_13_r5_0_eq, v243, memory_order_release);
  int v244 = (v86_r6==1);
  atomic_store_explicit(&atom_13_r6_1_eq, v244, memory_order_release);
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

  int v99 = atomic_load_explicit(&atom_7_r0_1_eq, memory_order_acquire);
  int v100 = atomic_load_explicit(&atom_7_r1_0_eq, memory_order_acquire);
  int v101 = atomic_load_explicit(&atom_7_r2_0_eq, memory_order_acquire);
  int v102 = atomic_load_explicit(&atom_7_r3_0_eq, memory_order_acquire);
  int v103 = atomic_load_explicit(&atom_7_r4_0_eq, memory_order_acquire);
  int v104 = atomic_load_explicit(&atom_7_r5_0_eq, memory_order_acquire);
  int v105 = atomic_load_explicit(&atom_7_r6_0_eq, memory_order_acquire);
  int v106 = atomic_load_explicit(&atom_8_r0_0_eq, memory_order_acquire);
  int v107 = atomic_load_explicit(&atom_8_r1_1_eq, memory_order_acquire);
  int v108 = atomic_load_explicit(&atom_8_r2_0_eq, memory_order_acquire);
  int v109 = atomic_load_explicit(&atom_8_r3_0_eq, memory_order_acquire);
  int v110 = atomic_load_explicit(&atom_8_r4_0_eq, memory_order_acquire);
  int v111 = atomic_load_explicit(&atom_8_r5_0_eq, memory_order_acquire);
  int v112 = atomic_load_explicit(&atom_8_r6_0_eq, memory_order_acquire);
  int v113 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v114 = atomic_load_explicit(&atom_9_r1_0_eq, memory_order_acquire);
  int v115 = atomic_load_explicit(&atom_9_r2_1_eq, memory_order_acquire);
  int v116 = atomic_load_explicit(&atom_9_r3_0_eq, memory_order_acquire);
  int v117 = atomic_load_explicit(&atom_9_r4_0_eq, memory_order_acquire);
  int v118 = atomic_load_explicit(&atom_9_r5_0_eq, memory_order_acquire);
  int v119 = atomic_load_explicit(&atom_9_r6_0_eq, memory_order_acquire);
  int v120 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v121 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v122 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v123 = atomic_load_explicit(&atom_10_r3_1_eq, memory_order_acquire);
  int v124 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v125 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v126 = atomic_load_explicit(&atom_10_r6_0_eq, memory_order_acquire);
  int v127 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v128 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v129 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v130 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v131 = atomic_load_explicit(&atom_11_r4_1_eq, memory_order_acquire);
  int v132 = atomic_load_explicit(&atom_11_r5_0_eq, memory_order_acquire);
  int v133 = atomic_load_explicit(&atom_11_r6_0_eq, memory_order_acquire);
  int v134 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v135 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v136 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v137 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v138 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v139 = atomic_load_explicit(&atom_12_r5_1_eq, memory_order_acquire);
  int v140 = atomic_load_explicit(&atom_12_r6_0_eq, memory_order_acquire);
  int v141 = atomic_load_explicit(&atom_13_r0_0_eq, memory_order_acquire);
  int v142 = atomic_load_explicit(&atom_13_r1_0_eq, memory_order_acquire);
  int v143 = atomic_load_explicit(&atom_13_r2_0_eq, memory_order_acquire);
  int v144 = atomic_load_explicit(&atom_13_r3_0_eq, memory_order_acquire);
  int v145 = atomic_load_explicit(&atom_13_r4_0_eq, memory_order_acquire);
  int v146 = atomic_load_explicit(&atom_13_r5_0_eq, memory_order_acquire);
  int v147 = atomic_load_explicit(&atom_13_r6_1_eq, memory_order_acquire);
  int v148_conj = v146 & v147;
  int v149_conj = v145 & v148_conj;
  int v150_conj = v144 & v149_conj;
  int v151_conj = v143 & v150_conj;
  int v152_conj = v142 & v151_conj;
  int v153_conj = v141 & v152_conj;
  int v154_conj = v140 & v153_conj;
  int v155_conj = v139 & v154_conj;
  int v156_conj = v138 & v155_conj;
  int v157_conj = v137 & v156_conj;
  int v158_conj = v136 & v157_conj;
  int v159_conj = v135 & v158_conj;
  int v160_conj = v134 & v159_conj;
  int v161_conj = v133 & v160_conj;
  int v162_conj = v132 & v161_conj;
  int v163_conj = v131 & v162_conj;
  int v164_conj = v130 & v163_conj;
  int v165_conj = v129 & v164_conj;
  int v166_conj = v128 & v165_conj;
  int v167_conj = v127 & v166_conj;
  int v168_conj = v126 & v167_conj;
  int v169_conj = v125 & v168_conj;
  int v170_conj = v124 & v169_conj;
  int v171_conj = v123 & v170_conj;
  int v172_conj = v122 & v171_conj;
  int v173_conj = v121 & v172_conj;
  int v174_conj = v120 & v173_conj;
  int v175_conj = v119 & v174_conj;
  int v176_conj = v118 & v175_conj;
  int v177_conj = v117 & v176_conj;
  int v178_conj = v116 & v177_conj;
  int v179_conj = v115 & v178_conj;
  int v180_conj = v114 & v179_conj;
  int v181_conj = v113 & v180_conj;
  int v182_conj = v112 & v181_conj;
  int v183_conj = v111 & v182_conj;
  int v184_conj = v110 & v183_conj;
  int v185_conj = v109 & v184_conj;
  int v186_conj = v108 & v185_conj;
  int v187_conj = v107 & v186_conj;
  int v188_conj = v106 & v187_conj;
  int v189_conj = v105 & v188_conj;
  int v190_conj = v104 & v189_conj;
  int v191_conj = v103 & v190_conj;
  int v192_conj = v102 & v191_conj;
  int v193_conj = v101 & v192_conj;
  int v194_conj = v100 & v193_conj;
  int v195_conj = v99 & v194_conj;
  if (v195_conj == 1) assert(0);
  return 0;
}
