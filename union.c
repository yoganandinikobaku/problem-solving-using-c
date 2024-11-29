#include<stdio.h> 
union pack
{
  char a;
  int b;
  double c;
};
void main()
{
  union pack p;
  printf("\n occupied size by union pack: %d",sizeof(p));
  printf("\n char = %d",size of (char));
  printf("\n int = %d",size of (int));
  printf("\n double = %d",size of (double));
}   
