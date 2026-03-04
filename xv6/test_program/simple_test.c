// Simple test program for RISC-V Verilog simulation
// This program performs some operations and then loops forever

// Memory-mapped I/O address for test output
#define TEST_OUTPUT (*(volatile unsigned int*)0x60000000)

// Simple delay loop
void delay(unsigned int count) {
    volatile unsigned int i;
    for (i = 0; i < count; i++);
}

int main(void) {
    unsigned int a = 0x12345678;
    unsigned int b = 0x87654321;
    unsigned int result;
    
    // Step 1: Write initial value
    TEST_OUTPUT = a;
    delay(100);
    
    // Step 2: Addition
    result = a + b;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 3: Subtraction
    result = a - b;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 4: AND
    result = a & b;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 5: OR
    result = a | b;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 6: XOR
    result = a ^ b;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 7: Shift left
    result = a << 4;
    TEST_OUTPUT = result;
    delay(100);
    
    // Step 8: Shift right
    result = b >> 4;
    TEST_OUTPUT = result;
    delay(100);
    
    // Final result marker
    TEST_OUTPUT = 0xDEADBEEF;
    
    // Infinite loop - program should stop here
    while (1) {
        // Stay here forever
        __asm__ volatile ("nop");
    }
    
    return 0;
}
