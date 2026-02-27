// Simplified xv6-like kernel for RISC-V 32-bit simulation

// Simulation exit primitive
#define CSR_SIM_CTRL_EXIT (0 << 24)

static inline void sim_exit(int exitcode)
{
    unsigned int arg = CSR_SIM_CTRL_EXIT | ((unsigned char)exitcode);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
}

// Basic memory allocation
static char memory_pool[4096];
static int pool_offset = 0;

void* simple_malloc(int size) {
    if (pool_offset + size > sizeof(memory_pool)) {
        return 0; // Out of memory
    }
    void* ptr = &memory_pool[pool_offset];
    pool_offset += size;
    return ptr;
}

// Basic process structure
struct proc {
    int pid;
    int state; // 0=UNUSED, 1=RUNNABLE, 2=RUNNING
    char name[16];
};

// Simulated process table
struct proc proc_table[4];

// Initialize process table
void init_proc_table() {
    for (int i = 0; i < 4; i++) {
        proc_table[i].pid = i;
        proc_table[i].state = 0; // UNUSED
        for (int j = 0; j < 16; j++) {
            proc_table[i].name[j] = 0;
        }
    }
}

// Create a simple process
int create_process(const char* name) {
    for (int i = 0; i < 4; i++) {
        if (proc_table[i].state == 0) { // UNUSED
            proc_table[i].state = 1; // RUNNABLE
            int j = 0;
            while (name[j] && j < 15) {
                proc_table[i].name[j] = name[j];
                j++;
            }
            proc_table[i].name[j] = 0;
            return proc_table[i].pid;
        }
    }
    return -1; // No free process slot
}

// Count active processes
int count_active_processes() {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        if (proc_table[i].state != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Initialize process table
    init_proc_table();
    
    // Create some sample processes
    create_process("init");
    create_process("shell");
    create_process("user");
    
    // Perform some basic operations
    int active_count = count_active_processes();
    
    // Allocate some memory
    void* test_mem = simple_malloc(100);
    if (test_mem) {
        // Write some data to allocated memory
        char* ptr = (char*)test_mem;
        for (int i = 0; i < 10; i++) {
            ptr[i] = i + '0';
        }
    }
    
    // Calculate a simple result
    int result = active_count * 10 + (test_mem ? 1 : 0);
    
    // Exit with the result
    sim_exit(result & 0xFF);
    return result;
}