#include<stdio.h>

int main()
{
    int a,b,c;

    printf("a=");
    scanf("%d",&a);
    
    printf("\nb=");
    scanf("%d",&b);

    printf("\nc=");
    scanf("%d",&c);

    int disc = b*b-4*a*c;

    if(disc > 0)
    printf("Real and distinct");

    else if(disc < 0)
    printf("Imaginary");

    else
    printf("Real and equal");
    
    return 0;
    
}