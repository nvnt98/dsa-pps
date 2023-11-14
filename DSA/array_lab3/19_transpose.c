#include<stdio.h>
int main(){
    int i,j,r,c;
    printf("Enter the row and column of the Matrix :\n");
    scanf("%d%d",&r,&c);
     int a[r][c], b[c][r];
    printf("\nenter the matrix elements :\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d\t",a[i][j]);
             }
        printf("\n");
    }
    printf("\nThe transpose of the Matrix is :\n");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            b[i][j]=a[j][i];
        }
    }
    for (i=0;i<c;i++){
        for(j=0;j<r;j++){
            printf("%d\t",b[i][j]);
        } 
        printf("\n");
    }
    return 0;

}