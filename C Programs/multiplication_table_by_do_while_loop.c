#include<stdio.h>

void main()
{
    int num,n=1;
    printf("Enter the number:");
    scanf("%d",&num);

    do
    {
        printf("\n %d × %d = %d",num,n,num*n);
        n++;    //n=n+1;
    } while(n<=10);

}