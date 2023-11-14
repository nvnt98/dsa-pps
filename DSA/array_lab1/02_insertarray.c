#include<stdio.h>
int main()
{
  int n,m,arr[]={1,2,5,9,10};
  printf("enter the element to insert in array");
  scanf("%d",&n);
  printf("enter position of element to insert in array");
  scanf("%d",&m);
  arr[m-1]=n;
  for(int i=0;i<5;i++){
  printf("%d,",arr[i]);

  }

  return 0;
}