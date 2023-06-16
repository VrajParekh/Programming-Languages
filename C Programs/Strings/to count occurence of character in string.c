#include<stdio.h>
void main()
{
    int i,counter=0;
    char str[20],s_character;
    printf("enter string:");
    gets(str);
    printf("enter a character you want to occurrence of it:");
    scanf("%c",&s_character);
    for(i=0; str[i]!='\0'; i++)
    {
        if(s_character==str[i])
            counter++;
    }
    printf("\nTotal occurrence of %c is=%d",s_character,counter);
}