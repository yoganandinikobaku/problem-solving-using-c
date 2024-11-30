#include<stdio.h>
void main()
{
   int x=10,a;
   a = x++;
   printf("\n pre increament operation: ");
   //value of a will change
   printf("\n a=%d",a);
   //value of x changes does not changes after execution of a= ++x,because it is already changed;
   printf("\n x = %d",x);
}   
