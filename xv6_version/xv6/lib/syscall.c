#include "utils.h"
#include "process.h"
#include "scheduler.h"
#include "memory.h"
#include "syscall.h"

// System call statistics
static unsigned int syscall_count[20];
static unsigned int total_syscalls = 0;

// Initialize syscall interface
void syscall_init(void)
{
    for (int i = 0; i < 20; i++) {
        syscall_count[i] = 0;
    }
    total_syscalls = 0;
    print("SYSCALL: Interface initialized");
}

// Dispatch system call
int syscall_dispatch(int sysnum, int arg0, int arg1, int arg2)
{
    (void)arg1;  // Unused in simplified version
    (void)arg2;
    
    if (sysnum < 0 || sysnum >= 20) {
        print("SYSCALL: Invalid syscall number ");
        print_int(sysnum);
        return -1;
    }
    
    syscall_count[sysnum]++;
    total_syscalls++;
    
    switch (sysnum) {
        case SYS_exit:      return sys_exit(arg0);
        case SYS_fork:      return sys_fork();
        case SYS_read:      return sys_read(arg0, (char*)arg1, arg2);
        case SYS_write:     return sys_write(arg0, (char*)arg1, arg2);
        case SYS_getpid:    return sys_getpid();
        case SYS_yield:     return sys_yield();
        case SYS_sleep:     return sys_sleep(arg0);
        case SYS_kill:      return sys_kill(arg0);
        case SYS_print:     return sys_print((char*)arg0);
        case SYS_printint:  return sys_printint(arg0);
        case SYS_uptime:    return sys_uptime();
        default:
            print("SYSCALL: Unimplemented syscall ");
            print_int(sysnum);
            return -1;
    }
}

// Exit system call
int sys_exit(int code)
{
    print("SYSCALL: exit(");
    print_int(code);
    print(")");
    
    struct proc* p = proc_get_current();
    if (p) {
        proc_kill(p->pid);
    }
    
    sim_exit(code);
    return 0;
}

// Fork system call (simplified)
int sys_fork(void)
{
    print("SYSCALL: fork()");
    
    struct proc* parent = proc_get_current();
    if (!parent) return -1;
    
    // Create child process
    int child_pid = proc_create("child", parent->priority);
    if (child_pid < 0) return -1;
    
    print("SYSCALL: fork() returned ");
    print_int(child_pid);
    
    return child_pid;
}

// Read system call (simplified)
int sys_read(int fd, char* buf, int n)
{
    (void)fd;
    (void)buf;
    (void)n;
    print("SYSCALL: read()");
    return 0;  // Not implemented
}

// Write system call (simplified)
int sys_write(int fd, char* buf, int n)
{
    (void)fd;
    (void)n;
    print("SYSCALL: write()");
    if (buf) {
        print(buf);
    }
    return 0;
}

// Get PID system call
int sys_getpid(void)
{
    struct proc* p = proc_get_current();
    if (!p) return -1;
    return p->pid;
}

// Yield system call
int sys_yield(void)
{
    print("SYSCALL: yield()");
    proc_yield();
    return 0;
}

// Sleep system call
int sys_sleep(int ticks)
{
    print("SYSCALL: sleep(");
    print_int(ticks);
    print(")");
    
    struct proc* p = proc_get_current();
    if (!p) return -1;
    
    proc_sleep(p->pid);
    return 0;
}

// Kill system call
int sys_kill(int pid)
{
    print("SYSCALL: kill(");
    print_int(pid);
    print(")");
    return proc_kill(pid);
}

// Print system call
int sys_print(char* str)
{
    if (str) {
        print(str);
    }
    return 0;
}

// Print integer system call
int sys_printint(int num)
{
    print_int(num);
    return 0;
}

// Uptime system call
int sys_uptime(void)
{
    return scheduler_ticks;
}

// Print syscall statistics
void syscall_stats(void)
{
    print("\n=== System Call Statistics ===");
    print("Total syscalls: ");
    print_int(total_syscalls);
    print("");
    
    print("exit: ");
    print_int(syscall_count[SYS_exit]);
    print(" fork: ");
    print_int(syscall_count[SYS_fork]);
    print(" yield: ");
    print_int(syscall_count[SYS_yield]);
    print(" sleep: ");
    print_int(syscall_count[SYS_sleep]);
    print(" kill: ");
    print_int(syscall_count[SYS_kill]);
    print(" getpid: ");
    print_int(syscall_count[SYS_getpid]);
    print(" print: ");
    print_int(syscall_count[SYS_print]);
    print("");
}
