#include<stdio.h>

struct student{
    char name[20];
    int roll;
    int marks[6];
    
}s;
int main(){

    float sum =0;
printf("enter the Roll No. of student: \n");
scanf("%d",&s.roll);
printf("enter the name of student: \n");
scanf("%s",s.name);

for(int i=0;i<6;i++){
printf("enter the marks for subject ""%d""\n",i+1);
scanf("%d",&s.marks[i]);
sum= sum+s.marks[i];
}
sum=sum/6;
printf("Student Name Is %s\n",s.name);
printf("Student Roll No. Is %d\n",s.roll);
for(int i=0;i<6;i++){
printf("marks of subject ""%d"" Is %d\n",i+1,s.marks[i]);

}


if(sum>=95){
    printf("Student Is Eligible For Admission");
}
else{
    printf("Student Is Not Eligible For Admission");
}
    return 0;
}