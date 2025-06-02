#include <stdio.h>

// Swap function that takes two integers by value (copies)
void swap(int a, int b) {
    int temp = a;  // Store the value of 'a' in temp
    a = b;         // Assign value of 'b' to 'a' (local copy)
    b = temp;      // Assign temp (original 'a') to 'b' (local copy)

    // Print the swapped values inside the function (only local copies)
    printf("Inside swap function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;  // Original variables

    // Print values before calling swap
    printf("Before swap function: x = %d, y = %d\n", x, y);
    
    // Call swap - passes copies of x and y, NOT their actual variables
    swap(x, y);
    
    // Print values after calling swap - originals are unchanged
    printf("After swap function: x = %d, y = %d\n", x, y);

    return 0;
}
