#include<stdio.h>
int top=-1;
char stack_arr[20];
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
}

void main(){
    int deci;
    printf("Enter the Decimal number: ");
    scanf("%d",&deci);
    hex(deci);
}