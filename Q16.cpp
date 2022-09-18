#include<stdio.h>
#include<ctype.h>

int main()
{
  char c;
  printf("enter any character");
  scanf("%c",&c);

  if(isupper(c))
  printf("the given character is upper case");

  else if(islower(c))
  printf("the given character is lower case");
  
  else if(c)
  printf("the given character is digit or special character");
   
  return 0;

}