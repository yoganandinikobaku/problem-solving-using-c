#include<stdio.h>
void swapx(int*,int*);
void main()
{
  int a=10,b=20;
  clrscr();
  swapx(&a,&b);
  printf("inside the caller:\n a=%d b=%d\n",a,b);
}
void swapx(int*x,int*y)
{
  int t;
  t = *x;
  *x = *y;
  *y = t;
  printf("inside the function:\n x=%d y=%d\n",*x,*y);
} 
