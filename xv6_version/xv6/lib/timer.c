#include "utils.h"
#include "timer.h"
#include "scheduler.h"
#include "process.h"

// Timer state
static unsigned int ticks = 0;
static unsigned int seconds = 0;
static unsigned int minutes = 0;

// Initialize timer
void timer_init(void)
{
    ticks = 0;
    seconds = 0;
    minutes = 0;
    print("TIMER: Initialized at ");
    print_int(TIMER_HZ);
    print(" Hz");
}

// Timer tick handler
void timer_tick(void)
{
    ticks++;
    
    // Update time
    if (ticks >= TIMER_HZ) {
        ticks = 0;
        seconds++;
        
        if (seconds >= 60) {
            seconds = 0;
            minutes++;
        }
    }
    
    // Notify scheduler
    sched_tick();
}

// Get current tick count
unsigned int timer_ticks(void)
{
    return ticks;
}

// Get uptime in ticks
unsigned int timer_uptime(void)
{
    return scheduler_ticks;
}

// Sleep for specified ticks
void timer_sleep(int ticks_to_sleep)
{
    print("TIMER: Sleeping for ");
    print_int(ticks_to_sleep);
    print(" ticks");
    
    struct proc* p = proc_get_current();
    if (p) {
        proc_sleep(p->pid);
        
        // Simulate sleep
        for (int i = 0; i < ticks_to_sleep; i++) {
            timer_tick();
        }
        
        proc_wakeup(p->pid);
    }
}

// Delay for specified milliseconds
void timer_delay(int ms)
{
    int ticks_needed = (ms * TIMER_HZ) / 1000;
    if (ticks_needed < 1) ticks_needed = 1;
    
    print("TIMER: Delaying ");
    print_int(ms);
    print(" ms (");
    print_int(ticks_needed);
    print(" ticks)");
    
    for (int i = 0; i < ticks_needed; i++) {
        timer_tick();
    }
}

// Print timer statistics
void timer_stats(void)
{
    print("\n=== Timer Statistics ===");
    print("Current ticks: ");
    print_int(ticks);
    print(" Uptime: ");
    print_int(scheduler_ticks);
    print(" ticks");
    print(" Time: ");
    print_int(minutes);
    print(":");
    print_int(seconds);
    print("");
}
