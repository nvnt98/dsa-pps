#include<stdio.h>
int main()
{
    int n,i,pos;
    printf("enter the number of elements of the array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    printf("The array is :\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\nEnter the position of Element that you want to Delete from the array\n");
    scanf("%d",&pos);
   
    for(i=pos-1;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    printf("The modified Array is :\n");
    for(i=0;i<n-1;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}