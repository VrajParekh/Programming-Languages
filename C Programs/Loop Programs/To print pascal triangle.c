#include<stdio.h>

void main()
{
    int row,col,n,num,space;
    printf("Enter the Row number:");
    scanf("%d",&n);
    for(row=0; row<n; row++)
    {
        for(space=0; space<(n-row); space++)
        {
            printf(" ");
        }
        num=1;
        for(col=0; col<=row; col++)
        {
            printf(" %d",num);
            num=num*(row-col)/(col+1);
        }
        printf("\n");
    }

}