#include<stdio.h>

void main()
{
    // if else if nu example
    char c;
    printf("Enter:");
    scanf("%c",&c);


    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        printf("\nIt is a character");
    }
    else if(c>='0' && c<='9')
    {
        printf("\nIt is a digit");
    }
    else
    {
        printf("\nIt is the special character");
    }
}