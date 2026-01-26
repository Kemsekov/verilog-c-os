int main() {
    // Completely different program to test if changes affect simulation
    int x = 100;
    int y = 200;
    int z = x * y;  // Different computation
    int result = z + x - y;

    // Return a different value to see if it affects simulation
    return result;  // This will return 100*200 + 100 - 200 = 19900
}