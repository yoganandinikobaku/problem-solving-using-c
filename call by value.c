#include<stdio.h>
void swapx(int x,int y);
void main()
{
  int a = 10, b = 20;
  clrscr();
  swapx(a,b);
  printf("in the caller:\n a=%d b=%d\n",a,b);
  getch();
}
void swapx(int x,int y);
{
  int t;
  t = x;
  x = y;
  y = t;
  printf("inside function:\nx = %dy = %d\n",x,y);
} 
