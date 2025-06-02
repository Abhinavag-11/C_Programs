#include <stdio.h>

int main() {
    // Initialize an array with 5 elements
    int n[5] = {5, 2, 6, 7, 9};
    int i, j, a;
    
    // Calculate the size of the array
    int s = sizeof(n) / sizeof(n[0]);
    
    // Outer loop for the number of passes (s-1 passes)
    for (i = 0; i < s - 1; i++) {
        // Inner loop to compare adjacent elements up to the unsorted part
        for (j = 0; j < s - 1 - i; j++) {
            // If current element is greater than next element, swap them
            if (n[j] > n[j + 1]) {
                a = n[j];        // store current element in temporary variable
                n[j] = n[j + 1]; // assign next element to current position
                n[j + 1] = a;    // assign temp variable to next position
            }
        }
    }
    
    // Print the sorted array
    for (i = 0; i < s; i++) {
        printf("%d ", n[i]);
    }
    
    return 0;
}
