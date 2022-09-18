#include<stdio.h>

int main()
{
    int year;

    printf("Enetr the year");
    scanf("%d",&year);

    if(year%4==0)
        printf("the given year is leap year");
    else
    printf("the year is not leap year");

    return 0;

}