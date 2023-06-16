#include<stdio.h>

void main()
{
    int num,sum=0,i=1;
    printf("Enter the last natural number you want to sum of:");
    scanf("%d",&num);

    for( ; i<=num; i++)
    {
        sum+=i;


    }
    printf("the sum of first %d natural number is:%d",num,sum);


}