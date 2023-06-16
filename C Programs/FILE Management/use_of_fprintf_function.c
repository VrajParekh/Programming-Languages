#include <stdio.h>
void main()
{
    FILE *ptr = NULL;
    int a, b;
    ptr = fopen("myfile.txt", "w");
    printf("Enter Two Numbers:");
    scanf("%d %d", &a, &b);
    fprintf(ptr, "Sum of %d and %d is %d", a, b, a + b);
    fclose(ptr);
}