#include<stdio.h>

int main()
{
    int month;

    printf("enter any month in 2022 = ");
    scanf("%d",&month);

    if(month == 12)
    printf("december = 31");

    else if(month == 11)
    printf("november = 30");
    
    else if(month == 1)
    printf("january = 31");
    
    else if(month == 2)
    printf("febrary = 28");
    
    else if(month == 3)
    printf("march = 31");
    
    else if(month == 4)
    printf("april = 30");
    
    else if(month == 5)
    printf("may = 31");
    
    else if(month == 6)
    printf("june = 30");
    
    else if(month == 7)
    printf("july = 31");
    
    else if(month == 8)
    printf("august = 30");
    
    else if(month == 9)
    printf("september = 31");
    
    else if(month == 10)
    printf("october = 30");
    return 0;
}