#include<stdio.h>
void main()
{
    int num1,num2,num3,max;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Enter third number:");
    scanf("%d",&num3);
    switch(num1>num2)
    {
    case 1:
        switch(num1>num3)
        {
        case 1:
            printf("\nMax=%d",num1);
            break;
        case 0:
            printf("\nMax=%d",num3);
            break;
        }
        break;

    case 0:
        switch(num2>num3)
        {
        case 1:
            printf("\nMax=%d",num2);
            break;
        case 0:
            printf("\nMax=%d",num3);
            break;
        }
        break;
    }

}