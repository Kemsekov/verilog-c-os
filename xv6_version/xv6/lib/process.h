#ifndef PROCESS_H
#define PROCESS_H

// Process states
#define PROC_UNUSED     0
#define PROC_RUNNABLE   1
#define PROC_RUNNING    2
#define PROC_SLEEPING   3
#define PROC_ZOMBIE     4

// Maximum processes
#define MAX_PROC        8
#define PROC_NAME_LEN   16

// Process structure
struct proc {
    int pid;
    int state;
    int priority;
    int counter;        // Time slice counter
    int priority_counter;
    char name[PROC_NAME_LEN];
    unsigned int context;  // Saved context (simplified)
    unsigned int stack_ptr;
};

// Process table
extern struct proc proc_table[MAX_PROC];
extern int current_pid;

// Process management functions
void proc_init(void);
int proc_alloc(void);
void proc_free(int pid);
struct proc* proc_get(int pid);
struct proc* proc_get_current(void);
int proc_count_active(void);
int proc_count_by_state(int state);

// Process control
int proc_create(const char* name, int priority);
int proc_sleep(int pid);
int proc_wakeup(int pid);
int proc_kill(int pid);
void proc_yield(void);

// Process listing
void proc_list(void);
void proc_info(int pid);

#endif
