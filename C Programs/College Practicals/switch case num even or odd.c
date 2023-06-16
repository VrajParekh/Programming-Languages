#include<stdio.h>

void main()
{

    int num,mod;
    printf("Enter the number:");
    scanf("%d",&num);

    mod=num%2;

    switch (mod)
    {
    case 0:
        printf("\n%d is even",num);
        break;


    default:
        printf("\n%d id odd",num);

    }



}





