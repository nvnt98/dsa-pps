#include<stdio.h>
int top=-1,stack_arr[20];
void oct(int data){
    while(data!=0)
    {
    int rem=data%8;
    data=data/8;
    top=top+1;
    stack_arr[top]=rem;
    }
    printf("Octal Number Is: ");
    for(int i=top;i>=0;i--){
        printf("%d ",stack_arr[i]);
    }
}
void main(){
   int data;
    printf("Enter the decimal number: ");
    scanf("%d",&data);
    oct(data);
    
}
