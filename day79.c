#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main() {
    printf("Enter your name: ");
    char name[50];
    scanf("%s", name);

    int nameLength = strlen(name);
    printf("Your name is %s and its length is %d characters.\n", name, nameLength);

    double number = 16.0;
    printf("Square root of %.2f is %.2f\n", number, sqrt(number));

    srand(time(NULL));
    int randomNum = rand() % 100;
    printf("Random number between 0 and 99: %d\n", randomNum);

    printf("Current time: %s", ctime(&time(NULL)));

    return 0;
}
