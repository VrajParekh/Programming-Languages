#include <stdio.h>
#define max 20
void main()
{
    int ary[max], i, size, new_val, pos;
    printf("Enter the total elements in an array:");
    scanf("%d", &size);

    for (i = 0; i < size; i++)
    {
        printf("\nEnter a[%d]: ", i + 1);
        scanf("%d", &ary[i]);
    }

    printf("\nEnter the new element:");
    scanf("%d", &new_val);
    printf("\nEnter the position for new element:");
    scanf("%d", &pos);

    for (i = size; i >= pos; i--)
    {
        ary[i] = ary[i - 1];
    }
    ary[pos - 1] = new_val;
    size += 1;

    printf("\nNew array is like:\n");
    for (i = 0; i < size; i++)
        printf("ary[%d]=%d,", i + 1, ary[i]);
}