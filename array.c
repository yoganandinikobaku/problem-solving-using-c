#include<stdio.h>
int main()
{
  int i,j,a[5]={5,2,3,1,8},temp,n=5;
  printf("\n give an array \n");
  for(i=0;i<n;i++)
  {
    printf("\t a[%d]=%d",i,a[i]);
  }
    for(j=i+1;j<n;j++)
    {
      if(a[i]<a[j])
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
 } 
