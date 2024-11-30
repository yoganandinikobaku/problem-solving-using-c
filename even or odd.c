#include<stdio.h>
int main()
{
    int n;
    clrscr();
    printf("\n enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
    printf("\n the %d is even ",n);
    else
    printf("\n the %d is odd ",n);
    getch();
    return 0;
 }   
