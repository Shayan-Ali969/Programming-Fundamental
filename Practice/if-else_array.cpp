#include <stdio.h>

int main() {
    int n, sum = 0, count = 0;
    float average;

    printf("How many numbers? ");
    scanf("%d", &n);

    int numbers[n];  // Array to store numbers

    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
        if(numbers[i] > 0) {   // Add positive numbers directly
            sum += numbers[i];
            count++;
        }
    }

    if(count > 0)
        average = (float)sum / count;
    else
        average = 0;

    printf("Sum of positive numbers = %d\n", sum);
    printf("Average of positive numbers = %.2f\n", average);

    return 0;
}
