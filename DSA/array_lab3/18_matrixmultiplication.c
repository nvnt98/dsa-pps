#include<stdio.h>
int main()
{
int i,j,k,l,m,n,p,q;
printf("enter the number of row and column of matrix 1 _\n");
scanf("%d",&m);
printf(",");
scanf("%d",&n);
int arr1[m][n];
printf("enter the number of row and columnm of matrix 2 _\n");
scanf("%d",&p);
printf(",");
scanf("%d",&q);
int arr2[p][q];

if(n==p)
{
int arr3[m][q];
printf("enter the element of matrix 1_\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++){
    scanf("%d",&arr1[i][j]);

}
}
printf("enter the element of matrix 2_\n");
for(i=0;i<p;i++){
for(j=0;j<q;j++){
    scanf("%d",&arr2[i][j]);
}
}
for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        arr3[i][j]=0;
        for(k=0;k<n;k++){
            arr3[i][j]=arr3[i][j]+(arr1[i][k]*arr2[k][j]);
        }
        
    }
}
printf("matrix multiplication is_\n");
for(i=0;i<m;i++){
    for(j=0;j<q;j++){
        printf(" %d\t",arr3[i][j]);
    }
    printf("\n");
    
}


}

else{
    printf("\n");
    printf("Multiplication not possible");
}


    return 0;

}