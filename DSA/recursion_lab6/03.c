#include<stdio.h>

int fibonacci(int n){
    if(n>0){
    static int n1=0,n2=1,n3;
    n3=n1+n2;
    n1=n2;
    n2=n3;
    printf("%d",n3);
    return fibonacci(n-1);
    }
}

int main(){
    int n;
    printf("enter the number of elements to print: ");
    scanf("%d",&n); 
    if(n<=0){
        return 0;
    }

    printf("%d%d",0,1);
    fibonacci(n-2);
    
    
        
    


    return 0;
}