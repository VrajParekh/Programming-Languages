#include<stdio.h>
void main()
{
    int num1,num2,max;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    switch(num1>num2)
    {
    case 1:
        printf("\nMax=%d",num1);
        break;
    case 0:
        printf("\nMax=%d",num2);
    }

}