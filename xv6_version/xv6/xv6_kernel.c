// Simplified xv6-like kernel for RISC-V 32-bit simulation
// Features: Process management, scheduling, memory management, syscalls

#include "lib/utils.h"

// Process states
#define PROC_UNUSED     0
#define PROC_RUNNABLE   1
#define PROC_RUNNING    2
#define PROC_SLEEPING   3

#define MAX_PROC        8
#define PROC_NAME_LEN   16

// Process structure
struct proc {
    int pid;
    int state;
    int priority;
    char name[PROC_NAME_LEN];
};

// Process table
static struct proc proc_table[MAX_PROC];
static int current_pid = -1;

// Memory pool
static char memory_pool[4096];
static int pool_offset = 0;
static int alloc_count = 0;
static int free_count = 0;

// Scheduler stats
static int scheduler_ticks = 0;
static int context_switches = 0;

// Initialize process table
void proc_init(void)
{
    for (int i = 0; i < MAX_PROC; i++) {
        proc_table[i].pid = i;
        proc_table[i].state = PROC_UNUSED;
        proc_table[i].priority = 0;
        for (int j = 0; j < PROC_NAME_LEN; j++) {
            proc_table[i].name[j] = 0;
        }
    }
}

// Create process
int proc_create(const char* name, int priority)
{
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state == PROC_UNUSED) {
            proc_table[i].state = PROC_RUNNABLE;
            proc_table[i].priority = priority;
            int j = 0;
            while (name[j] && j < PROC_NAME_LEN - 1) {
                proc_table[i].name[j] = name[j];
                j++;
            }
            proc_table[i].name[j] = 0;
            print("PROC: Created '");
            print(proc_table[i].name);
            print("' PID=");
            print_int(proc_table[i].pid);
            return proc_table[i].pid;
        }
    }
    return -1;
}

// Count active processes
int proc_count_active(void)
{
    int count = 0;
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state != PROC_UNUSED) count++;
    }
    return count;
}

// List processes
void proc_list(void)
{
    print("--- Process Table ---");
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state != PROC_UNUSED) {
            print_int(proc_table[i].pid);
            print(": ");
            print(proc_table[i].name);
            print(" state=");
            print_int(proc_table[i].state);
        }
    }
    print("Active: ");
    print_int(proc_count_active());
}

// Memory allocation
void* mem_alloc(int size)
{
    if (pool_offset + size > sizeof(memory_pool)) return 0;
    void* ptr = &memory_pool[pool_offset];
    pool_offset += size;
    alloc_count++;
    return ptr;
}

void mem_free(void* ptr)
{
    (void)ptr;
    free_count++;
}

void mem_stats(void)
{
    print("--- Memory Stats ---");
    print("Total: ");
    print_int(sizeof(memory_pool));
    print(" Used: ");
    print_int(pool_offset);
    print(" Allocs: ");
    print_int(alloc_count);
    print(" Frees: ");
    print_int(free_count);
}

// Scheduler tick
void sched_tick(void)
{
    scheduler_ticks++;
}

// Simple scheduler demo
void sched_run(void)
{
    print("--- Scheduler Demo ---");
    for (int i = 0; i < 5; i++) {
        sched_tick();
        print("Tick ");
        print_int(i);
    }
    print("Total ticks: ");
    print_int(scheduler_ticks);
}

// System call demo
void syscall_demo(void)
{
    print("--- Syscall Demo ---");
    print("getpid: ");
    print_int(current_pid);
    print("Simulating fork...");
    int child = proc_create("child", 5);
    print("Child PID: ");
    print_int(child);
}

// Main kernel entry point
int main()
{
    print("========================================");
    print("   xv6-like Kernel v0.3.0");
    print("   RISC-V 32-bit Simulation");
    print("========================================");
    print("");
    
    // Initialize
    print("Initializing kernel...");
    proc_init();
    pool_offset = 0;
    alloc_count = 0;
    free_count = 0;
    scheduler_ticks = 0;
    print("Kernel initialized");
    print("");
    
    // Process management demo
    print("=== Process Management ===");
    int pid1 = proc_create("init", 10);
    int pid2 = proc_create("shell", 8);
    int pid3 = proc_create("user", 5);
    print("Created PIDs: ");
    print_int(pid1);
    print_int(pid2);
    print_int(pid3);
    proc_list();
    print("");
    
    // Memory management demo
    print("=== Memory Management ===");
    void* ptr1 = mem_alloc(100);
    void* ptr2 = mem_alloc(200);
    void* ptr3 = mem_alloc(50);
    print("Allocated at: ");
    print_int((int)ptr1);
    print_int((int)ptr2);
    print_int((int)ptr3);
    mem_free(ptr2);
    mem_stats();
    print("");
    
    // Scheduler demo
    print("=== Scheduler ===");
    sched_run();
    print("");
    
    // Syscall demo
    print("=== System Calls ===");
    syscall_demo();
    print("");
    
    // Final stats
    print("========================================");
    print("   Kernel Statistics");
    print("========================================");
    print("Processes created: 4");
    print("Active processes: ");
    print_int(proc_count_active());
    print("Memory used: ");
    print_int(pool_offset);
    print("Scheduler ticks: ");
    print_int(scheduler_ticks);
    print("");
    print("Kernel shutdown complete");
    
    // Exit
    sim_exit(0);
    return 0;
}
