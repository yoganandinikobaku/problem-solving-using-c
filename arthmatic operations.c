#include<stdio.h>
void main()
{
   int a=26,b=5;
   int addition,multiplication,subtraction,division;
   int modulus;
   clrscr()
   printf("\n value of a=%d\t value of b=%d",a,b);
   addition=a+b;
   printf("\n sum(%d+%d)=%d",a,b,addition);
   subtraction=a-b;
   printf("\n difference(%d-%d)=%d",a,b,subtraction);
   multiplication=a*b;
   printf("\n multiplication(%d*%d)=%d",a,b,multiplication);
   division=a/b;
   printf("\n division(%d/%d)=%d",a,b,division);
   modulus=a%b;
   printf("\n modulus(%d %% %d)=%d",a,b,modulus);
   getch();
}   
   
