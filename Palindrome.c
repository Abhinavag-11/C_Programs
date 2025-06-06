#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Recursive function to check for palindrome
int isPalindrome(char str[], int start, int end) {
    if (start >= end) return 1; // Base case: reached the middle
    if (str[start] != str[end]) return 0; // Not a palindrome
    return isPalindrome(str, start + 1, end - 1); // Recurse inward
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);  // Reads word without spaces

    int len = strlen(str);
    
    if (isPalindrome(str, 0, len - 1))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
