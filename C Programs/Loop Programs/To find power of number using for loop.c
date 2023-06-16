#include<stdio.h>
void main()
{
    int i,m,n,pow=1;
    printf("Enter the value of base:");
    scanf("%d",&m);
    printf("\nEnter the value of power:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        pow*=m;
    }
    printf("\nValue of %d power of %d=%d",n,m,pow);
}