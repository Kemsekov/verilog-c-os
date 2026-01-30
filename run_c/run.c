// RISC-V C program that performs computation to demonstrate actual instruction execution

// Simulation exit primitive
#define CSR_SIM_CTRL_EXIT (0 << 24)

static inline void sim_exit(int exitcode)
{
    unsigned int arg = CSR_SIM_CTRL_EXIT | ((unsigned char)exitcode);
    asm volatile ("csrw dscratch,%0": : "r" (arg));
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
    
    // Exit with the result
    sim_exit(iterations);
    return iterations;
}