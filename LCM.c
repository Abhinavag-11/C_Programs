#include <stdio.h>

int main() {
    int a = 5, b = 15;  // Initialize two integers a and b
    int c;

    // Find the greater of the two numbers and assign it to c
    if (a > b) {
        c = a;
    } else {
        c = b;
    }

    // Infinite loop to find LCM
    while (1) {
        // Check if current number c is divisible by both a and b
        if (c % a == 0 && c % b == 0) {
            // If yes, print the LCM and break the loop
            printf("LCM %d", c);
            break;
        }
        c++;  // Increment c and check again
    }

    return 0;  // Program finished successfully
}
