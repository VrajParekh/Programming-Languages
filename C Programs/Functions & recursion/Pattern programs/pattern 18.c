#include<stdio.h>            // 1
                             // 22
void main()                  // 333
{                            // 4444
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}