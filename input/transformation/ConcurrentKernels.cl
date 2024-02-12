// ConcurrentKernels.cl
__global atomic_int X = 0;
__global atomic_int Y = 0;
// __global int X = 0;
// __global ient Y = 0;
__kernel void kernel1(__global atomic_int* buffer) {
  
    int global_id = get_global_id(0);
    int local_id = get_local_id(0);
    int group_id = get_group_id(0);
    printf("\n Kernel 1 Group : %d , LocalItemID: %d , GlobalItemID: %d" ,group_id , local_id ,global_id);

    atomic_store_explicit(&Y, 1, memory_order_relaxed , memory_scope_work_group);
    
    int value = atomic_load_explicit(&X, memory_order_relaxed , memory_scope_work_group);

    atomic_store_explicit(&buffer[0], value, memory_order_relaxed , memory_scope_device);

}

__kernel void kernel2(__global atomic_int* buffer) {
    int global_id = get_global_id(0);
    int local_id = get_local_id(0);
    int group_id = get_group_id(0);
    printf("\n Kernel 2 Group : %d , LocalItemID: %d , GlobalItemID: %d" ,group_id , local_id ,global_id);
    
    atomic_store_explicit(&X, 1, memory_order_relaxed , memory_scope_work_group);

    int value = atomic_load_explicit(&Y, memory_order_relaxed , memory_scope_work_group);


    atomic_store_explicit(&buffer[1], value, memory_order_relaxed , memory_scope_device);
}
