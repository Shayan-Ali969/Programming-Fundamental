#include <stdio.h>

int main() {
    long long num, temp, lastDigit, rest;
    
    printf("Enter a number: ");
    scanf("%lld", &num);

    temp = num; // Copy original number

    while (temp > 7 || temp < -7) {
        lastDigit = temp % 10;         // Get last digit
        rest = temp / 10;              // Get the remaining number
        temp = rest - 2 * lastDigit;   // Apply the rule
    }

    if (temp == 0 || temp == 7 || temp == -7) {
        printf("%lld is divisible by 7.\n", num);
    } else {
        printf("%lld is NOT divisible by 7.\n", num);
    }

    return 0;
}
