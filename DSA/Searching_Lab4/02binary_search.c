#include<stdio.h>
void bs(int arr[],int n,int elem,int f,int l){
    int mid=f+l/2,c=0;
    while(f<=l){
        if(elem==arr[mid]){
            c=1;
            break;
        }
        if(elem>arr[mid]){
            f=mid+1;
        }
        else{
            l=mid-1;
        }
    }
    if(c==1){
        printf("Element Found At Position");
    }
    else{
        printf("Element Not Found");
        
    }
}
void main(){
    int i,n,elem;
     printf("Enter the size of Array ");
    scanf("%d",&n);
    int arr[n];
    int f=0,l=n-1;
    printf("Enter the array elements ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter the element to be search ");
    scanf("%d",&elem);
    bs(arr,n,elem,f,l);
}