#include<stdio.h>
void main()
{ int i,j,k,m,n,a[100],b[100],c[200],c1=0,c2=0;
printf("enter the value of n ");
scanf("%d",&n);
printf("enter the value of m ");
scanf("%d",&m);

printf("Enter the elements of A");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
printf("Enter the elements of B");
        for (j = 0; j< m; j++)
            scanf("%d", &b[j]);
i=0;j=0;k=0;
while(i<n&&j<m)
{
    if(a[i]<b[j])
    {
        c[k]=a[i];
        i++;
        k++;
        c1++;
    }
    else if(a[i]==b[j])
    {
        i++;
        j++;
    }
    else
    {
        c[k]=a[i];
        j++;
        k++;
        c2++;
    }
}
while(j<m)
{
    j++;
    continue;
}
while(i<n)
{
    i++;
    continue;
}
printf("set difference A-B is\n");
for(k=0;k<c1+c2;k++)
    {
        printf("%d\n",c[k]);
    }

}
