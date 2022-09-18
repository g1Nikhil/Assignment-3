#include<stdio.h>

int main()
{
    int num;
    printf("Enter the number");
    scanf("%d",&num);

    if(num>0)
    printf("the given number is positive");

    else if(num<0)
    printf("the given number is negative");

    else if(num==0)
    printf("the given number is zero");

    return 0;

    
}