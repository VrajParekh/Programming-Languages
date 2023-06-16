#include<stdio.h>

void main()
{
// Nested if else
 int a,b,c,max;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nEnter the value of c:");
    scanf("%d",&c);
    
    if(a>b)
      {
        if(a>c)
        {
        max=a;
        }
        else
        {
        max=c;
        }
      }
    else 
      {
        if(b>c)
        {
        max=b;
        }
        else
        {
        max=c;
        }
      }
      printf("\nThe max is %d",max);
}