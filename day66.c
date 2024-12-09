#include "stdio.h"

int main() {
    int numbers[5];
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    printf("The numbers in the array are:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }

    int more_numbers[] = {1, 2, 3, 4, 5};
    printf("\nThe second array is:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", more_numbers[i]);
    }

    return 0;
}
