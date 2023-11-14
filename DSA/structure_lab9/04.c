#include<stdio.h>
struct input{
    float f,i;
}s[2];
void main(){
    
    printf("Enter the first distance\n\n In feet: ");
    scanf("%f",&s[0].f);
    printf(" In inch: ");
    scanf("%f",&s[0].i);
    printf("\n\n");
    printf("Enter the Second distance\n\n In feet: ");
    scanf("%f",&s[1].f);
    printf(" In inch: ");
    scanf("%f",&s[1].i);
    float inch=(s[0].i+s[1].i);
    float feet=s[0].f+s[1].f;
    while(inch>=12){
        feet++;
        inch=inch-12;
    }
    
    printf("Sum Is %f feet %f inch",feet,inch);
    
}


