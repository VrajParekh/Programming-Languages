#include<stdio.h>            //   *     1
                             //   **    2
void main()                  //   ***   3
{                            //   ****  4
    int i,j;                 //   ***** 5
    for(i=1; i<=5; i++)      //   ****  1
    {                        //   ***   2
        for(j=1; j<=i; j++)  //   **    3
        {                    //   *     4
            printf("*");     //   12345
        }
        printf("\n");
    }
    for(i=4; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}



