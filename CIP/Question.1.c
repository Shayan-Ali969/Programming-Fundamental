#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *arr;

    printf("Enter the number of floats: ");
    scanf("%d", &n);

    // Allocate memory for n floats
    arr = (float*)malloc(n * sizeof(float));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill array with user input
    for(int i = 0; i < n; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%f", &arr[i]);
    }

    // Print array
    printf("Array elements: ");
    for(int i = 0; i < n; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}
