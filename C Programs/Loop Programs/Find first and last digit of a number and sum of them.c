#include<stdio.h>

void main()
{
    int i,num,last,first;
    printf("Enter number:");
    scanf("%d",&num);

    last=num%10;
    for(i=1; num>=10; i++)
    {
        num/=10;
        first=num;
    }
    printf("\nFirst digit of a number is=%d",first);
    printf("\nLast digit of a number is=%d",last);
    printf("\nSum of first and last digit is=%d",first+last);

}