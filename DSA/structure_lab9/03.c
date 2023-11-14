#include<stdio.h>
struct student{
    int roll;
    char name[25];
    int age;
    char add[50];
}s[2];
void detail(int i){
    printf("Enter the roll no. of student : ");
    scanf("%d",&s[i].roll);
    printf("Enter the name of the student : ");
    scanf("%s",s[i].name);
    printf("Enter the age of the student : ");
    scanf("%d",&s[i].age);
    printf("Enter The Address Student : ");
    scanf("%s",s[i].add);
    }

    void printDetail(int i)
    {
        printf("\n\n");
    printf("Roll No. Of Student is : %d\nName of student is : %s\nAge of the student is : %d\nAddress Of Student Is: %s",s[i].roll,s[i].name,s[i].age,s[i].add);
    
}
int main(){
    for(int i=0;i<2;i++){
        printf("\n\nInput Detail Of %d Student.\n\n\n",i+1);
        detail(i);
    }
    printf("\n\nPRINTING THE DETAIL OF STUDENTS");
    for(int i=0;i<2;i++){
        printDetail(i);
    }

    
    return 0;
}