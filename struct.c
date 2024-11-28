#include<stdio.h>
int main()
{
   struct book
   {
      char name;
      float price;
      int pages;
    };
    struct book b,c;
    b.name = 'a';
    b.price = 12.50;
    b.pages = 230;
    printf("\n enter details for book c");
    scanf("%c %f %d\n",&c.name,&c.price,&c.pages);
    printf("book name\t price \t pages\n");
    printf("%c %f %d\n",b.name,b.price,b.pages);
    printf("%c %f %d\n",c.name,c.price,c.pages);
    return 0;
  }
