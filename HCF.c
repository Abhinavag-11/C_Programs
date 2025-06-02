#include <stdio.h>

int main() {
    int a = 5, b = 15;  // Initialize two integers a and b
    int c, d;           // c will hold the smaller of a and b, d will hold the GCD

    // Determine the smaller number between a and b and store it in c
    if (a > b) {
        c = b;
    } else {
        c = a;
    }

    // Loop from 1 to the smaller number (c)
    for (int i = 1; i <= c; i++) {
        // Check if i divides both a and b (common divisor)
        if (a % i == 0 && b % i == 0) {
            d = i;  // Update d to the current common divisor
        }
    }

    // After the loop, d contains the greatest common divisor (GCD)
    printf("%d", d);

    return 0;  // Program finished successfully
}
