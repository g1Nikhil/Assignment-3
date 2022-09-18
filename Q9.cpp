#include<stdio.h>

int main()
{
    int num1;
    int num2;
    int num3;

    printf("Enter number 1 =");
    scanf("%d",&num1);

    
    printf("\nEnter number 2 =");
    scanf("%d",&num2);

    
    printf("\nEnter number 3 =");
    scanf("%d",&num3);

    if(num1>=num2  && num1>=num3)
       printf("the num1 is greatest = %d",num1);
       

     else if(num2>=num3 && num2>=num1)
     printf("the num2 is greatest = %d",num2);

     else if(num3>=num2 && num3>=num1)
     printf("the num3 is greatest = %d",num3);

     return 0;  
}