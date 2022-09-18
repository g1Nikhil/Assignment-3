#include<stdio.h>

int main()
{
    int number ;
    printf("Enter any number = ");
    scanf("%d",&number);

    if (number/7 || number/3)
    {
       printf("the number is divisible by 7 and 3");
    }
    else
    printf("is is  not divisible by 7 and 3");

    return 0;
}