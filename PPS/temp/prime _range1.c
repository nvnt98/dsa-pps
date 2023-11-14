#include<stdio.h>
int main(){
int prime[101]={0};
int i=2,j;
for(j=i+2;j<=100;j+=2)
{
    prime[j]=1;

}
for(i=3;i*i<=100;i+=2)
{
    for(j=i*2;j<=100;j=j+i)
    {
        for(j=i*2;j<=100;j=j+i)
        {
            prime[j]=1
        }
    }
}
for(i=2;i<100;i++)
{
    printf("%d",&prime[i]);
}

    return 0;
}