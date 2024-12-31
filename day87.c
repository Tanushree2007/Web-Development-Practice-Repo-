#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 10, num2 = 20, num3 = 30;
    int *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3;

    printf("Initial values:\n");
    printf("num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);

    swap(ptr1, ptr2);
    printf("After swapping num1 and num2:\n");
    printf("num1 = %d, num2 = %d\n", num1, num2);

    int **ptr_ptr = &ptr1;
    printf("Pointer to pointer:\n");
    printf("Value at ptr_ptr: %d\n", **ptr_ptr);

    int arr[5] = {1, 2, 3, 4, 5};
    int *arr_ptr = arr;

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d\n", i, *(arr_ptr + i));
    }

    int *start = arr;
    int *end = arr + 4;

    printf("Array elements from start to end:\n");
    while (start <= end) {
        printf("%d ", *start);
        start++;
    }
    printf("\n");

    int *p1 = &num1, *p2 = &num3;
    printf("Before pointer arithmetic:\n");
    printf("p1 points to %d, p2 points to %d\n", *p1, *p2);

    p1 = p1 + 1;
    p2 = p2 - 1;
    printf("After pointer arithmetic:\n");
    printf("p1 points to %d, p2 points to %d\n", *p1, *p2);

    printf("Size of pointer variables:\n");
    printf("Size of ptr1: %zu bytes\n", sizeof(ptr1));
    printf("Size of ptr_ptr: %zu bytes\n", sizeof(ptr_ptr));

    return 0;
}
