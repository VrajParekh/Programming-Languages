#include<stdio.h>

void main()
{
    // sum of the series 1/1!+1/2!+1/3!+..+1/n!
    int n,i,fact=1;
    float sum=0.0;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
        sum=sum + 1.0/fact;

    }
    printf("\nSum of the series is:%f",sum);

}