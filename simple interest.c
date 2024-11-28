#include<stdio.h>
int main()
{
   int p,n;
   float r,si;
   printf("enter values of p:");
   scanf("%d",&p);
   printf("enter values of n:");
   scanf("%d",&n);
   printf("enter values of r:");
   scanf("%f",&r);
   si=p*n*r/100;
   printf("simple interest = %f",si);
   return 0;
}  
