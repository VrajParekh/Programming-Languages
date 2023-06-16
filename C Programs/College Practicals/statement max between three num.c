#include<stdio.h>

void main()
{
    int num1,num2,num3,max;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("\nEnter second number:");
    scanf("%d",&num2);
    printf("\nEnter third number:");
    scanf("%d",&num3);

    max= (num1>num2)? ((num1>num3)? num1:num3):((num2>num3)? num2:num3);

    printf("\nThe largest value is:%d,",max);




}