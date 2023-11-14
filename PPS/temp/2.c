#include<stdio.h>
void main()
{
    int sign=1;
    int n;
    int s=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        s=s+(2*i-1)*sign;
       sign=sign*(-1);
    }
    printf("%d",s);
    
}