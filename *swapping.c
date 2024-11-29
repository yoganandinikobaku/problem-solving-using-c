#include<stdio.h>
void main()
{
  int a=10,b=20;
  int *p1=&a,*p2=&b;
  printf("\n before swap: ");
  printf("*p1=%d *p2=%d,*p1,*p2);
  *p1 = *p1+*p2;
  *p2 = *p1-*p2;
  *p1 = *p1-*p2;
  printf("\n after swap: ");
  printf("*p1=%d *p2=%d",a,b);
} 
