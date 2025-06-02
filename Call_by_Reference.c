#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;    // Store the value pointed by 'a' in a temporary variable
    *a = *b;          // Assign the value pointed by 'b' to the location pointed by 'a'
    *b = temp;        // Assign the temporary value to the location pointed by 'b'

    // Print the values inside the function after swapping
    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x = 10, y = 20;  // Initialize two integers

    // Print values before swapping
    printf("Before swap function: x = %d, y = %d\n", x, y);
    
    // Call swap function with the addresses of x and y
    swap(&x, &y);
    
    // Print values after swapping
    printf("After swap function: x = %d, y = %d\n", x, y);

    return 0;
}
