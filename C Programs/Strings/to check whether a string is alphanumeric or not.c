#include<stdio.h>
#include<string.h>
void main()
{
    char s[50];
    int i,A=0,D=0;
    printf("Enter a string:");
    gets(s);
    for(i=0; i<strlen(s); i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
            A=1;
        else
            D=1;
    }
    if(A==1 && D==1)
        printf("%s is an Alphanumeric",s);
    else
        printf("%s is not an Alphanumeric",s);
}
