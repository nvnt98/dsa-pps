#include<stdio.h>
void main(){
    int f=1;
    int s=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        s=s+f;

    }
    printf("%d",s);
}