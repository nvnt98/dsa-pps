#include<stdio.h>
int main (){
int n,pos,i ,j,insert;
printf("enter the size of array: ");
scanf("%d",&n);
int arr[n];
printf("enter the sorted elements of array:\n");
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
printf("entered elements are:\n");
for(i=0;i<n;i++){
    printf("%d\t",arr[i]);
}
printf("\nenter the elements to be inserted: ");
scanf("%d",&insert);
for(i=0;i<n;i++){
    if(insert<arr[i]){
        pos=i;
        break;
    }
    else if(insert>arr[n-1]){
        pos=n;
        break;
    }
}
arr[n+1];
if(pos!=n){
    for(i=0;i<(n-pos);i++){
        arr[n-i]=arr[n-1-i];
        
    }
}
    arr[pos]=insert;
printf("after inserting the element the array is:\n");
for(i=0;i<(n+1);i++){
    printf("%d\t",arr[i]);
}
    return 0;
}