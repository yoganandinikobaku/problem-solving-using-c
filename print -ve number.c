#include<stdio.h>
void main()
{
  int n;
  printf("\n enter any number ");
  scanf("%d",&n);
  if(n<0)
  {
       n = -n;
  }
  printf("\n number = %d",n);
} 
