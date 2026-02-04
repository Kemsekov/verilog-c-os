// RISC-V C program that performs computation to demonstrate actual instruction execution

// Simulation exit primitive
#define CSR_SIM_CTRL_EXIT (0 << 24)
// Code for putting char on screen
#define CSR_SIM_CTRL_PUTC (1 << 24)

static inline void sim_exit(int exitcode)
{
    unsigned int arg = CSR_SIM_CTRL_EXIT | ((unsigned char)exitcode);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
}

static inline void sim_putc(int ch)
{
    unsigned int arg = CSR_SIM_CTRL_PUTC | (ch & 0xFF);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
}

static inline void print(char* ch)
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

static void print_int(int num){
    // Use static allocation to ensure memory is in a known location
    static char buf[256] = {0};
    int_to_str(num,buf);
    print(buf);
}

int main()
{
    int iterations = 0;
    int a = 312;
    while(a>1){
        print_int(a);
        if(a%2==0)
            a/=2;
        else
            a=3*a+1;
        iterations++;
    }
    // Exit with the result
    sim_exit(iterations);
    return iterations;
}