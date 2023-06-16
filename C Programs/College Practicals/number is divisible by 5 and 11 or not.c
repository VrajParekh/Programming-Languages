#include<stdio.h>

void main()
{
  int n;
    printf("Enter the Number:");
    scanf("%d",&n);
    
    if(n%5==0 && n%11==0)
      printf("\nNumber divisible by 5 and 11");
    
    else
      printf("\nNumber is not divided by 5 or 11");
}