#include <stdio.h>
void main()
{
    int a = 5;
    int *ptr = &a; // ptr = &a;
    printf("a=%d", a);
    printf("\nadd of a=%p", ptr);
    printf("\nadd of a=%p", &a);
    printf("\na=%d", *ptr);
    printf("\na=%d", *&a);
    printf("\nadd of pointer to a=%p", &ptr);
}