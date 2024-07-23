void *kernel1( void *arg) {
    struct ThreadData *tdata = (struct ThreadData *)arg;
    int global_id = tdata->global_id;
    int local_id = tdata->local_id;
    int group_id = tdata->group_id;
    int kernel_id = tdata->kernel_id;
    __VERIFIER_thread_global_id(global_id);
    __VERIFIER_thread_local_id(local_id);
    __VERIFIER_thread_group_id(group_id);
    __VERIFIER_thread_kernel_id(kernel_id);

    if(group_id == 0){
      __VERIFIER_memory_scope_work_group();
       atomic_exchange_explicit(&data[0], 1,memory_order_seq_cst);
    }    
    else{
      __VERIFIER_memory_scope_work_group();
       atomic_exchange_explicit(&data[0], 2,memory_order_seq_cst);
    }
    
    return NULL;
}