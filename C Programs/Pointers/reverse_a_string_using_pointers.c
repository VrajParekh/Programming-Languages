#include <stdio.h>
char *rev(char *p)
{
    int i, j, t;
    for (i = 0; *(p + i) != '\0'; i++)
    {
    }
    for (j = 0; j < i / 2; j++)
    {
        t = *(p + j);
        *(p + j) = *(p + i - j - 1);
        *(p + i - j - 1) = t;
    }
    return (p);
}
void main()
{
    char s[20];
    printf("enter string:");
    scanf("%s", s);
    printf("reverse string:%s", rev(s));
}