#include<stdio.h>
struct student{
    int roll;
    char name[25];
    int age;
    int marks[5];
}s[2];
void detail(int i){
    printf("enter the roll no. of student :\n");
    scanf("%d",&s[i].roll);
    printf("Enter the name of the student :\n");
    scanf("%s",s[i].name);
    printf("Enter the age of the student :\n");
    scanf("%d",&s[i].age);
    for(int i=0;i<5;i++){
        printf("Enter the marks of %d subject: ",i+1);
        scanf("%d",&s[i].marks[i]);  
    
    }
}
    void printDetail(int i)
    {
        printf("\n\n");
    printf("Roll No. Of Student is : %d\nName of student is : %s\nAge of the student is : %d\n",s[i].roll,s[i].name,s[i].age);
    for (int i =0;i<5;i++){
        printf("marks of subject %d is %d\n",i+1,s[i].marks[i]);
    }
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