#include<stdio.h>

void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);

    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
        printf("\n%c is an alphabet",c);
    else
        printf("\n%c 8s not an alphabet",c);
}