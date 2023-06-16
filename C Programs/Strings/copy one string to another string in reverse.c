#include<stdio.h>
void main()
{
    int i,j,k=0;
    char str1[50],str2[50];
    puts("enter string 1:");
    gets(str1);
    for(i=0; str1[i]!='\0'; i++)
    {
    }
    for(j=i-1;j>=0;j--)
    {
       str2[k]=str1[j];
       k++;
    }
    str2[k]='\0';
    printf("%s",str2);
}        