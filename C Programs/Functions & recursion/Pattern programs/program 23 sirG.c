#include<stdio.h>     //    1
void main()           //   232
{                     //  34543
    int i,j,k;        // 4567654
    for(i=1; i<=4; i++)
    {
        k=i;
        for(j=1; j<=7; j++)
        {
            if(j>=5-i&&j<=i+3)
            {
                printf("%d",k);
                j<4?k++:k--;
            }
            else
                printf(" ");
        }

        printf("\n");
    }
}