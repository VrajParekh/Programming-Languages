#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    int a, b, c;
    ptr = fopen("for_fscanf.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("a=%d b=%d c=%d", a, b, c);
    fclose(ptr);
}