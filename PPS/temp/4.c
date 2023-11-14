#include<stdio.h>
void main(){

    float f=1;
    float s=0;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        f=f*i;
        s=s+(i/f);

    }
    printf("%d",s);
}