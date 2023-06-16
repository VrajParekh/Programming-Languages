#include<stdio.h>            // A
                             // AB
void main()                  // ABC
{                            // ABCD
    char i,j;
    for(i='A'; i<='D'; i++)
    {
        for(j='A'; j<=i; j++)
        {
            printf("%c",j);
        }
        printf("\n");
    }
}