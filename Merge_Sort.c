#include <stdio.h>

// Function to merge two sorted halves of the array
void merge(int arr[], int l, int m, int r) {
    int temp[100];       // Temporary array to store merged result
    int i = l;           // Starting index of left subarray
    int j = m + 1;       // Starting index of right subarray
    int k = 0;           // Index for temp array

    // Merge elements from left and right subarrays in sorted order
    while (i <= m && j <= r)
        temp[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];

    // Copy remaining elements of left subarray, if any
    while (i <= m)
        temp[k++] = arr[i++];

    // Copy remaining elements of right subarray, if any
    while (j <= r)
        temp[k++] = arr[j++];

    // Copy merged elements back into original array
    for (i = l, k = 0; i <= r; i++, k++)
        arr[i] = temp[k];
}

// Recursive function to implement merge sort
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = (l + r) / 2;     // Find midpoint

        mergeSort(arr, l, m);    // Sort left half
        mergeSort(arr, m + 1, r);// Sort right half

        merge(arr, l, m, r);     // Merge the two sorted halves
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 6, 3};  // Initialize array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate number of elements

    mergeSort(arr, 0, n - 1);  // Call merge sort on entire array

    // Print sorted array
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;  // Program finished successfully
}
