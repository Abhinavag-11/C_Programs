#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Pointer points to the first element

    // Accessing values using pointer addition
    printf("Value at ptr       : %d\n", *ptr);       // 10
    printf("Value at ptr + 1   : %d\n", *(ptr + 1)); // 20
    printf("Value at ptr + 2   : %d\n", *(ptr + 2)); // 30

    return 0;
}
