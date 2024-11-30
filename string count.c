#include<stdio.h>
int main()
{
  int count=0;
  char ch,s[25];
  int i=0;
  printf("enter a string");
  scanf("%s",&s);
  printf("string:-->%s",s);
  printf("\n enter character:-->");
  scanf("%s",&ch);
  while(s[i]!='\0')
  {
     if(s[i]==ch)
     count++;
     i++;
  }
  printf("\n occurence of character:-->%d",count);
  return 0;
} 
