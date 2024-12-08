#include <stdio.h>
#include <string.h>

void abbreviateName(char fullName[]) {
    char word[50];
    int length = strlen(fullName);
    int wordIndex = 0;

    for (int i = 0; i <= length; i++) {
        if (fullName[i] == ' ' || fullName[i] == '\0') {
            word[wordIndex] = '\0';
            if (wordIndex > 0) {
                printf("%c. ", word[0]);
            }
            wordIndex = 0;
        } else {
            word[wordIndex] = fullName[i];
            wordIndex++;
        }
    }
    printf("%s\n", word);
}

int main() {
    char name[] = "John Fitzgerald Kennedy";
    printf("Abbreviated Name: ");
    abbreviateName(name);
    return 0;
}
