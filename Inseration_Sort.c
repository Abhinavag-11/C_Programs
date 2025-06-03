#include <stdio.h>

int main() {
    int n[] = {4, 2, 1, 6, 7};  // Initialize array to be sorted
    int i, j, a;
    int s = sizeof(n) / sizeof(n[0]);  // Calculate number of elements in array

    // Loop through the array starting from the second element
    for (i = 1; i < s; i++) {
        a = n[i];       // Store the current element to be inserted
        j = i - 1;      // Start comparing with previous elements

        // Shift elements of sorted segment forward if they are greater than 'a'
        while (j >= 0 && n[j] > a) {
            n[j + 1] = n[j];  // Shift element one position to the right
            j--;              // Move to previous element
        }
        n[j + 1] = a;  // Insert 'a' at its correct sorted position
    }

    // Print the sorted array
    for (i = 0; i < s; i++) {
        printf("%d ", n[i]);
    }

    return 0;  // Program finished successfully
}
