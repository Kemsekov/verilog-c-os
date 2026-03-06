#include "utils.h"
#include "process.h"

// Global process table
struct proc proc_table[MAX_PROC];
int current_pid = -1;

// Initialize process table
void proc_init(void)
{
    for (int i = 0; i < MAX_PROC; i++) {
        proc_table[i].pid = i;
        proc_table[i].state = PROC_UNUSED;
        proc_table[i].priority = 0;
        proc_table[i].counter = 0;
        proc_table[i].priority_counter = 0;
        proc_table[i].context = 0;
        proc_table[i].stack_ptr = 0;
        for (int j = 0; j < PROC_NAME_LEN; j++) {
            proc_table[i].name[j] = 0;
        }
    }
    current_pid = -1;
}

// Allocate a new process slot
int proc_alloc(void)
{
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state == PROC_UNUSED) {
            return i;
        }
    }
    return -1;  // No free slot
}

// Free a process slot
void proc_free(int pid)
{
    if (pid < 0 || pid >= MAX_PROC) return;
    
    proc_table[pid].state = PROC_UNUSED;
    proc_table[pid].priority = 0;
    proc_table[pid].counter = 0;
    proc_table[pid].priority_counter = 0;
    proc_table[pid].context = 0;
    proc_table[pid].stack_ptr = 0;
    for (int j = 0; j < PROC_NAME_LEN; j++) {
        proc_table[pid].name[j] = 0;
    }
}

// Get process by PID
struct proc* proc_get(int pid)
{
    if (pid < 0 || pid >= MAX_PROC) return 0;
    return &proc_table[pid];
}

// Get current process
struct proc* proc_get_current(void)
{
    if (current_pid < 0 || current_pid >= MAX_PROC) return 0;
    return &proc_table[current_pid];
}

// Count active processes
int proc_count_active(void)
{
    int count = 0;
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state != PROC_UNUSED) {
            count++;
        }
    }
    return count;
}

// Count processes by state
int proc_count_by_state(int state)
{
    int count = 0;
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state == state) {
            count++;
        }
    }
    return count;
}

// Create a new process
int proc_create(const char* name, int priority)
{
    int slot = proc_alloc();
    if (slot < 0) {
        print("PROC: No free process slots");
        return -1;
    }
    
    struct proc* p = &proc_table[slot];
    p->state = PROC_RUNNABLE;
    p->priority = priority;
    p->counter = 10;  // Default time slice
    p->priority_counter = priority;
    p->context = 0;
    p->stack_ptr = 0;
    
    // Copy name
    int i = 0;
    while (name[i] && i < PROC_NAME_LEN - 1) {
        p->name[i] = name[i];
        i++;
    }
    p->name[i] = 0;
    
    print("PROC: Created process '");
    print(p->name);
    print("' with PID ");
    print_int(p->pid);
    
    return p->pid;
}

// Put process to sleep
int proc_sleep(int pid)
{
    struct proc* p = proc_get(pid);
    if (!p || p->state == PROC_UNUSED) return -1;
    
    p->state = PROC_SLEEPING;
    return 0;
}

// Wake up a sleeping process
int proc_wakeup(int pid)
{
    struct proc* p = proc_get(pid);
    if (!p || p->state != PROC_SLEEPING) return -1;
    
    p->state = PROC_RUNNABLE;
    return 0;
}

// Kill a process
int proc_kill(int pid)
{
    struct proc* p = proc_get(pid);
    if (!p || p->state == PROC_UNUSED) return -1;
    
    p->state = PROC_ZOMBIE;
    print("PROC: Killed process '");
    print(p->name);
    print("' (PID ");
    print_int(pid);
    print(")");
    
    // Free the slot
    proc_free(pid);
    return 0;
}

// Yield CPU (for scheduler)
void proc_yield(void)
{
    struct proc* p = proc_get_current();
    if (p) {
        if (p->state == PROC_RUNNING) {
            p->state = PROC_RUNNABLE;
        }
    }
    current_pid = -1;
}

// List all processes
void proc_list(void)
{
    print("\n=== Process Table ===");
    print("PID  State     Name");
    print("--------------------");
    
    for (int i = 0; i < MAX_PROC; i++) {
        if (proc_table[i].state != PROC_UNUSED) {
            print_int(proc_table[i].pid);
            print("  ");
            
            switch (proc_table[i].state) {
                case PROC_RUNNABLE: print("RUNNABLE "); break;
                case PROC_RUNNING:  print("RUNNING  "); break;
                case PROC_SLEEPING: print("SLEEPING "); break;
                case PROC_ZOMBIE:   print("ZOMBIE   "); break;
                default:            print("UNKNOWN  "); break;
            }
            
            print(proc_table[i].name);
        }
    }
    print("--------------------");
    print("Active: ");
    print_int(proc_count_active());
    print("");
}

// Show process info
void proc_info(int pid)
{
    struct proc* p = proc_get(pid);
    if (!p || p->state == PROC_UNUSED) {
        print("PROC: Invalid PID ");
        print_int(pid);
        return;
    }
    
    print("Process Info:");
    print("  PID: ");
    print_int(p->pid);
    print("  Name: ");
    print(p->name);
    print("  State: ");
    print_int(p->state);
    print("  Priority: ");
    print_int(p->priority);
    print("  Counter: ");
    print_int(p->counter);
}
