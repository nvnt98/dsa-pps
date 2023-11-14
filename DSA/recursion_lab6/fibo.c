#include<stdio.h>
int fibo(int n){
    if (n==1||n==2){
        return (n-1);
    }
    else
    return (fibo(n-1)+fibo(n-2));
}
int main()
{
    int i,n;
    printf("enter the range");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        printf("%d ",fibo(i));
    }
    return 0;
}