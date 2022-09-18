#include<stdio.h>
#include<ctype.h>

int main()
{
    char c;
    printf("Enter the character =");
    scanf("%c",&c);

    if(isupper(c))
    printf("the character is uppercase");

    else if (islower(c))
    {
      printf("the character is lowercase");
    }

    else
    printf("this is not a character");

    return 0;
    
}