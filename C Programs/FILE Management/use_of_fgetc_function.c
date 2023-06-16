#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    char ch;
    ptr = fopen("myfile.txt", "r");
    if (ptr == NULL)
    {
        printf("file not found");
    }
    ch = fgetc(ptr);
    // ch = fgetc(ptr);  
    // printf("%c",ch);
     while (!feof(ptr)) //feof = end of file OR while(ch!=EOF)
    {
        printf("%c", ch);
        ch = fgetc(ptr);
    }

    fclose(ptr);
}