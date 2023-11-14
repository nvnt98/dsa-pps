#include<stdio.h>
int main(){
    int i,n,x,num=1;
    float sum=1,fact=1;
    printf("enter the no. of terms");
    scanf("%d",&n);
    printf("enter the value of x");
    scanf("%d",&x);

    for(i=1;i<n;i++){
        num=num*x;
        fact=fact*i;
        sum=sum+(num/fact);
    }
    printf("%f",sum);

    return 0;
}