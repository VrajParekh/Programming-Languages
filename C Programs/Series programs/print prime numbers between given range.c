#include<stdio.h>

void main()
{
    int i,j,n1,n2,flag;
    flag=0;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the second number:");
    scanf("%d",&n2);


    for(i=n1; i<=n2 ; i++)
    {
        for(j=2 ; j<i ; j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }


        if(flag==0)
            printf("%d,",i);
        flag=0;
    }

}