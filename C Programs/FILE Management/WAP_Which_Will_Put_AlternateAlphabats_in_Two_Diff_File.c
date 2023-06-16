#include <stdio.h>
void main()
{
    FILE *first;
    FILE *second;
    int i, p = 1;
    first = fopen("file1.txt", "w");
    second = fopen("file2.txt", "w");
    for (i = 'A'; i <= 'Z'; i++)
    {
        if (p % 2 == 0)
        {
            fputc(i, second);
            p++;
        }
        else
        {
            fputc(i, first);
            p++;
        }
    }
    fclose(first);
    fclose(second);
}