#include <stdio.h>
void main()
{
    int i, a[5], sum = 0;
    printf("enter array elements:");
    for (i = 0; i < 5; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("\nSum:%d", sum);
}