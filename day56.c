#include <stdio.h>

int is_spy_number(int *num) {
    int sum = 0, product = 1;
    int temp = *num;

    // Loop through each digit of the number
    while (temp != 0) {
        int digit = temp % 10;
        sum += digit;      // Add the digit to sum
        product *= digit;  // Multiply the digit to product
        temp /= 10;        // Remove the last digit
    }

    if (sum == product) {
        return 1;  // It's a Spy number
    } else {
        return 0;  // It's not a Spy number
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (is_spy_number(&num)) {
        printf("%d is a Spy number.\n", num);
    } else {
        printf("%d is not a Spy number.\n", num);
    }

    return 0;
}