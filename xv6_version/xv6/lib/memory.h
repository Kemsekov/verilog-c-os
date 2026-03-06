#ifndef MEMORY_H
#define MEMORY_H

// Memory configuration
#define MEM_POOL_SIZE       8192
#define MEM_BLOCK_SIZE      32
#define MEM_MAX_BLOCKS      (MEM_POOL_SIZE / MEM_BLOCK_SIZE)
#define MEM_MAX_ALLOCATIONS 64

// Memory block structure
struct mem_block {
    int size;
    int used;
    int next;
};

// Memory statistics
struct mem_stats {
    unsigned int total_bytes;
    unsigned int used_bytes;
    unsigned int free_bytes;
    unsigned int allocations;
    unsigned int frees;
    unsigned int failed_allocs;
};

// Memory functions
void mem_init(void);
void* mem_alloc(unsigned int size);
void mem_free(void* ptr);
void* mem_realloc(void* ptr, unsigned int new_size);
void mem_clear(void);

// Memory info
void mem_stats(void);
unsigned int mem_available(void);
unsigned int mem_used(void);

// Block operations
int mem_count_blocks(void);
int mem_count_free_blocks(void);

#endif
