#include<stdio.h>
void main()
{
    char s[50];
    int i;
    printf("Enter string:");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='a' && s[i]<='z')
            s[i]-=32;
    }
    printf("converted string into uppercase like:%s",s);
}
