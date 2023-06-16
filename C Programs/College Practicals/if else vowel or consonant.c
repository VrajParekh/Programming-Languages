#include<stdio.h>

void main()
{
    char c;
    printf("enter the alphabet:");
    scanf("%c",&c);
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        printf("\n %c is vowel",c);
    }
    else
    {
        printf("\n %c is consonant",c);
    }

}