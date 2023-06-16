#include<stdio.h>

void main()
{
    int i,j,num,flag;
    flag=0;


    for(i=2; i<=100; i++)
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