#include<stdio.h>
void main()
{
    //sum of the series 1/1!+2/2!+3/3!+...+n/n!
    int n,i,j,fact;
    float sum=0.0;
    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact=1;
        for(j=1; j<=i ; j++)
        {
            fact=fact*j;
        }
       if(i%2==0)
          sum=sum - (float)i/fact;
       else
          sum=sum + (float)i/fact;
    }
    printf("\n The sum of the series is %f",sum);




}