#include<stdio.h>

void main()
{
    int num,rev=0,rem,temp;
    printf("Enter number:");
    scanf("%d",&num);
    temp=num;

    for( ; temp!=0; temp/=10)
    {
        rem=temp%10;
        rev=rev*10+rem;
    }
    printf("\nReverse of a number is=%d",rev);

}