#include<stdio.h>
int main(){
    int n,i;
    float sum=0,fact=1;
    printf("enter the nth number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
        sum=sum+fact/i;
    }
    printf("sum is %f\n",sum);
    return 0;
}