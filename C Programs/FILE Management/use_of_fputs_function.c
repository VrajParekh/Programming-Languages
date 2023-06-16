#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    char string[20];
    ptr = fopen("myfile.txt", "w");
    puts("Enter Your Name:");
    gets(string);
    fputs(string, ptr); //in this string base address is contained
    fclose(ptr);
}