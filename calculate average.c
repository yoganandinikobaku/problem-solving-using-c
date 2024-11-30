#include<stdio.h>
int main()
{
    int marks[10],i,n,sum=0;
    double average;
    printf("enter number of elements: ");
    scanf("%d",&n);
    for(i=0;i<n;++i)
    {
      printf("enter number %d: ",i+1);
      scanf("%d",&marks[i]);
      //adding integers entered by the user to the sum variable
      sum += marks[i];
    }
    //explicitly convert sum to double
    //then calculate average
    average = (double)sum/n;
    printf("average=%2if",average);
    return 0;
 }   
