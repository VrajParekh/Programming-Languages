#include<stdio.h>     // 1
void main()           // 4 6
{                     // 9 11 13
    int i,j,k;        // 17 19 21 23
    for(i=1; i<=4; i++)
    {
        if(i>=1&&i<=2)
        {
            k=3*i-2;
            for(j=1; j<=4; j++)
            {
                if(j>=1&&j<=i)
                {
                    printf("%d ",k);
                    k+=2;
                }
            }
            printf("\n");
        }
        else
        {
            k=8*i-15;
            for(j=1; j<=4; j++)
            {
                if(j>=1&&j<=i)
                {
                    printf("%d ",k);
                    k+=2;
                }
            }
            printf("\n");
        }
    }
}