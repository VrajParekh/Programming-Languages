#include<stdio.h>

void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num==0)
        printf("\n%d is zero",num);
    else if(num>0)
        printf("\n%d is positive",num);
    else
        printf("\n%d is negative",num);
}