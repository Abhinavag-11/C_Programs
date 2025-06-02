#include <stdio.h>

int main() {
    int a = 12;  // Binary: 1100
    int b = 5;   // Binary: 0101

    printf("a & b (AND): %d\n", a & b);   // Output: 4  (Binary: 0100)
    printf("a | b (OR): %d\n", a | b);    // Output: 13 (Binary: 1101)
    printf("a ^ b (XOR): %d\n", a ^ b);   // Output: 9  (Binary: 1001)
    printf("~a (NOT): %d\n", ~a);        // Output: -13 (Binary: 11110011 - two's complement)
    printf("a << 2 (Left Shift): %d\n", a << 2); // Output: 48 (Binary: 110000)
    printf("a >> 1 (Right Shift): %d\n", a >> 1); // Output: 6 (Binary: 0110)

    return 0;
} 