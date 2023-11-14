#include<stdio.h>
int main(){
int x,y,z,i,j,k,r,c;
printf("enter row and column");
scanf("%d%d",&r,&c);
int mat[r][c];
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        scanf("%d",&mat[r][c]);
    }
}
for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("%d",mat[r][c]);
    }
}
int t[c][r];
for(i=0;i<c;i++){
    for(j=0;j<r;j++){
         t[r][c]=mat[c][r];
    }
}
for(i=0;i<c;i++){
    for(j=0;j<r;j++){
         printf("%d",t[r][c]);
    }
}

// for(k=0;k<c;k++){
//     i=0;
//     j=r-1;
//     while(i<j){
//         t[k][i]=t[k][j];
//         i++;
//         j--;
//     }

// }


    return 0;
}