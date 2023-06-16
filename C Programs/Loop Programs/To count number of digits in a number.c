#include<stdio.h>

void main()
{
    int i,num;
    printf("Enter number:");
    scanf("%d",&num);

    for(i=0; num!=0; i++)
    {
        num/=10;
    }
    printf("In the given number total digits=%d",i);


}