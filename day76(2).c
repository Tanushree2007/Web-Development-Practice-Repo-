#include <stdio.h>

int main() {
    int arr[5] = {5, 3, 8, 1, 9};
    int max = arr[0];
    for(int i = 1; i < 5; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum Element: %d", max);
    return 0;
}
