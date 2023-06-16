#include<stdio.h>

void main()
{
    int month;
    printf("Enter the month: ");
    scanf("%d",&month);

    if(month == 1)
        printf("\nmonth is January and days is 31");
    else if(month == 2)
        printf("\nnmonth is Fabruary and days is 28");
    else if(month == 3)
        printf("\nnmonth is March and days is 31");
    else if(month == 4)
        printf("\nnmonth is April and days is 30");
    else if(month == 5)
        printf("\nnmonth is May and days is 31");
    else if(month == 6)
        printf("\nnmonth is June and days is 30");
    else if(month == 7)
        printf("\nnmonth is July and days is 31");
    else if(month == 8)
        printf("\nnmonth is August and days is 31");
    else if(month == 9)
        printf("\nnmonth is September and days is 30");
    else if(month == 10)
        printf("\nnmonth is October and days is 31");
    else if(month == 11)
        printf("\nnmonth is November and days is 30");
    else if(month == 12)
        printf("\nnmonth is December and days is 31");
    else
        printf("\n Invalid month");

}