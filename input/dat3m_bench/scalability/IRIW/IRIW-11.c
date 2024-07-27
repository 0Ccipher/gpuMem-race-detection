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
atomic_int vars[5]; 
atomic_int atom_5_r0_1_eq; 
atomic_int atom_5_r1_0_eq; 
atomic_int atom_5_r2_0_eq; 
atomic_int atom_5_r3_0_eq; 
atomic_int atom_5_r4_0_eq; 
atomic_int atom_6_r0_0_eq; 
atomic_int atom_6_r1_1_eq; 
atomic_int atom_6_r2_0_eq; 
atomic_int atom_6_r3_0_eq; 
atomic_int atom_6_r4_0_eq; 
atomic_int atom_7_r0_0_eq; 
atomic_int atom_7_r1_0_eq; 
atomic_int atom_7_r2_1_eq; 
atomic_int atom_7_r3_0_eq; 
atomic_int atom_7_r4_0_eq; 
atomic_int atom_8_r0_0_eq; 
atomic_int atom_8_r1_0_eq; 
atomic_int atom_8_r2_0_eq; 
atomic_int atom_8_r3_1_eq; 
atomic_int atom_8_r4_0_eq; 
atomic_int atom_9_r0_0_eq; 
atomic_int atom_9_r1_0_eq; 
atomic_int atom_9_r2_0_eq; 
atomic_int atom_9_r3_0_eq; 
atomic_int atom_9_r4_1_eq; 
atomic_int atom_10_r0_0_eq; 
atomic_int atom_10_r1_0_eq; 
atomic_int atom_10_r2_0_eq; 
atomic_int atom_10_r3_0_eq; 
atomic_int atom_10_r4_0_eq; 



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
  int v2_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v4_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v6_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v8_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v10_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v118 = (v2_r0==1);
  atomic_store_explicit(&atom_5_r0_1_eq, v118, memory_order_release);
  int v119 = (v4_r1==0);
  atomic_store_explicit(&atom_5_r1_0_eq, v119, memory_order_release);
  int v120 = (v6_r2==0);
  atomic_store_explicit(&atom_5_r2_0_eq, v120, memory_order_release);
  int v121 = (v8_r3==0);
  atomic_store_explicit(&atom_5_r3_0_eq, v121, memory_order_release);
  int v122 = (v10_r4==0);
  atomic_store_explicit(&atom_5_r4_0_eq, v122, memory_order_release);
  return NULL;
}




void *t6(void *arg){
label_7:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(6);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v12_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v14_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v16_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v18_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v20_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v123 = (v14_r0==0);
  atomic_store_explicit(&atom_6_r0_0_eq, v123, memory_order_release);
  int v124 = (v12_r1==1);
  atomic_store_explicit(&atom_6_r1_1_eq, v124, memory_order_release);
  int v125 = (v16_r2==0);
  atomic_store_explicit(&atom_6_r2_0_eq, v125, memory_order_release);
  int v126 = (v18_r3==0);
  atomic_store_explicit(&atom_6_r3_0_eq, v126, memory_order_release);
  int v127 = (v20_r4==0);
  atomic_store_explicit(&atom_6_r4_0_eq, v127, memory_order_release);
  return NULL;
}




void *t7(void *arg){
label_8:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(7);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v22_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v24_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v26_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v28_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v30_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v128 = (v26_r0==0);
  atomic_store_explicit(&atom_7_r0_0_eq, v128, memory_order_release);
  int v129 = (v24_r1==0);
  atomic_store_explicit(&atom_7_r1_0_eq, v129, memory_order_release);
  int v130 = (v22_r2==1);
  atomic_store_explicit(&atom_7_r2_1_eq, v130, memory_order_release);
  int v131 = (v28_r3==0);
  atomic_store_explicit(&atom_7_r3_0_eq, v131, memory_order_release);
  int v132 = (v30_r4==0);
  atomic_store_explicit(&atom_7_r4_0_eq, v132, memory_order_release);
  return NULL;
}




void *t8(void *arg){
label_9:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(8);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v32_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v34_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v36_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v38_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v40_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v133 = (v38_r0==0);
  atomic_store_explicit(&atom_8_r0_0_eq, v133, memory_order_release);
  int v134 = (v34_r1==0);
  atomic_store_explicit(&atom_8_r1_0_eq, v134, memory_order_release);
  int v135 = (v36_r2==0);
  atomic_store_explicit(&atom_8_r2_0_eq, v135, memory_order_release);
  int v136 = (v32_r3==1);
  atomic_store_explicit(&atom_8_r3_1_eq, v136, memory_order_release);
  int v137 = (v40_r4==0);
  atomic_store_explicit(&atom_8_r4_0_eq, v137, memory_order_release);
  return NULL;
}




void *t9(void *arg){
label_10:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(9);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v42_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v44_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v46_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v48_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v50_r0 = atomic_load_explicit(&vars[0], memory_order_acquire);
  int v138 = (v50_r0==0);
  atomic_store_explicit(&atom_9_r0_0_eq, v138, memory_order_release);
  int v139 = (v44_r1==0);
  atomic_store_explicit(&atom_9_r1_0_eq, v139, memory_order_release);
  int v140 = (v46_r2==0);
  atomic_store_explicit(&atom_9_r2_0_eq, v140, memory_order_release);
  int v141 = (v48_r3==0);
  atomic_store_explicit(&atom_9_r3_0_eq, v141, memory_order_release);
  int v142 = (v42_r4==1);
  atomic_store_explicit(&atom_9_r4_1_eq, v142, memory_order_release);
  return NULL;
}




