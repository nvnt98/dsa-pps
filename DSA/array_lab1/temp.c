#include <stdio.h>

void printRepeatedAndNonRepeated(int arr[], int size) {
    int i, j;
    int isRepeated[size];

    for (i = 0; i < size; i++) {
        isRepeated[i] = 0;  // Initialize all elements as non-repeated
    }

    // Find the repeated elements and mark them in isRepeated[]
    for (i = 0; i < size - 1; i++) {
        if (isRepeated[i] == 1) {
            continue;  // Skip if element is already marked as repeated
        }
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                isRepeated[i] = isRepeated[j] = 1;  // Mark both elements as repeated
            }
        }
    }

    // Print the repeated and non-repeated elements
    printf("Repeated elements: ");
    for (i = 0; i < size; i++) {
        if (isRepeated[i] == 1) {
            printf("%d ", arr[i]);
        }
    }

    printf("\nNon-repeated elements: ");
    for (i = 0; i < size; i++) {
        if (isRepeated[i] == 0) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int arr[] = {1, 1, 2, 2, 2, 4, 5, 6, 7, 6, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printRepeatedAndNonRepeated(arr, size);

    return 0;
}