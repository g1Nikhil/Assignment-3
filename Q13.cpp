#include<stdio.h>

int main()
{
    int number ;
    printf("Enter any number = ");
    scanf("%d",&number);

    if (number/3 && number/2)
    {
       printf("the number is divisible by 2 and 3");
    }
    else
    printf("is is  not divisible by 2 and 3");
    return 0;
}