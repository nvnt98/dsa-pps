#include<stdio.h>
struct input{
    float h,m,sec;
}s[3];
void main(){
    
    printf("Enter the first Time\n\n In Hour: ");
    scanf("%f",&s[0].h);
    printf(" In Minute: ");
    scanf("%f",&s[0].m);
    printf(" In Second: ");
    scanf("%f",&s[0].sec);
    printf("\n\n");
    printf("Enter the Second Time\n\n In Hour: ");
    scanf("%f",&s[1].h);
    printf(" In Minute: ");
    scanf("%f",&s[1].m);
    printf(" In Second: ");
    scanf("%f",&s[1].sec);
    int hour=(s[0].h+s[1].h);
    int minute=s[0].m+s[1].m;
    int second=s[0].sec+s[1].sec;
    while(second>=60){
        minute++;
        second=second-60;
    }
    while(minute>=60){
        hour++;
        minute=minute-60;
    }
    
    printf("Sum Is %d Hour %d Minute %d Second",hour,minute,second);
    
}


