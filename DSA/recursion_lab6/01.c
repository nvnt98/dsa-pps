#include<stdio.h>
int fact(int n)
{
    if(n==1||n==0)
    {
        return 1;
    }
    else
     {
        return (n*fact(n-1));
    }

}
int main(){

int n;
printf("enter the number to calculate factorial: ");
scanf("%d",&n);
int k;
k=fact(n);
printf("%d",k);



    return 0;
}