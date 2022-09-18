#include<stdio.h>

 int main()
 {
    int n;

    printf("Enter the number");
    scanf("%d",&n);

    if(n & 1)
    printf("the given number is odd");

    else
    printf("the given number is even");
 }