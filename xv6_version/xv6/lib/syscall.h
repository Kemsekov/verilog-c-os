#ifndef SYSCALL_H
#define SYSCALL_H

// System call numbers
#define SYS_exit      1
#define SYS_fork      2
#define SYS_read      3
#define SYS_write     4
#define SYS_open      5
#define SYS_close     6
#define SYS_sleep     7
#define SYS_kill      8
#define SYS_exec      9
#define SYS_fstat    10
#define SYS_mkdir    11
#define SYS_chdir    12
#define SYS_dup      13
#define SYS_getpid   14
#define SYS_sbrk     15
#define SYS_yield    16
#define SYS_uptime   17
#define SYS_print    18
#define SYS_printint 19

// System call interface
void syscall_init(void);
int syscall_dispatch(int sysnum, int arg0, int arg1, int arg2);

// System call implementations
int sys_exit(int code);
int sys_fork(void);
int sys_read(int fd, char* buf, int n);
int sys_write(int fd, char* buf, int n);
int sys_getpid(void);
int sys_yield(void);
int sys_sleep(int ticks);
int sys_kill(int pid);
int sys_print(char* str);
int sys_printint(int num);
int sys_uptime(void);

// Statistics
void syscall_stats(void);

#endif
