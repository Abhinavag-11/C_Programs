#include <stdio.h>

int main() {
    FILE *file;
    char name[50], name1[50], age1[50];
    int age;

    // Writing to file
    file = fopen("data.txt", "w"); // Open file in write mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);

    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    fclose(file);
    printf("Data written to file successfully.\n");

    // Reading from file
    file = fopen("data.txt", "r"); // Open file in read mode
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    while (fscanf(file, "%s %s", name1, age1) != EOF) {
        printf("%s %s\n", name1, age1);
    }
    fclose(file);

    return 0;
}
