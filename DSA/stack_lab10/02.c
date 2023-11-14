#include<stdio.h>
int top=-1,stack_arr[20];
void binary(int data){
    while(data!=0)
    {
    int rem=data%2;
    data=data/2;
    top=top+1;
    stack_arr[top]=rem;
    }
    printf("Binary Number Is: ");
    for(int i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
}
void main(){
   int data;
    printf("Enter the decimal number: ");
    scanf("%d",&data);
    binary(data);
    
}
