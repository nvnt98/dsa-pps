#include<stdio.h>

#define m 1007
long long power (int a ,int N){
if(N==0){
    return 1;
}
else{
    long long p=power(a,N/2)%m;
    if(N%2==0){
    return (p*p)%m;
}
else {
    return ((p*p)%m*a)%m;
}}}
void main(){
    long long  x;
    x=power(2,10000);
    printf("%lld",x);

    
}