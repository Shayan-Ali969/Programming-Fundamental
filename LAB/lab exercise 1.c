#include <stdio.h>

int main() {
    char ch;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &ch); // Note the space before %c to handle potential whitespace.

    // Check if the character is a lowercase alphabet
    if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a small alphabet.\n", ch);
    }
    // Check if the character is an uppercase alphabet
    else if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is a capital alphabet.\n", ch);
        }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    }
    // Otherwise, it is a special character
    else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}