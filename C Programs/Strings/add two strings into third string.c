#include<stdio.h>
void main()
{
    int i,k=0;
    char str1[50],str2[50],str3[100];
    puts("enter string 1:");
    gets(str1);
    puts("enter string 2:");
    gets(str2);
    for(i=0; str1[i]!='\0'; i++)
    {
        str3[i]=str1[i];
    }
    for(i; str2[k]!='\0'; i++)
    {
        str3[i]=str2[k];
        k++;
    }
    str3[i]='\0';
    printf("\nString 3 like:\n");
    puts(str3);
}