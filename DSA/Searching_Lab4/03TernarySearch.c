#include<stdio.h>
int TernarySearch(int arr[],int size,int elem, int start){
    if(size>=start){
    int mid1= start+(size-start)/3;
    int mid2= size-(size-1)/3;
    if(arr[mid1]==elem){
        return mid1;
    }
    if(arr[mid2]==elem){
        return mid2;
    }
    if(elem<arr[mid1]){
        return TernarySearch(arr,mid1-1,elem,start);
    }
    else if(elem>arr[mid2]){
        return TernarySearch(arr,size,elem,mid2+1);
    }
    else{
        return TernarySearch(arr,mid2-1,elem,mid1+1);
    }
    }
    return -1;
}
void main(){
    int start=0,elem,size,i;
    printf("Enter the Size Of Array");
    scanf("%d",&size);
    int arr[size];
     printf("Enter the array elements\n");
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
     printf("Enter the element to be search ");
    scanf("%d",&elem);

    int result = TernarySearch(arr,size,elem,start);
    printf("\nElement found at position: %d",result); 
    
}