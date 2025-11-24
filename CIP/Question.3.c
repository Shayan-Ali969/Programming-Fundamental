#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for 3 integers
    arr = (int*)malloc(3 * sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Assign values to first 3
    for(int i = 0; i < 3; i++) {
        arr[i] = i + 1; // 1, 2, 3
    }

    // Expand array to 5 integers
    arr = (int*)realloc(arr, 5 * sizeof(int));
    if(arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Assign values to new elements
    arr[3] = 4;
    arr[4] = 5;

    // Print all 5 elements
    printf("Array elements: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}
