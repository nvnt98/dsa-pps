#include<stdio.h>
#include<stdlib.h>
int top=-1;
char stack_arr[20];
int pop(){
    int value;
    if(top==-1){
        printf("Stack Underflow");
        exit(1);
    }
    else{
        value=stack_arr[top];
        top=top-1;
    }
}
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
    for(int i=top;i>=0;i--){
    pop();
    }
}
void hex(int data){
    if(data==0){
        top=top+1;
        stack_arr[top]='0';
    }
    while(data!=0){
    int rem=data%16;
    data=data/16;
    top=top+1;
    if(rem<10){
        rem=rem+48;
    }
    else{
        rem=rem+55;
    }
    stack_arr[top]=rem;
    }
    printf("Hexadecimal Number Is: ");
    for(int i=top;i>=0;i--){
        printf("%c ",stack_arr[i]);
    }
    for(int i=top;i>=0;i--){
    pop();
    }
}
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
    for(int i=top;i>=0;i--){
    pop();
    }
}
void main(){
    int choice,data;
    
    while(1){
    printf("\n\n1. Binary Conversion\n2. Octal Conversion\n3. Hexadecimal Conversion\n4. Quit\n");
    printf("Enter Your Choice: ");
    scanf("%d",&choice);
        switch (choice)
        {
        case 1:
        printf("Enter the decimal number: ");
    scanf("%d",&data);
            binary(data);
            break;
        case 2:
        printf("Enter the decimal number: ");
    scanf("%d",&data);
            oct(data);
            break;
        case 3:
        printf("Enter the decimal number: ");
    scanf("%d",&data);
            hex(data);
            break;
        case 4:
            exit(1);
        default:
            printf("Wrong Choice\n");
            
        }
    }
}