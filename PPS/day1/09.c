#include<stdio.h>
int main(){
    int n;
    float charges;
    printf("enter the unit");
    scanf("%d",&n);
    if(n>=0&&n<=200){
        charges=220+(220*0.05);
        printf("total calculated bill is %f",charges);
    }
    else if(n>=201&&n<=400){
        charges= ((n)*6+220)+((n)*6+220)*0.05;
        printf("total calculated bill is %f",charges);
    }
    else if(n>=401&&n<=600){
        charges=((n)*7+220)+((n)*7+220)*0.05;
        printf("total calculated bill is %f",charges);
    }
    else if(n>=601){
        charges=((n)*8+220)+((n)*8+220)*0.05;
        printf("total calculated bill is %f",charges);
    }
    
    return 0;
}