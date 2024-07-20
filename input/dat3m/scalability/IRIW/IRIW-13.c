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
atomic_int vars[6]; 
atomic_int atom_6_r0_1_eq; 
atomic_int atom_6_r1_0_eq; 
atomic_int atom_6_r2_0_eq; 
atomic_int atom_6_r3_0_eq; 
atomic_int atom_6_r4_0_eq; 
atomic_int atom_6_r5_0_eq; 
atomic_int atom_7_r0_0_eq; 
atomic_int atom_7_r1_1_eq; 
atomic_int atom_7_r2_0_eq; 
atomic_int atom_7_r3_0_eq; 
atomic_int atom_7_r4_0_eq; 
atomic_int atom_7_r5_0_eq; 
atomic_int atom_8_r0_0_eq; 
atomic_int atom_8_r1_0_eq; 
atomic_int atom_8_r2_1_eq; 
atomic_int atom_8_r3_0_eq; 
atomic_int atom_8_r4_0_eq; 
atomic_int atom_8_r5_0_eq; 
atomic_int atom_9_r0_0_eq; 
atomic_int atom_9_r1_0_eq; 
atomic_int atom_9_r2_0_eq; 
atomic_int atom_9_r3_1_eq; 
atomic_int atom_9_r4_0_eq; 
atomic_int atom_9_r5_0_eq; 
atomic_int atom_10_r0_0_eq; 
atomic_int atom_10_r1_0_eq; 
atomic_int atom_10_r2_0_eq; 
atomic_int atom_10_r3_0_eq; 
atomic_int atom_10_r4_1_eq; 
atomic_int atom_10_r5_0_eq; 
atomic_int atom_11_r0_0_eq; 
atomic_int atom_11_r1_0_eq; 
atomic_int atom_11_r2_0_eq; 
atomic_int atom_11_r3_0_eq; 
atomic_int atom_11_r4_0_eq; 
atomic_int atom_11_r5_1_eq; 
atomic_int atom_12_r0_0_eq; 
atomic_int atom_12_r1_0_eq; 
atomic_int atom_12_r2_0_eq; 
atomic_int atom_12_r3_0_eq; 
atomic_int atom_12_r4_0_eq; 
atomic_int atom_12_r5_0_eq; 



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
  int v166 = (v2_r0==1);
  atomic_store_explicit(&atom_6_r0_1_eq, v166, memory_order_release);
  int v167 = (v4_r1==0);
  atomic_store_explicit(&atom_6_r1_0_eq, v167, memory_order_release);
  int v168 = (v6_r2==0);
  atomic_store_explicit(&atom_6_r2_0_eq, v168, memory_order_release);
  int v169 = (v8_r3==0);
  atomic_store_explicit(&atom_6_r3_0_eq, v169, memory_order_release);
  int v170 = (v10_r4==0);
  atomic_store_explicit(&atom_6_r4_0_eq, v170, memory_order_release);
  int v171 = (v12_r5==0);
  atomic_store_explicit(&atom_6_r5_0_eq, v171, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v14_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v20_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v22_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v172 = (v16_r0==0);
  atomic_store_explicit(&atom_7_r0_0_eq, v172, memory_order_release);
  int v173 = (v14_r1==1);
  atomic_store_explicit(&atom_7_r1_1_eq, v173, memory_order_release);
  int v174 = (v18_r2==0);
  atomic_store_explicit(&atom_7_r2_0_eq, v174, memory_order_release);
  int v175 = (v20_r3==0);
  atomic_store_explicit(&atom_7_r3_0_eq, v175, memory_order_release);
  int v176 = (v22_r4==0);
  atomic_store_explicit(&atom_7_r4_0_eq, v176, memory_order_release);
  int v177 = (v24_r5==0);
  atomic_store_explicit(&atom_7_r5_0_eq, v177, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v26_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v32_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v178 = (v30_r0==0);
  atomic_store_explicit(&atom_8_r0_0_eq, v178, memory_order_release);
  int v179 = (v28_r1==0);
  atomic_store_explicit(&atom_8_r1_0_eq, v179, memory_order_release);
  int v180 = (v26_r2==1);
  atomic_store_explicit(&atom_8_r2_1_eq, v180, memory_order_release);
  int v181 = (v32_r3==0);
  atomic_store_explicit(&atom_8_r3_0_eq, v181, memory_order_release);
  int v182 = (v34_r4==0);
  atomic_store_explicit(&atom_8_r4_0_eq, v182, memory_order_release);
  int v183 = (v36_r5==0);
  atomic_store_explicit(&atom_8_r5_0_eq, v183, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v38_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v42_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v184 = (v44_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v184, memory_order_release);
  int v185 = (v40_r1==0);
  atomic_store_explicit(&atom_9_r1_0_eq, v185, memory_order_release);
  int v186 = (v42_r2==0);
  atomic_store_explicit(&atom_9_r2_0_eq, v186, memory_order_release);
  int v187 = (v38_r3==1);
  atomic_store_explicit(&atom_9_r3_1_eq, v187, memory_order_release);
  int v188 = (v46_r4==0);
  atomic_store_explicit(&atom_9_r4_0_eq, v188, memory_order_release);
  int v189 = (v48_r5==0);
  atomic_store_explicit(&atom_9_r5_0_eq, v189, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v50_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v52_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v60_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v190 = (v58_r0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v190, memory_order_release);
  int v191 = (v52_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v191, memory_order_release);
  int v192 = (v54_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v192, memory_order_release);
  int v193 = (v56_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v193, memory_order_release);
  int v194 = (v50_r4==1);
  atomic_store_explicit(&atom_10_r4_1_eq, v194, memory_order_release);
  int v195 = (v60_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v195, memory_order_release);
  return NULL;
}




void *t11(void *arg){
label_12:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(11);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v62_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v64_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v66_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v68_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v70_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v72_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v196 = (v72_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v196, memory_order_release);
  int v197 = (v64_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v197, memory_order_release);
  int v198 = (v66_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v198, memory_order_release);
  int v199 = (v68_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v199, memory_order_release);
  int v200 = (v70_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v200, memory_order_release);
  int v201 = (v62_r5==1);
  atomic_store_explicit(&atom_11_r5_1_eq, v201, memory_order_release);
  return NULL;
}




void *t12(void *arg){
label_13:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(12);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v74_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v76_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v78_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v80_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v82_r5 = atomic_load_explicit(&vars[5], memory_order_acquire);
  int v202 = (0==0);
  atomic_store_explicit(&atom_12_r0_0_eq, v202, memory_order_release);
  int v203 = (v74_r1==0);
  atomic_store_explicit(&atom_12_r1_0_eq, v203, memory_order_release);
  int v204 = (v76_r2==0);
  atomic_store_explicit(&atom_12_r2_0_eq, v204, memory_order_release);
  int v205 = (v78_r3==0);
  atomic_store_explicit(&atom_12_r3_0_eq, v205, memory_order_release);
  int v206 = (v80_r4==0);
  atomic_store_explicit(&atom_12_r4_0_eq, v206, memory_order_release);
  int v207 = (v82_r5==0);
  atomic_store_explicit(&atom_12_r5_0_eq, v207, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  atomic_init(&vars[4], 0);
  atomic_init(&vars[5], 0);
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

  int v83 = atomic_load_explicit(&atom_6_r0_1_eq, memory_order_acquire);
  int v84 = atomic_load_explicit(&atom_6_r1_0_eq, memory_order_acquire);
  int v85 = atomic_load_explicit(&atom_6_r2_0_eq, memory_order_acquire);
  int v86 = atomic_load_explicit(&atom_6_r3_0_eq, memory_order_acquire);
  int v87 = atomic_load_explicit(&atom_6_r4_0_eq, memory_order_acquire);
  int v88 = atomic_load_explicit(&atom_6_r5_0_eq, memory_order_acquire);
  int v89 = atomic_load_explicit(&atom_7_r0_0_eq, memory_order_acquire);
  int v90 = atomic_load_explicit(&atom_7_r1_1_eq, memory_order_acquire);
  int v91 = atomic_load_explicit(&atom_7_r2_0_eq, memory_order_acquire);
  int v92 = atomic_load_explicit(&atom_7_r3_0_eq, memory_order_acquire);
  int v93 = atomic_load_explicit(&atom_7_r4_0_eq, memory_order_acquire);
  int v94 = atomic_load_explicit(&atom_7_r5_0_eq, memory_order_acquire);
  int v95 = atomic_load_explicit(&atom_8_r0_0_eq, memory_order_acquire);
  int v96 = atomic_load_explicit(&atom_8_r1_0_eq, memory_order_acquire);
  int v97 = atomic_load_explicit(&atom_8_r2_1_eq, memory_order_acquire);
  int v98 = atomic_load_explicit(&atom_8_r3_0_eq, memory_order_acquire);
  int v99 = atomic_load_explicit(&atom_8_r4_0_eq, memory_order_acquire);
  int v100 = atomic_load_explicit(&atom_8_r5_0_eq, memory_order_acquire);
  int v101 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v102 = atomic_load_explicit(&atom_9_r1_0_eq, memory_order_acquire);
  int v103 = atomic_load_explicit(&atom_9_r2_0_eq, memory_order_acquire);
  int v104 = atomic_load_explicit(&atom_9_r3_1_eq, memory_order_acquire);
  int v105 = atomic_load_explicit(&atom_9_r4_0_eq, memory_order_acquire);
  int v106 = atomic_load_explicit(&atom_9_r5_0_eq, memory_order_acquire);
  int v107 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v108 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v109 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v110 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v111 = atomic_load_explicit(&atom_10_r4_1_eq, memory_order_acquire);
  int v112 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v113 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v114 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v115 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v116 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v117 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v118 = atomic_load_explicit(&atom_11_r5_1_eq, memory_order_acquire);
  int v119 = atomic_load_explicit(&atom_12_r0_0_eq, memory_order_acquire);
  int v120 = atomic_load_explicit(&atom_12_r1_0_eq, memory_order_acquire);
  int v121 = atomic_load_explicit(&atom_12_r2_0_eq, memory_order_acquire);
  int v122 = atomic_load_explicit(&atom_12_r3_0_eq, memory_order_acquire);
  int v123 = atomic_load_explicit(&atom_12_r4_0_eq, memory_order_acquire);
  int v124 = atomic_load_explicit(&atom_12_r5_0_eq, memory_order_acquire);
  int v125_conj = v123 & v124;
  int v126_conj = v122 & v125_conj;
  int v127_conj = v121 & v126_conj;
  int v128_conj = v120 & v127_conj;
  int v129_conj = v119 & v128_conj;
  int v130_conj = v118 & v129_conj;
  int v131_conj = v117 & v130_conj;
  int v132_conj = v116 & v131_conj;
  int v133_conj = v115 & v132_conj;
  int v134_conj = v114 & v133_conj;
  int v135_conj = v113 & v134_conj;
  int v136_conj = v112 & v135_conj;
  int v137_conj = v111 & v136_conj;
  int v138_conj = v110 & v137_conj;
  int v139_conj = v109 & v138_conj;
  int v140_conj = v108 & v139_conj;
  int v141_conj = v107 & v140_conj;
  int v142_conj = v106 & v141_conj;
  int v143_conj = v105 & v142_conj;
  int v144_conj = v104 & v143_conj;
  int v145_conj = v103 & v144_conj;
  int v146_conj = v102 & v145_conj;
  int v147_conj = v101 & v146_conj;
  int v148_conj = v100 & v147_conj;
  int v149_conj = v99 & v148_conj;
  int v150_conj = v98 & v149_conj;
  int v151_conj = v97 & v150_conj;
  int v152_conj = v96 & v151_conj;
  int v153_conj = v95 & v152_conj;
  int v154_conj = v94 & v153_conj;
  int v155_conj = v93 & v154_conj;
  int v156_conj = v92 & v155_conj;
  int v157_conj = v91 & v156_conj;
  int v158_conj = v90 & v157_conj;
  int v159_conj = v89 & v158_conj;
  int v160_conj = v88 & v159_conj;
  int v161_conj = v87 & v160_conj;
  int v162_conj = v86 & v161_conj;
  int v163_conj = v85 & v162_conj;
  int v164_conj = v84 & v163_conj;
  int v165_conj = v83 & v164_conj;
  if (v165_conj == 1) assert(0);
  return 0;
}
