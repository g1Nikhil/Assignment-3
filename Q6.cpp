#include<stdio.h>

int main()
{
    int num1;
    int num2;

    printf("enter the  numbers 1 = ");
    scanf("%d",&num1);

    printf("\nenter the number 2 = ");
    scanf("%d",&num2);

    if(num1 > num2)
    printf("the greatest number is = %d",num1);

    else if(num1<num2)
    printf("the greatest number is = %d",num2);

    else if(num1 == num2)
    printf("the given numbers are equal");

    return 0;
}