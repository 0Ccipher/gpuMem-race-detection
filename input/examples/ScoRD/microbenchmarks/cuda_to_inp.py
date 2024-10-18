import re

cuda_code = """
    if(blockIdx.x == 0)
    {
        int r_2 = 0;
        r_2 = atomicCAS_block(&lock, 0, 1);
        while( r_2 != 0) {}
        __threadfence_block();
        data[0] = 1;
        __threadfence_block();
        atomicExch_block(&lock, 0);
    }
    else
    {
        int r_2 = 0;
        r_2 = atomicCAS_block(&lock, 0, 1);
        while( r_2 != 0) {}
        __threadfence_block();
        data[0] = 2;
        __threadfence_block();
        atomicExch_block(&lock, 0);
    }                                     
"""

# Translation mappings
translations = {
      r'\bthreadIdx.x\b': 'local_id',
      r'\bblockIdx.x\b': 'group_id',
      #synch operations
      r'(.*?)__syncthreads\(\);': '\1/* Synchronize */\n\1__VERIFIER_memory_scope_work_group();\n\1rc = pthread_barrier_wait(&barg[group_id]);\n\1if (rc != 0 && rc != PTHREAD_BARRIER_SERIAL_THREAD) {\n\1\tprintf("Could not wait on barrier\\n");\n\1\tpthread_exit(NULL);\n\1}',
      r'(.*?)__threadfence_block\(\);':r'\1__VERIFIER_memory_scope_work_group();\n\1atomic_thread_fence(memory_order_seq_cst);',
      r'(.*?)__threadfence\(\);' : r'\1__VERIFIER_memory_scope_device();\n\1atomic_thread_fence(memory_order_seq_cst);',

      #atomic funtions
      r'(.*?)r_(.*?) = atomicAdd_block\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_work_group();\n\1r_\2 = atomic_fetch_add_explicit(&\3, \4, sc);',
      r'(.*?)r_(.*?) = atomicAdd\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_device();\n\1r_\2 = atomic_fetch_add_explicit(&\3, \4, sc);',
      r'(.*?)atomicAdd_block\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_work_group();\n\1atomic_fetch_add_explicit(&\2, \3, sc)',
      r'(.*?)atomicAdd\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_device();\n\1atomic_fetch_add_explicit(&\2, \3, sc)',   
      r'(.*?)r_(.*?) = atomicAdd_block\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_work_group();\n\1r_\2 = atomic_exchange_explicit(&\3, \4, sc);',
      r'(.*?)r_(.*?) = atomicExch\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_device();\n\1r_\2 = atomic_exchange_explicit(&\3, \4, sc);',
      r'(.*?)atomicExch_block\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_work_group();\n\1atomic_exchange_explicit(&\2, \3, sc)',
      r'(.*?)atomicExch\(&(.*?), (.*?)\)': r'\1__VERIFIER_memory_scope_device();\natomic_exchange_explicit(&\2, \3, sc)',
      
      r'(.*?)r_(.*?) = atomicCAS_block\(&(.*?), (.*?), (.*?)\)': r'\1int exp\4=\4;\n\1__VERIFIER_memory_scope_work_group();\n\1r_\2 = atomic_compare_exchange_strong(&\3 , &exp\4 , \5)',
      r'(.*?)r_(.*?) = atomicCAS\(&(.*?), (.*?), (.*?)\)': r'\1int exp\4=\4;\n\1__VERIFIER_memory_scope_device();\n\1r_\2 = atomic_compare_exchange_strong(&\3 , &exp\4 , \5)',
      r'(.*?)atomicCAS_block\(&(.*?), (.*?), (.*?)\)':r'\1int exp\3=\3;\n\1__VERIFIER_memory_scope_work_group();\n\1atomic_compare_exchange_strong(&\2 , &exp\3 , \4)',
      r'(.*?)atomicCAS\(&(.*?), (.*?), (.*?)\)':r'\1int exp\3=\3;\n\1__VERIFIER_memory_scope_device();\n\1atomic_compare_exchange_strong(&\2 , &exp\3 , \4)',

      #load and store
      # r'(.*?) = &(.*?)\[(.*?)\]': r'__VERIFIER_memory_scope_device();\n\1 = atomic_load_explicit(&d_\2[\3], sc)',
      # r'int \*base = &(.*?)\[(.*?)\]': r'__VERIFIER_memory_scope_device();\nint base = atomic_load_explicit(&d_\1[\2], sc)',
      # r'int \*blockId = &(.*?)\[(.*?)\]': r'__VERIFIER_memory_scope_device();\nint blockId = atomic_load_explicit(&d_\1[\2], sc)',
      # r'\*(.*?) = (.*?)': r'__VERIFIER_memory_scope_device();\natomic_store_explicit(&d_\1[\2], \2, sc)',


      # r'\bif\s*\((.*?)\)\s*{': r'if (\1) {',
      # r'\belse\s*{': r'else {',
      # r'\bwhile\s*\((.*?)\)\s*{': r'while (\1) {',
}

# Applying translations
c_code = cuda_code
for pattern, replacement in translations.items():
    c_code = re.sub(pattern, replacement, c_code)

print(c_code)
