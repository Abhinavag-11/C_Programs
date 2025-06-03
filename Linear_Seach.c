#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // Initialize the array
    int n, a, i, u = 0;                // Declare variables: n=size, a=search element, i=loop index, u=flag

    // Calculate number of elements in the array
    n = sizeof(arr) / sizeof(arr[0]);

    // Prompt the user to enter the element to search for
    printf("Enter the element: ");
    scanf("%d", &a);

    // Loop through the array to find the element
    for (i = 0; i < n; i++) {
        if (arr[i] == a) {
            // If element is found, print its index and set flag to 1
            printf("Element is found at index %d\n", i);
            u = 1;
            break;  // Exit the loop once the element is found
        }
    }

    // If flag is still 0, element was not found in the array
    if (u == 0)
        printf("Element not found");

    return 0;  // Program finished successfully
}
