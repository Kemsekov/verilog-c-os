// RISC-V C program that performs computation to demonstrate actual instruction execution

// Simulation exit primitive
#define CSR_SIM_CTRL_EXIT (0 << 24)
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


int main()
{
    int iterations = 0;
    int a = 312;
    while(a>1){
        if(a%2==0)
            a/=2;
        else
            a=3*a+1;
        iterations++;
    }
    print("hello!");
    // Exit with the result
    sim_exit(iterations);
    return iterations;
}