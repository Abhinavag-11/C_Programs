#include <stdio.h>

int main() {
    // Initialize a sorted array
    int arr[] = {2, 4, 6, 8, 10, 12, 14};
    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);
    // Element to search for
    int key = 10;

    // Initialize binary search boundaries
    int low = 0, high = n - 1, mid;
    // Flags to indicate if the element is found
    int found = 0, u = 0;

    // Binary search loop runs while low index is less than or equal to high index
    while (low <= high) {
        // Find the middle index
        mid = (low + high) / 2;

        // Check if middle element is the key
        if (arr[mid] == key) {
            printf("Element found at index %d\n", mid);
            found = 1;  // mark found flag
            u = 1;      // another flag for found
            break;      // exit loop as element is found
        }
        // If key is greater, ignore left half
        else if (arr[mid] < key) {
            low = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            high = mid - 1;
        }
    }

    // If element was not found in the array
    if (u == 0) {
        printf("Element not found.\n");
    }

    return 0;
}
