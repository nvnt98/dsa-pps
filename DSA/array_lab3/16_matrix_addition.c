#include<stdio.h>
int main(){
int i,j,m,n;
printf("enter the number of row and column of matrix\n");
scanf("%d%d",&m,&n);
int arr1[m][n];
int arr2[m][n];
int arr3[m][n];
printf("enter the elements of matrix_1:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    scanf("%d",&arr1[i][j]);
    }
    
}
printf("enter the elements of matrix_2:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
    scanf("%d",&arr2[i][j]);
    }

}
printf("the addition of matrix is_:\n");
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        arr3[i][j]=arr1[i][j]+arr2[i][j];
    }
}
for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf(" %d\t",arr3[i][j]);
        
    }
    printf("\n");
    
}
printf("\n");
printf("%d",arr3[0][0]);


    return 0;
}