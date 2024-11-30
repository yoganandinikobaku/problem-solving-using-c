#include<stdio.h>
void main()
{
  int n,arr[100],i,rev[100],j=0;
  printf("enter the size of the array: ");
  scanf("%d",&n);
  printf("enter the elements: ");
  for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=n-1;i>=0;i--)
  {
    rev[j]=arr[i];
    j++;
  }
  printf("the reversed array: ");
  for(i=0;i<n;i++)
  {
     printf("%d\t",rev[i]);
  }
} 
