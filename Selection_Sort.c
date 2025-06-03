#include <stdio.h>

int main() {
    int i, j, m, a;
    int n[] = {9, 11, 55, 44, 2};  // Initialize array to be sorted
    int s = sizeof(n) / sizeof(n[0]);  // Calculate number of elements

    // Outer loop to iterate over each element except the last
    for (i = 0; i < s - 1; i++) {
        m = i;  // Assume the current index 'i' holds the minimum value

        // Inner loop to find the actual minimum element in the unsorted part
        for (j = i + 1; j < s; j++) {
            if (n[j] < n[m])
                m = j;  // Update 'm' if a smaller element is found
        }

        // Swap the found minimum element with the first element of unsorted part
        a = n[i];
        n[i] = n[m];
        n[m] = a;
    }

    // Print the sorted array
    for (i = 0; i < s; i++) {
        printf("%d ", n[i]);
    }

    return 0;  // Program finished successfully
}
