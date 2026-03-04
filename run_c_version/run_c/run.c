// RISC-V C program that performs computation to demonstrate actual instruction execution
#include "lib/utils.h"

int main()
{
    print("Starting 3n+1 at x0=17");
    int iterations = 0;
    int a = 17;
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