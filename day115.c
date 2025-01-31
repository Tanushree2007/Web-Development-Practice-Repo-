#include <stdio.h>

void removeElement(int *arr, int *size, int position) {
    // Check if the position is valid
    if (position >= *size || position < 0) {
        printf("Invalid position!\n");
        return;
    }

    // Shift elements to the left from the position
    for (int i = position; i < *size - 1; i++) {
        *(arr + i) = *(arr + i + 1);  // Using pointer arithmetic
    }

    // Reduce the size of the array
    (*size)--;
}

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));  // Using pointer arithmetic to access array elements
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};  // Sample array
    int size = 5;  // Current size of the array
    int position = 2;  // Position of the element to remove (index starts from 0)

    printf("Original array: ");
    printArray(arr, size);

    removeElement(arr, &size, position);

    printf("Array after removing element at position %d: ", position);
    printArray(arr, size);

    return 0;
}
