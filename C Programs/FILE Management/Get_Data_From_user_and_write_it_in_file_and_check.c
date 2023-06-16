#include <stdio.h>
void main()
{
    FILE *ptr;
    char str[100];
    ptr = fopen("myfile.txt", "w");
    printf("Enter data:");
    gets(str);
    fputs(str, ptr);
    fclose(ptr);
    ptr = fopen("myfile.txt", "r");
    char c;
    c = fgetc(ptr);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(ptr);
    }
    fclose(ptr);
}