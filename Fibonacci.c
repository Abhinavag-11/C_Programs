#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    // Base cases: fibonacci(0) = 0, fibonacci(1) = 1
    if (n == 0 || n == 1) {
        return n;
    } else {
        // Recursive case: sum of previous two Fibonacci numbers
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int n, i;

    // Ask user for the number of terms in the Fibonacci series
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Print the Fibonacci series up to n terms
    printf("Fibonacci Series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Print ith Fibonacci number
    }

    return 0;  // Program finished successfully
}
