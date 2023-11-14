#include <stdio.h>
int i, j;
int isRepeated;

void printNonRepeated(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {
        isRepeated = 0;
        for (j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isRepeated = 1;
                break;
            }
        }
        if (isRepeated == 0)
        {
            printf("Non-repeated element: %d\n", arr[i]);
        }
    }
}

void printRepeated(int arr[], int size)
{
    for (i = 0; i < size - 1; i++)
    {
        if (arr[i] == -1)
            continue;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("Repeated element: %d\n", arr[i]);
                arr[j] = -1;
                break;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter Element-%d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Elements with Repetition status:\n");
    printNonRepeated(arr, n);
    printRepeated(arr, n);

    return 0;
}