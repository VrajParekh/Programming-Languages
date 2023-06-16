#include<stdio.h>            // 1
                             // 12
void main()                  // 123
{                            // 1234
    int i,j;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}