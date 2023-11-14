#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the number of elements of array_\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements in array_\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("the traverse array is_\n");
    for(i=0;i<n;i++){
        printf("%d\t,",arr[i]);
    }
    return 0;
}