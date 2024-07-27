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
  int v144 = (v2_r0==1);
  atomic_store_explicit(&atom_6_r0_1_eq, v144, memory_order_release);
  int v145 = (v4_r1==0);
  atomic_store_explicit(&atom_6_r1_0_eq, v145, memory_order_release);
  int v146 = (v6_r2==0);
  atomic_store_explicit(&atom_6_r2_0_eq, v146, memory_order_release);
  int v147 = (v8_r3==0);
  atomic_store_explicit(&atom_6_r3_0_eq, v147, memory_order_release);
  int v148 = (v10_r4==0);
  atomic_store_explicit(&atom_6_r4_0_eq, v148, memory_order_release);
  int v149 = (v12_r5==0);
  atomic_store_explicit(&atom_6_r5_0_eq, v149, memory_order_release);
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
  int v150 = (v16_r0==0);
  atomic_store_explicit(&atom_7_r0_0_eq, v150, memory_order_release);
  int v151 = (v14_r1==1);
  atomic_store_explicit(&atom_7_r1_1_eq, v151, memory_order_release);
  int v152 = (v18_r2==0);
  atomic_store_explicit(&atom_7_r2_0_eq, v152, memory_order_release);
  int v153 = (v20_r3==0);
  atomic_store_explicit(&atom_7_r3_0_eq, v153, memory_order_release);
  int v154 = (v22_r4==0);
  atomic_store_explicit(&atom_7_r4_0_eq, v154, memory_order_release);
  int v155 = (v24_r5==0);
  atomic_store_explicit(&atom_7_r5_0_eq, v155, memory_order_release);
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
  int v156 = (v30_r0==0);
  atomic_store_explicit(&atom_8_r0_0_eq, v156, memory_order_release);
  int v157 = (v28_r1==0);
  atomic_store_explicit(&atom_8_r1_0_eq, v157, memory_order_release);
  int v158 = (v26_r2==1);
  atomic_store_explicit(&atom_8_r2_1_eq, v158, memory_order_release);
  int v159 = (v32_r3==0);
  atomic_store_explicit(&atom_8_r3_0_eq, v159, memory_order_release);
  int v160 = (v34_r4==0);
  atomic_store_explicit(&atom_8_r4_0_eq, v160, memory_order_release);
  int v161 = (v36_r5==0);
  atomic_store_explicit(&atom_8_r5_0_eq, v161, memory_order_release);
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
  int v162 = (v44_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v162, memory_order_release);
  int v163 = (v40_r1==0);
  atomic_store_explicit(&atom_9_r1_0_eq, v163, memory_order_release);
  int v164 = (v42_r2==0);
  atomic_store_explicit(&atom_9_r2_0_eq, v164, memory_order_release);
  int v165 = (v38_r3==1);
  atomic_store_explicit(&atom_9_r3_1_eq, v165, memory_order_release);
  int v166 = (v46_r4==0);
  atomic_store_explicit(&atom_9_r4_0_eq, v166, memory_order_release);
  int v167 = (v48_r5==0);
  atomic_store_explicit(&atom_9_r5_0_eq, v167, memory_order_release);
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
  int v168 = (v58_r0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v168, memory_order_release);
  int v169 = (v52_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v169, memory_order_release);
  int v170 = (v54_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v170, memory_order_release);
  int v171 = (v56_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v171, memory_order_release);
  int v172 = (v50_r4==1);
  atomic_store_explicit(&atom_10_r4_1_eq, v172, memory_order_release);
  int v173 = (v60_r5==0);
  atomic_store_explicit(&atom_10_r5_0_eq, v173, memory_order_release);
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
  int v174 = (v72_r0==0);
  atomic_store_explicit(&atom_11_r0_0_eq, v174, memory_order_release);
  int v175 = (v64_r1==0);
  atomic_store_explicit(&atom_11_r1_0_eq, v175, memory_order_release);
  int v176 = (v66_r2==0);
  atomic_store_explicit(&atom_11_r2_0_eq, v176, memory_order_release);
  int v177 = (v68_r3==0);
  atomic_store_explicit(&atom_11_r3_0_eq, v177, memory_order_release);
  int v178 = (v70_r4==0);
  atomic_store_explicit(&atom_11_r4_0_eq, v178, memory_order_release);
  int v179 = (v62_r5==1);
  atomic_store_explicit(&atom_11_r5_1_eq, v179, memory_order_release);
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

  int v73 = atomic_load_explicit(&atom_6_r0_1_eq, memory_order_acquire);
  int v74 = atomic_load_explicit(&atom_6_r1_0_eq, memory_order_acquire);
  int v75 = atomic_load_explicit(&atom_6_r2_0_eq, memory_order_acquire);
  int v76 = atomic_load_explicit(&atom_6_r3_0_eq, memory_order_acquire);
  int v77 = atomic_load_explicit(&atom_6_r4_0_eq, memory_order_acquire);
  int v78 = atomic_load_explicit(&atom_6_r5_0_eq, memory_order_acquire);
  int v79 = atomic_load_explicit(&atom_7_r0_0_eq, memory_order_acquire);
  int v80 = atomic_load_explicit(&atom_7_r1_1_eq, memory_order_acquire);
  int v81 = atomic_load_explicit(&atom_7_r2_0_eq, memory_order_acquire);
  int v82 = atomic_load_explicit(&atom_7_r3_0_eq, memory_order_acquire);
  int v83 = atomic_load_explicit(&atom_7_r4_0_eq, memory_order_acquire);
  int v84 = atomic_load_explicit(&atom_7_r5_0_eq, memory_order_acquire);
  int v85 = atomic_load_explicit(&atom_8_r0_0_eq, memory_order_acquire);
  int v86 = atomic_load_explicit(&atom_8_r1_0_eq, memory_order_acquire);
  int v87 = atomic_load_explicit(&atom_8_r2_1_eq, memory_order_acquire);
  int v88 = atomic_load_explicit(&atom_8_r3_0_eq, memory_order_acquire);
  int v89 = atomic_load_explicit(&atom_8_r4_0_eq, memory_order_acquire);
  int v90 = atomic_load_explicit(&atom_8_r5_0_eq, memory_order_acquire);
  int v91 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v92 = atomic_load_explicit(&atom_9_r1_0_eq, memory_order_acquire);
  int v93 = atomic_load_explicit(&atom_9_r2_0_eq, memory_order_acquire);
  int v94 = atomic_load_explicit(&atom_9_r3_1_eq, memory_order_acquire);
  int v95 = atomic_load_explicit(&atom_9_r4_0_eq, memory_order_acquire);
  int v96 = atomic_load_explicit(&atom_9_r5_0_eq, memory_order_acquire);
  int v97 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v98 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v99 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v100 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v101 = atomic_load_explicit(&atom_10_r4_1_eq, memory_order_acquire);
  int v102 = atomic_load_explicit(&atom_10_r5_0_eq, memory_order_acquire);
  int v103 = atomic_load_explicit(&atom_11_r0_0_eq, memory_order_acquire);
  int v104 = atomic_load_explicit(&atom_11_r1_0_eq, memory_order_acquire);
  int v105 = atomic_load_explicit(&atom_11_r2_0_eq, memory_order_acquire);
  int v106 = atomic_load_explicit(&atom_11_r3_0_eq, memory_order_acquire);
  int v107 = atomic_load_explicit(&atom_11_r4_0_eq, memory_order_acquire);
  int v108 = atomic_load_explicit(&atom_11_r5_1_eq, memory_order_acquire);
  int v109_conj = v107 & v108;
  int v110_conj = v106 & v109_conj;
  int v111_conj = v105 & v110_conj;
  int v112_conj = v104 & v111_conj;
  int v113_conj = v103 & v112_conj;
  int v114_conj = v102 & v113_conj;
  int v115_conj = v101 & v114_conj;
  int v116_conj = v100 & v115_conj;
  int v117_conj = v99 & v116_conj;
  int v118_conj = v98 & v117_conj;
  int v119_conj = v97 & v118_conj;
  int v120_conj = v96 & v119_conj;
  int v121_conj = v95 & v120_conj;
  int v122_conj = v94 & v121_conj;
  int v123_conj = v93 & v122_conj;
  int v124_conj = v92 & v123_conj;
  int v125_conj = v91 & v124_conj;
  int v126_conj = v90 & v125_conj;
  int v127_conj = v89 & v126_conj;
  int v128_conj = v88 & v127_conj;
  int v129_conj = v87 & v128_conj;
  int v130_conj = v86 & v129_conj;
  int v131_conj = v85 & v130_conj;
  int v132_conj = v84 & v131_conj;
  int v133_conj = v83 & v132_conj;
  int v134_conj = v82 & v133_conj;
  int v135_conj = v81 & v134_conj;
  int v136_conj = v80 & v135_conj;
  int v137_conj = v79 & v136_conj;
  int v138_conj = v78 & v137_conj;
  int v139_conj = v77 & v138_conj;
  int v140_conj = v76 & v139_conj;
  int v141_conj = v75 & v140_conj;
  int v142_conj = v74 & v141_conj;
  int v143_conj = v73 & v142_conj;
  if (v143_conj == 1) assert(0);
  return 0;
}
