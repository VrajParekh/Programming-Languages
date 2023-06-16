#include<stdio.h>

void main()
{
    int num,n=1;
    printf("Enter the number:");
    scanf("%d",&num);

    for( ; n<=10 ; n++)
    {
        printf("\n %d × %d = %d",num,n,num*n);

    }

}