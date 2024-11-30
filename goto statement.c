#include<stdio.h>
int main()
{
  int maxInput = 100;
  int i;
  double number,average,sum = 0.0;
  for(i=1;i<=maxInput;++i)
  {
      printf("%d. enter a number: ",i);
      scanf("%f",&number);
      if(number<0.0)
      {
          goto jump;
      }
      sum += number;
  } 
  jump:
  average = sum/(i-1);
  printf("sum = %.2f\n",sum);
  printf("average = %.2f",average);
  return 0;
} 
