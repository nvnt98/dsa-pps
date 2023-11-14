#include<stdio.h>
int sum(int n){
    if(n!=0)
    return (n%10+sum(n/10));
    else{
        return 0;
    }
    
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}