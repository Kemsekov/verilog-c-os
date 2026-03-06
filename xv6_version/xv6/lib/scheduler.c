#include "utils.h"
#include "process.h"
#include "scheduler.h"

// Global scheduler state
unsigned int scheduler_ticks = 0;
unsigned int context_switches = 0;

// Initialize scheduler
void sched_init(void)
{
    scheduler_ticks = 0;
    context_switches = 0;
    print("SCHED: Scheduler initialized");
}

// Pick next process to run (round-robin with priority)
int sched_pick_next(void)
{
    int next_pid = -1;
    int max_priority = -1;
    
    // Find highest priority runnable process
    for (int i = 0; i < MAX_PROC; i++) {
        struct proc* p = proc_get(i);
        if (p && p->state == PROC_RUNNABLE) {
            // Priority-based selection
            if (p->priority_counter > max_priority) {
                max_priority = p->priority_counter;
                next_pid = i;
            }
        }
    }
    
    // If no process found by priority, use round-robin
    if (next_pid < 0) {
        int start = (current_pid + 1) % MAX_PROC;
        for (int i = 0; i < MAX_PROC; i++) {
            int pid = (start + i) % MAX_PROC;
            struct proc* p = proc_get(pid);
            if (p && p->state == PROC_RUNNABLE) {
                next_pid = pid;
                break;
            }
        }
    }
    
    return next_pid;
}

// Context switch (simplified simulation)
void sched_context_switch(int from_pid, int to_pid)
{
    if (from_pid >= 0 && from_pid < MAX_PROC) {
        struct proc* from = proc_get(from_pid);
        if (from && from->state == PROC_RUNNING) {
            from->state = PROC_RUNNABLE;
        }
    }
    
    if (to_pid >= 0 && to_pid < MAX_PROC) {
        struct proc* to = proc_get(to_pid);
        if (to) {
            to->state = PROC_RUNNING;
            current_pid = to_pid;
            context_switches++;
        }
    }
}

// Scheduler tick - called periodically
void sched_tick(void)
{
    scheduler_ticks++;
    
    struct proc* current = proc_get_current();
    
    // Decrease counter for current process
    if (current) {
        current->counter--;
        current->priority_counter--;
        
        // Priority counter expired - recalculate
        if (current->priority_counter <= 0) {
            current->priority_counter = current->priority;
            current->counter = 10;  // Reset time slice
        }
        
        // Time slice expired - yield
        if (current->counter <= 0) {
            print("SCHED: Time slice expired for '");
            print(current->name);
            print("'");
            proc_yield();
        }
    }
}

// Run scheduler - main scheduling loop (simplified for simulation)
void sched_run(void)
{
    print("\n=== Starting Scheduler ===");
    
    // Just demonstrate scheduling without infinite loop
    print("Picking first runnable process...");
    
    int next = sched_pick_next();
    if (next >= 0) {
        struct proc* p = proc_get(next);
        print("Selected process: '");
        print(p->name);
        print("' (PID ");
        print_int(next);
        print(")");
        
        // Simulate a few ticks
        print("Simulating execution...");
        for (int i = 0; i < 3; i++) {
            sched_tick();
        }
        
        print("Execution complete");
    } else {
        print("No runnable processes found");
    }
    
    print("\n=== Scheduler Demo Complete ===");
    sched_stats();
}

// Print scheduler statistics
void sched_stats(void)
{
    print("\n=== Scheduler Statistics ===");
    print("Total ticks: ");
    print_int(scheduler_ticks);
    print("Context switches: ");
    print_int(context_switches);
    print("Active processes: ");
    print_int(proc_count_active());
    print("Runnable: ");
    print_int(proc_count_by_state(PROC_RUNNABLE));
    print("Running: ");
    print_int(proc_count_by_state(PROC_RUNNING));
    print("Sleeping: ");
    print_int(proc_count_by_state(PROC_SLEEPING));
    print("");
}
