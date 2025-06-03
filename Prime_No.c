#include <stdio.h>

int main() {
    int a, b = 0;  // 'a' is the input number, 'b' counts the number of divisors

    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Loop from 1 to 'a' to count divisors
    for (int i = 1; i <= a; i++) {
        if (a % i == 0)  // If 'i' divides 'a' without remainder
            b++;         // Increment divisor count
    }

    // If number of divisors is exactly 2, 'a' is prime
    if (b == 2)
        printf("%d is a Prime number", a);
    else
        printf("%d is not a prime number", a);

    return 0;  // Program finished successfully
}
