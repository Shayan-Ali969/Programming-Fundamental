#include <stdio.h>

int main() {
    unsigned char num;

    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);

    // Check and turn off 4th bit
    if (num & 8) {                 // if 4th bit is ON
        printf("4th bit is ON ? turning it OFF.\n");
        num = num & ~8;            // make 4th bit OFF
    } else {
        printf("4th bit is already OFF.\n");
    }

    // Check and turn off 7th bit
    if (num & 64) {                // if 7th bit is ON
        printf("7th bit is ON ? turning it OFF.\n");
        num = num & ~64;           // make 7th bit OFF
    } else {
        printf("7th bit is already OFF.\n");
    }

    printf("Updated number: %u\n", num);

    return 0;
}
