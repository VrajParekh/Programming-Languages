#include<stdio.h>

void main()
{
    int num,n=1;
    printf("Enter the number:");
    scanf("%d",&num);

    while(n<=10)
    {
        printf("\n %d × %d = %d",num,n,num*n);
        n++;    //n=n+1;
    }

}