#include<stdio.h>

int main()
{
    int eng,hin,math,phy,che;
    int total;

    
    printf("Enter the marks of English =");
    scanf("%d",&eng);

    printf("Enter the marks of Hindi =");
    scanf("%d",&hin);
    
    printf("Enter the marks of Maths =");
    scanf("%d",&math);
    
    printf("Enter the marks of Physics =");
    scanf("%d",&phy);
    
    printf("Enter the marks of Chemistry =");
    scanf("%d",&che);

    total = eng+hin+math+phy+che;

    total = total/5*100;

    if(total > 33)
    printf("the candidate is passed");

    else
    printf("the candidate is failed");
  
     return 0;

}