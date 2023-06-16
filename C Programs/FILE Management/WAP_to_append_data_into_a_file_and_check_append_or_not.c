#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    char string[20];
    ptr = fopen("myfile.txt", "a");
    puts("Enter Your Name:");
    gets(string);
    fputs(string, ptr); //in this string base address is contained
    fclose(ptr);
    ptr = fopen("myfile.txt", "r");
    char ch;
    ch = fgetc(ptr);
    printf("Appended file:");
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(ptr);
    }

    fclose(ptr);
}