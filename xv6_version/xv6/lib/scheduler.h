#ifndef SCHEDULER_H
#define SCHEDULER_H

// Scheduler tick counter
extern unsigned int scheduler_ticks;
extern unsigned int context_switches;

// Scheduler functions
void sched_init(void);
void sched_run(void);
void sched_tick(void);
int sched_pick_next(void);
void sched_context_switch(int from_pid, int to_pid);

// Statistics
void sched_stats(void);

#endif
