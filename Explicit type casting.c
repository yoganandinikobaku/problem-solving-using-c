#include<stdio.h>
int main()
{
  int x=10,y=4;
  float z = x/y;
  printf("%f",z);
  {
      int x=10,y=4;
      float z = (float)x/y;
      printf("%f",z);
      return 0;
  }
} 
