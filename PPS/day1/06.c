#include<stdio.h>
int main(){
    printf("enter the side of triangle: \n");
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b&&b==c&&c==a){
        printf("triangle is equilateral");
    }
    else if(a==b||b==c||c==a){
        printf("triangle is isosceles");
    }
    else if((a*a==b*b+c*c)||(b*b==c*c+a*a)||(c*c==a*a+b*b)){
        printf("triangle is right angled");
    }
    else{
        printf("triangle is scalene");
    }
    return 0;
}