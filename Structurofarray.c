#include <stdio.h>

// Define a structure
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[2]; // Array of 3 structures

    // Input data
    for (int i = 0; i < 2; i++) {
        printf("Enter name, roll no, and marks of student %d: ", i + 1);
        scanf("%s %d %f", &s[i].name, &s[i].roll, &s[i].marks);
    }

    // Display data
    printf("\nStudent Details:\n");
    for (int i = 0; i < 2; i++) {
        printf("Name: %s, Roll No: %d, Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
