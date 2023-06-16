#include<stdio.h>

void main()
{
    // sum of the series 1-2+3-4+..n
    int n,i,sum=1;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(i=2; i<=n; i++)
    {
        if(i%2==0)
            sum=sum - i;
        else
            sum=sum + i;

    }
    printf("\nSum of the series is:%d",sum);

}