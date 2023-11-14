#include<stdio.h>
int top=-1,stack_arr[20],check_arr[20];
check_fn(int sum){
     while(sum!=0)
    {

    int rem=sum%10;
    top++;
    check_arr[top]=rem;
    sum=sum/10;
    
    }

}
void binary(int data){
    while(data!=0)
    {

    int rem=data%10;
    top++;
    stack_arr[top]=rem;
    data=data/10;
    
    }
    
}
check11(check_arr,stack_arr){
for(int i=0;i<3){
    if(stack_arr[i]==check_arr[i]){
        printf("palindrome");
    }
}
}
void main(){
   int data;
    printf("Enter the decimal number: ");
    scanf("%d",&data);
    binary(data);
    int rem,sum=0;
    while(data!=0){
        int rem=data%10;
        data=data/10;
        sum=sum+rem*10;
    }
    check_fn(sum);
    check11();


    
}
