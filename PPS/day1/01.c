#include<stdio.h>
#include<math.h>

int main()
{
    double basicSal,hra,da,allow,pf,totalSalary;
    char grade;
    printf("Enter basic salary__ ");
    scanf("%lf",&basicSal);
    hra=0.2*basicSal;
    da=0.5*basicSal;
    pf=0.11*basicSal;
    printf("Enter The Grade__ ");
    scanf(" %c",&grade);
    switch(grade)
    {
        case 'A':
        allow=1700;
        break;
        case 'B':
        allow=1500;
        break;
        default:
        allow=1300;
        break;
        }
     totalSalary=(basicSal+hra+da+allow-pf);
     int sal=totalSalary;
        printf("total salary is %d",sal);
        

return 0;
}

