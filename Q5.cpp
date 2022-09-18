#include<stdio.h>

int main()
{
    int n;

    printf("Enter the number");
    scanf("%d",&n);

    if(n>99 && n<999)
    printf("the given number is three digit");

    else
    printf("the given number is not a three digit");

    return 0;
}