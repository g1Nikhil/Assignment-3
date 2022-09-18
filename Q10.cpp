#include<stdio.h>

int main()
{
  int CP;
  int SP;
  float profit;  
  float loss;

  printf("Enter the CP = ");
  scanf("%d",&CP);

  printf("Enter the SP = ");
  scanf("%d",&SP);

  //profit = SP - CP;
  //printf("the profit  = %d",profit);

  if(SP>CP)
  {
    profit = SP-CP/CP*100;
    printf("the profit = %f",profit);
  }

  else
  {
    loss  = CP-SP/CP*100;
    printf("the loss = %f",loss);
  }


return 0;
  
}