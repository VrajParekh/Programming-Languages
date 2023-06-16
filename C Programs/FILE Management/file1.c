#include <stdio.h>
void main()
{   //****Reading a file****
    FILE *ptr = NULL;
    char string[100]="HEllo hii there is me vraj";
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);

    //****Writing a file****
    ptr = fopen("myfile.txt", "w");
    fprintf(ptr, "%s", string);
}