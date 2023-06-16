#include<stdio.h>

void main()
{

    int num,flag;
    printf("Enter the number:");
    scanf("%d",&num);

    if(num>0)
        flag=1;
    else if(num<0)
        flag=2;
    else if(num==0)
        flag=3;

    switch (flag)
    {
    case 1:
        printf("\n%d is positive",num);
        break;
    case 2:
        printf("\n%d is negative",num);
        break;
    case 3:
        printf("\n%d is zero",num);
        break;
    }



}





