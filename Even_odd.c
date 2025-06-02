#include <stdio.h>

int main() {
    int a, i;  // Declare variables: 'a' for input number, 'i' is unused here
    
    // Prompt the user to enter a number
    printf("Enter a number: ");
    
    // Read the input number from the user and store it in 'a'
    scanf("%d", &a);
    
    // Check if the number is divisible by 2
    if (a % 2 == 0)
        // If remainder is 0, it's an even number
        printf("%d is Even Number\n", a);
    else
        // Otherwise, it's an odd number
        printf("%d is Odd Number\n", a);
    
    return 0;  // Indicate successful program termination
}
