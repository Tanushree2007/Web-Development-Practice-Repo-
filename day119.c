#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Function to compare two elements (used by qsort)
int compare(const void *a, const void *b) {
    return (*(int *)b - *(int *)a);  // Descending order
}

// Function to find the median
float findMedian(int arr[], int n) {
    if (n % 2 == 0) {
        // Even length: median is the average of two middle numbers
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    } else {
        // Odd length: median is the middle number
        return arr[n / 2];
    }
}

// Function to count frequencies of each element in the array
void countFrequency(int arr[], int n) {
    int visited[MAX] = {0};  // To mark already counted elements

    printf("Element Frequency\n");
    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            printf("%d %d\n", arr[i], count);
        }
    }
}

int main() {
    int arr[MAX], n;
    
    // Input the array size and elements
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Sort the array in descending order
    qsort(arr, n, sizeof(int), compare);
    
    // Output the sorted array
    printf("\nSorted array in descending order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    // Find and print the median
    float median = findMedian(arr, n);
    printf("\nMedian: %.2f\n", median);
    
    // Count the frequency of each element
    countFrequency(arr, n);

    return 0;
}