void *t10(void *arg){
label_11:;
  __VERIFIER_thread_local_id(0);
  __VERIFIER_thread_group_id(10);
  __VERIFIER_thread_kernel_id(0);
__VERIFIER_memory_scope_device();
  int v52_r1 = atomic_load_explicit(&vars[1], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v54_r2 = atomic_load_explicit(&vars[2], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v56_r3 = atomic_load_explicit(&vars[3], memory_order_acquire);
__VERIFIER_memory_scope_device();
  int v58_r4 = atomic_load_explicit(&vars[4], memory_order_acquire);
  int v143 = (0==0);
  atomic_store_explicit(&atom_10_r0_0_eq, v143, memory_order_release);
  int v144 = (v52_r1==0);
  atomic_store_explicit(&atom_10_r1_0_eq, v144, memory_order_release);
  int v145 = (v54_r2==0);
  atomic_store_explicit(&atom_10_r2_0_eq, v145, memory_order_release);
  int v146 = (v56_r3==0);
  atomic_store_explicit(&atom_10_r3_0_eq, v146, memory_order_release);
  int v147 = (v58_r4==0);
  atomic_store_explicit(&atom_10_r4_0_eq, v147, memory_order_release);
  return NULL;
}




int main(int argc, char **argv){
  atomic_init(&vars[0], 0);
  atomic_init(&vars[1], 0);
  atomic_init(&vars[2], 0);
  atomic_init(&vars[3], 0);
  atomic_init(&vars[4], 0);
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

  int v59 = atomic_load_explicit(&atom_5_r0_1_eq, memory_order_acquire);
  int v60 = atomic_load_explicit(&atom_5_r1_0_eq, memory_order_acquire);
  int v61 = atomic_load_explicit(&atom_5_r2_0_eq, memory_order_acquire);
  int v62 = atomic_load_explicit(&atom_5_r3_0_eq, memory_order_acquire);
  int v63 = atomic_load_explicit(&atom_5_r4_0_eq, memory_order_acquire);
  int v64 = atomic_load_explicit(&atom_6_r0_0_eq, memory_order_acquire);
  int v65 = atomic_load_explicit(&atom_6_r1_1_eq, memory_order_acquire);
  int v66 = atomic_load_explicit(&atom_6_r2_0_eq, memory_order_acquire);
  int v67 = atomic_load_explicit(&atom_6_r3_0_eq, memory_order_acquire);
  int v68 = atomic_load_explicit(&atom_6_r4_0_eq, memory_order_acquire);
  int v69 = atomic_load_explicit(&atom_7_r0_0_eq, memory_order_acquire);
  int v70 = atomic_load_explicit(&atom_7_r1_0_eq, memory_order_acquire);
  int v71 = atomic_load_explicit(&atom_7_r2_1_eq, memory_order_acquire);
  int v72 = atomic_load_explicit(&atom_7_r3_0_eq, memory_order_acquire);
  int v73 = atomic_load_explicit(&atom_7_r4_0_eq, memory_order_acquire);
  int v74 = atomic_load_explicit(&atom_8_r0_0_eq, memory_order_acquire);
  int v75 = atomic_load_explicit(&atom_8_r1_0_eq, memory_order_acquire);
  int v76 = atomic_load_explicit(&atom_8_r2_0_eq, memory_order_acquire);
  int v77 = atomic_load_explicit(&atom_8_r3_1_eq, memory_order_acquire);
  int v78 = atomic_load_explicit(&atom_8_r4_0_eq, memory_order_acquire);
  int v79 = atomic_load_explicit(&atom_9_r0_0_eq, memory_order_acquire);
  int v80 = atomic_load_explicit(&atom_9_r1_0_eq, memory_order_acquire);
  int v81 = atomic_load_explicit(&atom_9_r2_0_eq, memory_order_acquire);
  int v82 = atomic_load_explicit(&atom_9_r3_0_eq, memory_order_acquire);
  int v83 = atomic_load_explicit(&atom_9_r4_1_eq, memory_order_acquire);
  int v84 = atomic_load_explicit(&atom_10_r0_0_eq, memory_order_acquire);
  int v85 = atomic_load_explicit(&atom_10_r1_0_eq, memory_order_acquire);
  int v86 = atomic_load_explicit(&atom_10_r2_0_eq, memory_order_acquire);
  int v87 = atomic_load_explicit(&atom_10_r3_0_eq, memory_order_acquire);
  int v88 = atomic_load_explicit(&atom_10_r4_0_eq, memory_order_acquire);
  int v89_conj = v87 & v88;
  int v90_conj = v86 & v89_conj;
  int v91_conj = v85 & v90_conj;
  int v92_conj = v84 & v91_conj;
  int v93_conj = v83 & v92_conj;
  int v94_conj = v82 & v93_conj;
  int v95_conj = v81 & v94_conj;
  int v96_conj = v80 & v95_conj;
  int v97_conj = v79 & v96_conj;
  int v98_conj = v78 & v97_conj;
  int v99_conj = v77 & v98_conj;
  int v100_conj = v76 & v99_conj;
  int v101_conj = v75 & v100_conj;
  int v102_conj = v74 & v101_conj;
  int v103_conj = v73 & v102_conj;
  int v104_conj = v72 & v103_conj;
  int v105_conj = v71 & v104_conj;
  int v106_conj = v70 & v105_conj;
  int v107_conj = v69 & v106_conj;
  int v108_conj = v68 & v107_conj;
  int v109_conj = v67 & v108_conj;
  int v110_conj = v66 & v109_conj;
  int v111_conj = v65 & v110_conj;
  int v112_conj = v64 & v111_conj;
  int v113_conj = v63 & v112_conj;
  int v114_conj = v62 & v113_conj;
  int v115_conj = v61 & v114_conj;
  int v116_conj = v60 & v115_conj;
  int v117_conj = v59 & v116_conj;
  if (v117_conj == 1) assert(0);
  return 0;
}
