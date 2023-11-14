#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1,stack_arr[max];

void push(int data){
    if(top==max-1){
        printf("Stack Overflow");
        return;
    }
    else{
        top=top+1;
        stack_arr[top]=data;
    }
    
}
int pop(){
    int value;
    if(top==-1){
        printf("Stack Underflow");
        exit(1);
    }
    else{
        value=stack_arr[top];
        top=top-1;
        return value;
    }
}
void display(){
    if(top==-1){
        printf("Stack Underflow\n");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d\t",stack_arr[i]);
       // printf("\n");
    }
}
int main(){
    int choice ,data;
    while(1){
        printf("\n1. Push\n2. Pop\n3. Print The Top Element\n4. Print all the elements of the stack\n5. Quit\n");
        printf("Please enter your choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d",&data);
            push(data);
            break;
            case 2:
            data=pop();
            printf("Deleted element is %d\n",data);
            break;
            case 3: 
            printf("The topmost element of the stack is %d\n",stack_arr[top]);
            break;
            case 4:
            display();
            break;
            case 5:
            exit(1);
            default:
            printf("Wrong choice\n");



        }
    }
    return 0;
}

