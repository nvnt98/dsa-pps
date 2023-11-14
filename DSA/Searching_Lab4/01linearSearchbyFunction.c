#include<stdio.h>

void ls(int arr[],int n,int element){
    int c=0,i;
    for(i=0;i<n;i++){
        if(element==arr[i]){
            c=1;
            break;
        }
    }
    if(c==0){
        printf("Element Not Found");
    }
    else{
        printf("Element Found At %d Position",i+1);
        
    }
}
void main(){
    int n,element;
    printf("Enter the size of Array ");
     scanf("%d",&n);
     int arr[n];
     printf("Enter the array elements ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be search ");
    scanf("%d",&element);
    ls(arr,n,element);

}