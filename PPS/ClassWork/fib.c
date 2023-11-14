#include<stdio.h>
int fibo(int N){
    if(N==1|N==2){
        return N-1;
    }
    else {
        return fibo(N-1)+fibo(N-2);
    }

}
int main(){
   int i,x;
   printf("enter the range");
   scanf("%d",&x);
   for (i=1;i<=x;i++){
    printf("%d,",fibo(i));
   }

    return 0;
}