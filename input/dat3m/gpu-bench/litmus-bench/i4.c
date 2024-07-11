/* Copyright (C)
* This benchmark is part of NIDHUGG-CCV*/

#include <pthread.h>
#include <stdatomic.h>
#include <stdio.h>
#include <assert.h>

int vars[2]; 
int atom_2_r1_4; 
int atom_2_r2_1; 
int atom_3_r1_2; 
int atom_3_r2_3; 
int v1;
int v2_r1;
int v3;
int v4_r2;
int v5;
int v6_r1;
int v7;
int v8_r2;
int v9;
int v10;
int v11;
int v12;
int v13_conj;
int v14_conj;
int v15_conj;
int v16;
int v17;
int v18;
int v19;

int __fence_var = 0;
int fr = 0;
int label = 0;

void _t0(){
label=1;
vars[0]=1;
vars[1]=2;

}

void *t0(void *arg){
_t0();
return NULL;

}

void _t1(){
label=2;
vars[1]=3;
vars[0]=4;

}

void *t1(void *arg){
_t1();
return NULL;

}

void _t2(){
label=3;
v2_r1 = vars[0];
v4_r2 = vars[0];
v16 = (v2_r1 == 4);
atom_2_r1_4=v16;
v17 = (v4_r2 == 1);
atom_2_r2_1=v17;

}

void *t2(void *arg){
_t2();
return NULL;

}

void _t3(){
label=4;
v6_r1 = vars[1];
v8_r2 = vars[1];
v18 = (v6_r1 == 2);
atom_3_r1_2=v18;
v19 = (v8_r2 == 3);
atom_3_r2_3=v19;

}

void *t3(void *arg){
_t3();
return NULL;

}

void _check(){
v9 = atom_2_r1_4;
v10 = atom_2_r2_1;
v11 = atom_3_r1_2;
v12 = atom_3_r2_3;
v13_conj = v11 & v12;
v14_conj = v10 & v13_conj;
v15_conj = v9 & v14_conj;
  if (v15_conj == 1) assert(0);

}

int main(int argc, char **argv){
  pthread_t thr0; 
  pthread_t thr1; 
  pthread_t thr2; 
  pthread_t thr3; 

vars[1]=0;
vars[0]=0;
atom_2_r1_4= 0; 
atom_2_r2_1= 0; 
atom_3_r1_2= 0; 
atom_3_r2_3= 0; 
  __fence_var = 0; 

  pthread_create(&thr0 , NULL , t0, NULL);
  pthread_create(&thr1 , NULL , t1, NULL);
  pthread_create(&thr2 , NULL , t2, NULL);
  pthread_create(&thr3 , NULL , t3, NULL);

  pthread_join(thr0,NULL);
  pthread_join(thr1,NULL);
  pthread_join(thr2,NULL);
  pthread_join(thr3,NULL);

_check();
  return 0;
}
