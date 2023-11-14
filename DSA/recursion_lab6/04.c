#include<stdio.h>
int gcdnum(int n1, int n2){
if(n2>0){
return gcdnum(n2,n1%n2);
}
else
return n1 ;

}

int main (){
    int n1,n2,n3;
printf("enter two number");
scanf("%d%d",&n1,&n2);
printf("GCD of %d and %d is %d",n1,n2,gcdnum(n1,n2));






    return 0;
}
