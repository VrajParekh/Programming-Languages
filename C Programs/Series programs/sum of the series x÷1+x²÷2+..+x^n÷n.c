#include<stdio.h>

void main()
{
    // sum of the series x/1+x²/2+x³/3+..+x^n/n
    int x,n,i,j,mul;
    float sum=0.0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("\nEnter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        mul=1;
        for(j=1; j<=i; j++)
        {
            mul=mul*x;
        }
        sum=sum + (float)mul/i;
    }
    printf("\nSum of the series is:%f",sum);

}