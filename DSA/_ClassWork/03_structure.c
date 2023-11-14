#include<stdio.h>
struct student
{
    float c,m,p;
    
}s[2];
int main(){
    int i;
    float percent[3];

    for(i=0;i<2;i++){
      printf("enter the detail of %d student\n",i+1);
      scanf("%f%f%f",&s[i].c,&s[i].m,&s[i].p);
      printf("%f\n%f\n%f\n",s[i].c,s[i].m,s[i].p);
    }

    for(i=0;i<2;i++){
         percent[i]=(s[i].c+s[i].m+s[i].p)/3;
    printf("percent of %d student = %f\n",i+1,percent[i]);
    }
        
    



    return 0;
}