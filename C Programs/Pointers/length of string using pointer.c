#include<stdio.h>
int length(char *p)
{
    int i;
    for(i=0; *(p+i)!='\0'; i++)
    {
    }
    return (i);
}
void main()
{
    int a;
    char s[20];
    printf("enter string:");
    scanf("%s",s);
    printf("length=%d",length(s));
}