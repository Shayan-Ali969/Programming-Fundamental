#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;

    // Allocate memory for 10 integers using calloc
    arr = (int*)calloc(10, sizeof(int));
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Print array (should all be 0)
    printf("Array elements: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free memory
    free(arr);

    return 0;
}
