#include<stdio.h>

void main()
{
    char c;
    printf("Enter the character:");
    scanf("%c",&c);
    if((c>='A' && c<='Z') || (c>='a' && c<='z'))
    {
        switch (c)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("\nVowel");
            break;
        default :
            printf("\nConsonent");
        }
    }
    else
    {
        printf("\nNon alphabetic consonent");
    }

}









