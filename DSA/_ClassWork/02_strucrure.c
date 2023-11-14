#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    int age;
    char address[20];
    float marks;
}s[1];
int main()
{
    int i;
    for(i=0;i<1;i++){
        printf("enter the detail of %d student\n",i+1);
        scanf("%d%d%f ",&s[i].roll,&s[i].age,&s[i].marks);
        fflush(stdin);
        gets(s[i].name);
        fflush(stdin);
        gets(s[i].address);
        
    }

    return 0;
}