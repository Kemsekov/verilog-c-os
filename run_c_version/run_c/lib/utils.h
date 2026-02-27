#ifndef UTILS_H
#define UTILS_H

// Function declarations for utility functions

void sim_exit(int exitcode);
void sim_putc(int ch);
void print(char* ch);
void int_to_str(int num, char* buffer);
void print_int(int num);

// Memory functions
void* memset(void* s, int c, unsigned long n);
void* memcpy(void* dest, const void* src, unsigned long n);
int memcmp(const void* s1, const void* s2, unsigned long n);

#endif