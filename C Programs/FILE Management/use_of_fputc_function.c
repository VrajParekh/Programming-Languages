#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    char c;
    ptr = fopen("myfile.txt", "w");
    puts("Enter character:");
    scanf("%c", &c);
    fputc(c,ptr);
    fclose(ptr);
}