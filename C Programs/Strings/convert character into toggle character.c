#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char s[10];
    printf("enter string:");
    gets(s);
    for(i=0; s[i]!='\0'; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            s[i]=s[i]+32;
        else
            s[i]=s[i]-32;
    }
    puts("After converting into toggle character:");
    puts(s);
}