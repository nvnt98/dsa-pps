#include<stdio.h>
void main(){
    int n,element,i;
    printf("Enter the size of Array ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int c=0;
     printf("Enter the elemnt to be searched ");
    scanf("%d",&element);
    for(i=0;i<n;i++){
        if(element==arr[i]){
            c++;
            
        }
    }
    if(c==0){
        printf("Element Not Found");
    }
    else{
        printf("Element Found At %d Times",c);
        
    }
}