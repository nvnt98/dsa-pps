#include<stdio.h>

void printRepeatedElements(int arr[], int size) {
    printf("Repeated elements: ");
    
    // Traverse the array
    for(int i = 0; i < size; i++) {
        // Check if the current element is repeated and hasn't been printed before
        int j;
        for(j = i+1; j < size; j++) {
            if(arr[i] == arr[j]) {
                // Check if the element has been already printed
                int isDuplicate = 0;
                for(int k = i+1; k < j; k++) {
                    if(arr[i] == arr[k]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if(!isDuplicate) {
                    printf("%d ", arr[i]);
                }
                break;
            }
        }
    }
    
    printf("\n");
}

void printNonRepeatedElements(int arr[], int size) {
    printf("Non-repeated elements: ");
    int count = 0;
    
    for(int i = 0; i < size; i++) {
        // Check if the current element is repeated
        int j;
        for(j = 0; j < size; j++) {
            if(i != j && arr[i] == arr[j])
                break;
        }
        
        // If it is a non-repeated element, print it
        if(j == size) {
            printf("%d ", arr[i]);
            count++;
        }
    }
    
    if(count == 0)
        printf("None");
    
    printf("\n");
}

int main() {
    int arr[] = {2, 4, 6, 8, 2, 10, 4, 12, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printRepeatedElements(arr, size);
    printNonRepeatedElements(arr, size);
    
    return 0;
}