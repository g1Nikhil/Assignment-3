#include<stdio.h>

int main()
{
  int a,b,c; 
  printf("a= ");
  scanf("%d",&a);

  printf("\nb= ");
  scanf("%d",&b);

  printf("\nc= ");
  scanf("%d",&c);

  

  if((a+b>c) && (b+c>a) &&(c+b>b))
  printf("valid");

  else
  printf("invalid");


  return 0; 
}