#include<stdio.h>
#include<stdlib.h>
void main()
{
  file *fptr;
  int total;
  fp = fopen("data.txt","w+");
  if(fp == null)
  {
     printf("data.txt does not exist,please check!\n");
     exit(0);
  }
  else
  {
     printf("enter the value for giving input to the file");
     scanf("%d",&total);
     fprintf(fp,"%d",total);//write data into the file
     fscanf(fp,"%d",&total);//read data from the file
     printf("value of total is %d\n",total);
  }
} 
