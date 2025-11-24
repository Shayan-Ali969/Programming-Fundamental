#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int *arr;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    // Allocate memory
    arr = (int*)malloc(n * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Fill array with squares of indices
    for(int i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    // Print array
    printf("Array of squares: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}
