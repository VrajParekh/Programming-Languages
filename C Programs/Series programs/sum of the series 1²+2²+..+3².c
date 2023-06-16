#include<stdio.h>

void main()
{
    // sum of the series 1²+2²+3³+..+n²
    int n,i,mul,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        mul=i*i;

        sum=sum + mul;

    }
    printf("\nSum of the series is:%d",sum);

}