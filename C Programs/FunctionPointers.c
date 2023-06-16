#include <stdio.h>

int sum(int a, int b)
{
    return (a + b);
}

void main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2));

    int (*fptr)(int, int);
    fptr = &sum;  //Creating a function pointer

    int d = (*fptr)(4, 6);  //Dereferencing a function pointer

    printf("The value of d is %d\n", d);
}