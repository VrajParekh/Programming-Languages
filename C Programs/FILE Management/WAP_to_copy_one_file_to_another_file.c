#include <stdio.h>
void main()
{
    FILE *source;
    FILE *dest;
    char ch;
    source = fopen("file1.txt", "r");
    dest = fopen("file2.txt", "w");
    ch = fgetc(source);
    while (ch != EOF)
    {
        fputc(ch, dest);
        ch = fgetc(source);
    }
    fclose(source);
    fclose(dest);
    dest = fopen("file2.txt", "r");
    char c;
    printf("file2.txt looks like:\n");
    c = fgetc(dest);
    while (c != EOF)
    {
        printf("%c", c);
        c = fgetc(dest);
    }
    fclose(dest);
}