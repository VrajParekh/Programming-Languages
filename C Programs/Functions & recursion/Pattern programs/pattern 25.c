#include<stdio.h>            // AAAAA
                             // BBBB
void main()                  // CCC
{                            // DD
    char i,j;                // E
    for(i='A'; i<='E'; i++)
    {
        for(j=i; j<='E'; j++)
        {
            printf("%c",i);
        }
        printf("\n");
    }
}