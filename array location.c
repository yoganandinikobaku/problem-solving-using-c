#include<stdio.h>
void main()
{
  int a[5],i,flag=0,n=5,location,key;
  printf("\n enter array values of 5 elements");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  printf("\n enter the key value ");
  scanf("%d",&key);
  printf("\n print given arrray\n ");
  for(i=0;i<n;i++)
  printf("\t a[%d] = %d",i,a[i]);
  printf("\n the key value = %d",key);
  for(i=0;i<n;i++)
  {
    if(key == a[i])
    {
      flag = 1;
      location = i;
      count=count+1;
    }
  }
  if(flag == 1)
  printf("\n successful search element found at a [%d]\n a,location);
  else
      printf("\n unsuccessful search element not found\n");
}
