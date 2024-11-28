#include<stdio.h>
int main()
{
  int a[10][10],transpose[10][10],r,c;
  printf("enter rows and columns: ");
  scanf("%d %d",&r,&c);
  //assigning elements to the matrix
  printf("\n enter matrix elements:\n");
  for(int i=0;i<r;++i)
  for(int j=0;j<c;++j)
  {
    printf("enter element a %d%d: ",i+1,j+1);
    scanf("%d",&a[i][j]);
  }
    //printing the matrix a[][]
  printf("\n entered matrix: \n");
  for(int i=0;i<r;++i)
  for(int j=0;j<c;++j)
  {
    printf("%d",a[i][j]);
    if(j==c-1)
    printf("\n");
  }
    //computing the transpose
  for(int i=0;i<r;++i)
  for(int j=0;j<c;++j)
  {
    transpose[j][i] = a[i][j];
  }
    //printing the transpose
  printf("\n transpose of the matrix:\n");
  for(int i=0;i<c;++i)
  for(int j=0;j<r;++j)
  {
    printf("%d",transpose[i][j]);
    if(j==r-1)
    printf("\n");
  }
    return 0;
} 
