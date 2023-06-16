#include<stdio.h>

void main()
{
    int i,a=1,b=2,c,n;
    printf("enter the term :");
    scanf("%d",&n);
    printf("\n%d,%d,",a,b);

    for(i=2; i<n; i++)
    {
        c=a+b;
        printf("%d,",c);
        a=b;
        b=c;
    }
}