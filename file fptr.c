#include<stdio.h>
void main()
{
  File *fptr;
  char name[20];
  int age;
  float salary;
  fptr = fopen("c:\\file\\emp.rec","w");
  if(fptr==null)
  {
    printf("file does not exists\n");
    exit(0);
  }
  printf("enter the name \n");
  scanf("%s",name);
  fprintf(fptr,"Name = %s\n", name);
  printf("enter the age\n");
  scanf("%d",& age);
  fprintf(fptr,"Age = %d\n",Age);
  printf("enter the salary\n");
  scanf("%f",& salary);
  fprintf(fptr,"Salary = : %.2f\n",Salary);
  fclose(fptr);
} 
