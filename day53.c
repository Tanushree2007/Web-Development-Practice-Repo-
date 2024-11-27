#include "stdio.h"

void gcd(int *a, int *b) {
    int temp;
    while (*b != 0) {
        temp = *b;
        *b = *a % *b;
        *a = temp;
    }
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    gcd(&num1, &num2);
    printf("The GCD is: %d\n", num1);
    return 0;
}
