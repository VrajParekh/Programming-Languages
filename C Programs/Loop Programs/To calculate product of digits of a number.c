#include<stdio.h>

void main()
{
    int num,product=1,rem;
    printf("Enter number:");
    scanf("%d",&num);

    for( ; num!=0; num/=10)
    {
        rem=num%10;
        product*=rem;
    }
    printf("\nProduct of digits of a number is=%d",product);

}