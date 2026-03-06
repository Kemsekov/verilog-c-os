#include "utils.h"
#include "memory.h"

// Memory pool
static char memory_pool[MEM_POOL_SIZE];
static struct mem_block blocks[MEM_MAX_BLOCKS];
static int free_list_head = 0;

// Memory statistics
static struct mem_stats stats;

// Initialize memory manager
void mem_init(void)
{
    // Clear memory pool
    for (int i = 0; i < MEM_POOL_SIZE; i++) {
        memory_pool[i] = 0;
    }
    
    // Initialize block list
    for (int i = 0; i < MEM_MAX_BLOCKS; i++) {
        blocks[i].size = MEM_BLOCK_SIZE;
        blocks[i].used = 0;
        blocks[i].next = i + 1;
    }
    blocks[MEM_MAX_BLOCKS - 1].next = -1;
    
    free_list_head = 0;
    
    // Reset statistics
    stats.total_bytes = MEM_POOL_SIZE;
    stats.used_bytes = 0;
    stats.free_bytes = MEM_POOL_SIZE;
    stats.allocations = 0;
    stats.frees = 0;
    stats.failed_allocs = 0;
    
    print("MEM: Initialized ");
    print_int(MEM_POOL_SIZE);
    print(" bytes (");
    print_int(MEM_MAX_BLOCKS);
    print(" blocks)");
}

// Allocate memory
void* mem_alloc(unsigned int size)
{
    if (size == 0) return 0;
    
    // Calculate blocks needed
    int blocks_needed = (size + MEM_BLOCK_SIZE - 1) / MEM_BLOCK_SIZE;
    
    // Find contiguous free blocks
    int start_block = -1;
    int consecutive = 0;
    int current = free_list_head;
    int prev = -1;
    
    while (current >= 0 && current < MEM_MAX_BLOCKS) {
        if (!blocks[current].used) {
            if (start_block < 0) {
                start_block = current;
                consecutive = 1;
            } else {
                consecutive++;
            }
            
            if (consecutive >= blocks_needed) {
                break;
            }
        } else {
            start_block = -1;
            consecutive = 0;
        }
        prev = current;
        current = blocks[current].next;
    }
    
    // Not enough contiguous blocks
    if (consecutive < blocks_needed) {
        stats.failed_allocs++;
        print("MEM: Allocation failed (");
        print_int(size);
        print(" bytes)");
        return 0;
    }
    
    // Allocate blocks
    void* ptr = &memory_pool[start_block * MEM_BLOCK_SIZE];
    
    for (int i = 0; i < blocks_needed; i++) {
        blocks[start_block + i].used = 1;
    }
    
    // Update statistics
    stats.used_bytes += blocks_needed * MEM_BLOCK_SIZE;
    stats.free_bytes -= blocks_needed * MEM_BLOCK_SIZE;
    stats.allocations++;
    
    return ptr;
}

// Free memory
void mem_free(void* ptr)
{
    if (!ptr) return;
    
    // Calculate block index
    unsigned int offset = (char*)ptr - memory_pool;
    if (offset >= MEM_POOL_SIZE) return;
    
    int block = offset / MEM_BLOCK_SIZE;
    
    // Free consecutive used blocks
    while (block < MEM_MAX_BLOCKS && blocks[block].used) {
        blocks[block].used = 0;
        block++;
    }
    
    // Update statistics
    stats.frees++;
}

// Reallocate memory
void* mem_realloc(void* ptr, unsigned int new_size)
{
    if (!ptr) return mem_alloc(new_size);
    if (new_size == 0) {
        mem_free(ptr);
        return 0;
    }
    
    // Allocate new memory
    void* new_ptr = mem_alloc(new_size);
    if (!new_ptr) return 0;
    
    // Copy old data (simplified)
    unsigned int offset = (char*)ptr - memory_pool;
    int old_blocks = offset / MEM_BLOCK_SIZE;
    int old_size = 0;
    
    // Count old blocks
    while (old_blocks + old_size < MEM_MAX_BLOCKS && 
           blocks[old_blocks + old_size].used) {
        old_size++;
    }
    old_size *= MEM_BLOCK_SIZE;
    
    // Copy data
    unsigned int copy_size = (old_size < new_size) ? old_size : new_size;
    for (unsigned int i = 0; i < copy_size; i++) {
        ((char*)new_ptr)[i] = ((char*)ptr)[i];
    }
    
    // Free old memory
    mem_free(ptr);
    
    return new_ptr;
}

// Clear all memory
void mem_clear(void)
{
    mem_init();
    print("MEM: Cleared all memory");
}

// Print memory statistics
void mem_stats(void)
{
    print("\n=== Memory Statistics ===");
    print("Total: ");
    print_int(stats.total_bytes);
    print(" bytes");
    print("Used: ");
    print_int(stats.used_bytes);
    print(" bytes");
    print("Free: ");
    print_int(stats.free_bytes);
    print(" bytes");
    print("Allocations: ");
    print_int(stats.allocations);
    print("Frees: ");
    print_int(stats.frees);
    print("Failed: ");
    print_int(stats.failed_allocs);
    print("Utilization: ");
    if (stats.total_bytes > 0) {
        int util = (stats.used_bytes * 100) / stats.total_bytes;
        print_int(util);
        print("%");
    }
    print("");
}

// Get available memory
unsigned int mem_available(void)
{
    return stats.free_bytes;
}

// Get used memory
unsigned int mem_used(void)
{
    return stats.used_bytes;
}

// Count total blocks
int mem_count_blocks(void)
{
    return MEM_MAX_BLOCKS;
}

// Count free blocks
int mem_count_free_blocks(void)
{
    int count = 0;
    for (int i = 0; i < MEM_MAX_BLOCKS; i++) {
        if (!blocks[i].used) count++;
    }
    return count;
}
