#include<stdio.h>
void rev(char string[]);
void main()
{
    char str[50];
    puts("enter string:");
    gets(str);
    puts("string in reverse:");
    rev(str);
}
void rev(char string[])
{
    int i,j;
    for(i=0; string[i]!='\0'; i++)
    {
    }
    for(j=i-1; j>=0; j--)
    {
        printf("%c",string[j]);
    }
}