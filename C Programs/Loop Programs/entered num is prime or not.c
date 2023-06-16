#include<stdio.h>

void main()
{
    int num,i,flag;
    flag=0;
    printf("Enter the number:");
    scanf("%d",&num);

    for(i=2 ; i<num; i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
        printf("\nNumber is prime");
    else
        printf("\nNumber is not prime");


}