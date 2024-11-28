#include<stdio.h>
#include<ctype.h>
void main()
{
  int input = 120;
  if(isdigit(input))
  {
    printf("%d is not a digit/number.\n",input);
  }
  else
  {
    printf("%d is a digit number.\n",input);
  }
} 
