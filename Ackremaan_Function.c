#include <stdio.h>

// Recursive implementation of the Ackermann function
int ackermann(int m, int n) {
    // Base case: If m is 0, return n + 1
    if (m == 0)
        return n + 1;
    // If m > 0 and n == 0, recursively call ackermann with (m-1, 1)
    else if (m > 0 && n == 0)
        return ackermann(m - 1, 1);
    // Otherwise, recursively call ackermann with (m-1, ackermann(m, n-1))
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    int m = 2, n = 3;

    // Call the Ackermann function and print the result
    printf("Ackermann(%d, %d) = %d\n", m, n, ackermann(m, n));

    return 0;
}
