// Utility functions for RISC-V simulation

// Simulation exit primitive
#define CSR_SIM_CTRL_EXIT (0 << 24)
// Code for putting char on screen
#define CSR_SIM_CTRL_PUTC (1 << 24)

void sim_exit(int exitcode)
{
    unsigned int arg = CSR_SIM_CTRL_EXIT | ((unsigned char)exitcode);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
}

void sim_putc(int ch)
{
    unsigned int arg = CSR_SIM_CTRL_PUTC | (ch & 0xFF);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
}

void print(char* ch)
{
    for(int i = 0;ch[i]!='\0';i++)
        sim_putc(ch[i]);
    sim_putc('\n');
}

void int_to_str(int num, char* buffer) {
    int i = 0;
    int is_negative = 0;

    // Handle zero separately
    if (num == 0) {
        buffer[0] = '0';
        buffer[1] = '\0';
        return;
    }

    // Convert positive numbers to negative to safely handle INT_MIN
    if (num > 0) {
        num = -num;
    } else {
        is_negative = 1;
    }

    // Extract digits (working with negative numbers avoids INT_MIN overflow)
    while (num < 0) {
        int digit = -(num % 10);  // Get positive digit value
        buffer[i] = '0' + digit;
        i = i + 1;
        num = num / 10;
    }

    // Add negative sign if needed
    if (is_negative == 1) {
        buffer[i] = '-';
        i = i + 1;
    }

    // Null terminate
    buffer[i] = '\0';

    // Reverse the string in-place using indices
    int start = 0;
    int end = i - 1;
    while (start < end) {
        char temp = buffer[start];
        buffer[start] = buffer[end];
        buffer[end] = temp;
        start = start + 1;
        end = end - 1;
    }
}

void print_int(int num){
    char buf[256] = {0};
    int_to_str(num,buf);
    print(buf);
}

// Custom implementation of memset for freestanding environment
typedef unsigned long size_t;

void* memset(void* s, int c, size_t n) {
    unsigned char* p = (unsigned char*)s;
    for (size_t i = 0; i < n; i++) {
        p[i] = (unsigned char)c;
    }
    return s;
}

// Custom implementation of memcpy for freestanding environment
void* memcpy(void* dest, const void* src, size_t n) {
    unsigned char* d = (unsigned char*)dest;
    const unsigned char* s = (unsigned char*)src;
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }
    return dest;
}

// Custom implementation of memcmp for freestanding environment
int memcmp(const void* s1, const void* s2, size_t n) {
    const unsigned char* p1 = (const unsigned char*)s1;
    const unsigned char* p2 = (const unsigned char*)s2;
    for (size_t i = 0; i < n; i++) {
        if (p1[i] != p2[i]) {
            return p1[i] - p2[i];
        }
    }
    return 0;
}