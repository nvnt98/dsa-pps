#include<stdio.h>
int main(){
int n,i,j,k;
printf("enter range from 1 to n elements of array\nEnter nth number\n");
scanf("%d",&n);
int arr[n];
printf("enter the elemets in array\n");
for(i=0;i<n-1;i++){
    scanf("%d",&arr[i]);
}

    int total=n*(n+1)/2;
    int sum=0;
    for(i=0;i<n-1;i++){
        sum=sum+arr[i];
    }
    int missing=total-sum;
    if(missing!=0){
    printf("missing array element is_\n");
    printf("%d",missing);
    }
    else{
        printf("no element is missing in array\n");
    }
    





    return 0;
}