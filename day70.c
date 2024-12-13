#include <stdio.h>

int main() {
    int a = 5;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;

    printf("Value of a: %d\n", a);
    printf("Value of *ptr1: %d\n", *ptr1);
    printf("Value of **ptr2: %d\n", **ptr2);

    return 0;
}
