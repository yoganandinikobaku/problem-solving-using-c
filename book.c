#include<stdio.h>
int main()
{
  char name[3];
  float price[3];
  int pages[3],i;
  printf("enter names,prices and no.of pages of 3 books\n");
  for (i=0;i<3;i++)
  scanf("%c %f %d\n",&name[i],&price[i],&pages[i]);
  printf("and this is what you entered\n");
  for(i=0;i<3;i++)
  printf("%c %f %d\n",name[i],price[i],pages[i]);
  return 0;
} 
