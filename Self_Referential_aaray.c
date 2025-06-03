#include <stdio.h>

// Define a structure named 'Node'
struct Node {
    int data;           // Data part of the node
    struct Node* next;  // Pointer to the next node (self-referential structure)
};

int main() {
    struct Node n1, n2;  // Declare two node variables

    n1.data = 10;        // Assign data to first node
    n2.data = 20;        // Assign data to second node

    n1.next = &n2;       // Link first node's 'next' pointer to second node
    n2.next = NULL;      // Last node points to NULL (end of list)

    // Print data of first node
    printf("First node data: %d\n", n1.data);

    // Access and print data of second node using first node's 'next' pointer
    printf("Second node data: %d\n", n1.next->data);

    return 0;  // Program finished successfully
}
