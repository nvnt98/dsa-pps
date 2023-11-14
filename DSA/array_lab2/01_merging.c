#include<stdio.h>
void main()
{ int i,j,k,m,n;
printf("enter the size of first array ");
scanf("%d",&n);
int a[n];
printf("enter the size of second array ");
scanf("%d",&m);
int b[m],c[m+n];
printf("Enter the elements of 1st sorted array\n");
        for (i = 0; i < n; i++)
            scanf("%d", &a[i]);
printf("Enter the elements of 2nd sorted array\n");
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
    }
    else
    {
        c[k]=b[j];
        j++;
        k++;
    }
}
if(n<m&&j<m)
    {while(j<m)
       { c[k]=b[j];
        k++;
        j++;
       }
    }
else
    {while(i<n)
       { c[k]=a[i];
        i++;
        k++;
       }
    }
printf("The merge of two sorted array is\n");
for(k=0;k<m+n;k++)
    {
        printf("%d\n",c[k]);
    }

}