#include<stdio.h>
#include<string.h>
void main()
{
    int i,j,k=0;
    char s[10],s1[10];
    printf("enter string:");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
    }
    for(j=i-1; j>=0; j--)
    {
        s1[k]=s[j];
        k++;
    }
    s1[k]='\0';
    if(strcmp(s1,s)==0)
        printf("string is pelindrom");
    else
        printf("string is not pelindrom");
}