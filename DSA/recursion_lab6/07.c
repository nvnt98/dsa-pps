#include<stdio.h>
int reverse(int num,int rev){
    if(num==0){
        return rev;
    }
    else{
        reverse(num/10,rev*10+num%10);
    }
}
int main(){
    int num,rev=0;
    printf("enter the number: ");
    scanf("%d",&num);
    printf("reverse of the %d is %d",num,reverse(num,rev));


    return 0;
}
