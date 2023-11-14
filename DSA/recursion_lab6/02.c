#include<stdio.h>
float negpow(float b, float p){
    if(p==0){
        return 1;
    }
    else{
        return (1/b)*(negpow(b,p+1));

    }
}

int power(int b, int p){
    if(p==0){
        return 1;
    }
    else{
        return (b*power(b,p-1));
    }
}
int main(){

int b,p;
float k;
printf("enter the base number: ");
scanf("%d",&b);
printf("enter the power number: ");
scanf("%d",&p);
if(p>0){
k=power(b,p);
}
else if(p<0){
k=negpow(b,p);
}
printf("%f",k);





    return 0;
}