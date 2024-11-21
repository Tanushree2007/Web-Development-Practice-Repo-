#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reversed[100];
    int len, j = 0;

    printf("Enter a string: ");
    gets(str);

    len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        reversed[j++] = str[i];
    }
    reversed[j] = '\0';

    printf("Reversed string: %s\n", reversed);
    return 0;
}
