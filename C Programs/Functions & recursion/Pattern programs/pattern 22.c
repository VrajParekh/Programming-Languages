#include<stdio.h>     //    1
void main()           //   222
{                     //  33333
    int i,j;          // 4444444
    for(i=1; i<=4; i++)
    {
        for(j=4; j>i; j--)
        {
            printf(" ");
        }
        for(j=1; j<=(2*i-1); j++)
        {
            printf("%d",i);
        }

        printf("\n");
    }
}