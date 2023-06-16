#include<stdio.h>

void main()
{

    int month;
    printf("Enter the month:");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\n 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("\n 30 days");
        break;
    case 2:
        printf("\n 28/29 days");
    default :
        printf("\n Invalid entry");

    }



}





