#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, count = 0;
    printf("enter the number\n");
    scanf("%d", &n);
    if(n==0|n==1)
    {
        count=1;
    }
    float k = pow(n, 0.5);
    for (i = 2; i <= k; i++)
    {
        if (n % i == 0)
        {
            count = 1;
        }
    }
    if (count == 0)
    {
        printf("%d is prime",n);
    }
    else
    {
        printf("%d is not prime",n);
    }

    return 0;
}