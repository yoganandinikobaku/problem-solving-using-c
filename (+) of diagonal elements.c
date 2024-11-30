#include<stdio.h>
#include<conio.h>
void main()
{
  int a[10][10],n,i,j,sum=0;
  clrscr();
  printf("enter the size of an array: ");
  scanf("%d",&n);
  printf("\n enter array elements: ");
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        scanf("%d",&a[i][j]);
     }
  }
  printf("\n array elements are:\n");
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
        printf("%d\t",a[i][j]);
     }
     printf("\n");
  } 
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     { 
       if(i==j)
       {
           sum=sum+a[i][j];
       }
     }
  }
  printf("\n sum of principle diagonal = %d",sum);
  getch();
} 
