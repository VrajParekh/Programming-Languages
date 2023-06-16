#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    char string[100];
    ptr = fopen("myfile.txt", "r");
    if (ptr == NULL)
    {
        printf("file not found");
    }
    // fgets(string,8,ptr);  
    // printf("%s",string); // aanu output=MY NAME (8th character is NULL)
    while (fgets(string,3, ptr) != NULL)
    {
        printf("%s", string);
    }
    fclose(ptr);
}