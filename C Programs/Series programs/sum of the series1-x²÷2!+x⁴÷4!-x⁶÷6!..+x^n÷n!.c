#include<stdio.h>

void main()
{
    // sum of the series 1-x²/2!+x⁴/4!-x⁶/6!..+x^n/n!
    int x,n,i,j,k,mul,fact;
    float sum=1.0;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0)
    {
        for(i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                fact=1;
                for(k=1; k<=i; k++)
                {
                    fact=fact*k;
                    mul=1;
                }
                for(j=1; j<=i; j++)
                {
                    mul=mul*x;
                }
                if(i%4==0)
                    sum=sum + (float)mul/fact;
                else
                    sum=sum - (float)mul/fact;
            }
        }
        printf("\nSum of the series is:%f",sum);
    }
    else
    {
        printf("\nInvalid input");
    }
}