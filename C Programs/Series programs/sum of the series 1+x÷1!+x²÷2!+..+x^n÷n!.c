#include<stdio.h>

void main()
{
    // sum of the series 1+x/1!+x²/2!+x³/3!+..+x^n/n!
    int x,n,i,j,mul,fact=1;
    float sum=1.0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
        mul=1;
        for(j=1; j<=i; j++)
        {
            mul=mul*x;
        }
        sum=sum + (float)mul/fact;
    }
    printf("\nSum of the series is:%f",sum);

}