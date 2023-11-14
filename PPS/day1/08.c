#include<stdio.h>
int main (){
printf("enter the value of 'X' ");
int x,y;
scanf("%d",&x);
printf("enter the value of 'Y' ");
scanf("%d",&y);
if(x>0&&y>0){
    printf("%d,%d lies in the first quadrant",x,y);
}
else if(x<0&&y>0){
    printf("%d,%d lies in the second quadrant",x,y);
}
else if(x<0&&y<0){
    printf("%d,%d lies in the third quadrant",x,y);
}
else if(x>0&&y<0){
    printf("%d,%d lies in the fourth quadrant",x,y);
}
else if(x==0){
    printf("%d lies on the X-axis",x);
}
else if(y==0){
    printf("%d lies on the Y-axis",y);
}

    return 0;
}