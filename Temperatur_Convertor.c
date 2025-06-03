#include <stdio.h>

int main() {
    float c, f;  // Declare variables for Celsius and Fahrenheit temperatures

    // Prompt the user to enter temperature in Fahrenheit
    printf("Enter Temp in Fahrenheit: ");
    scanf("%f", &f);  // Read the Fahrenheit temperature input

    // Convert Fahrenheit to Celsius using the formula: (F - 32) * 5/9
    c = (f - 32) * 5 / 9;

    // Print the converted temperature in Celsius
    printf("Temp in Celsius is %f\n", c);

    return 0;  // Program finished successfully
}
