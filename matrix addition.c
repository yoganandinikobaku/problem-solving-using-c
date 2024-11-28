#include<stdio.h>
void main()
{
  int n,i,j,a[5][5],b[5][5],c[5][5];
  clrscr();
  printf("\n enter the order of matrix: ");
  scanf("%d",&n);
  printf("\n enter a matrix elements:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n enter b matrix elements:\n");
  for(i=0i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  printf("\n enter c matrix elements:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  getch(0);
}
