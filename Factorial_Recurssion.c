#include <stdio.h>

// Recursive function to calculate factorial of a number n
int factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1)
        return 1;
    else
        // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
}

int main() {
    int num = 5;  // Number to calculate factorial for

    // Call factorial function and print the result
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;  // Program finished successfully
}
