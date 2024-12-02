#include "stdio.h"

int main() {
    int i = 10;
    float f = 5.5;

    void *ptr;

    ptr = &i;
    printf("Integer: %d\n", *(int*)ptr);

    ptr = &f;
    printf("Float: %.2f\n", *(float*)ptr);

    return 0;
}
