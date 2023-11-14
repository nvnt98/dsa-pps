#include<stdio.h>
int main (){
    int n,i=0,k;
    printf("enter the number of year: ");
    scanf("%d",&n);
    int year[n];
    printf("enter the starting range of year: ");
    scanf("%d",&k);
    for(i=0;i<n;i++){
        year[i]=k;
        k++;
    }
printf("checking leap year in range of %d to %d\n",year[0],year[n-1]);
   
    
    
   for(i=0;i<n;i++){ 
    if(((year[i]%400==0)&&(year[i]%100==0))||((year[i]%100!=0)&&(year[i]%4==0)))
    {
        printf("%d is a leap year\n",year[i]);
    }
    else{
        printf("%d is not a leap year\n",year[i]);
    }
   }
    return 0;
}