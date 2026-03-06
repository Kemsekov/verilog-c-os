#ifndef TIMER_H
#define TIMER_H

// Timer configuration
#define TIMER_HZ        100     // Timer frequency
#define TIMER_INTERVAL  10      // Milliseconds per tick

// Timer functions
void timer_init(void);
void timer_tick(void);
unsigned int timer_ticks(void);
unsigned int timer_uptime(void);

// Sleep functions
void timer_sleep(int ticks);
void timer_delay(int ms);

// Statistics
void timer_stats(void);

#endif
