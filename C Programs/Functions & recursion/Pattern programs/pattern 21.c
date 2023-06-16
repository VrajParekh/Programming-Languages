#include<stdio.h>        // 12345
                         //  2345
void main()              //   345
{                        //    45
    int i,j;             //     5
    for(i=1; i<=5; i++)
    {
        for(j=1; j<i; j++)
        {
            printf(" ");
        }
        for(j=i; j<=5; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

}