#include <stdio.h>
#include <math.h>
void main()
{
    int i, num, r, s = 0, count = 0, n;
    printf("Enter the number:");
    scanf("%d", &num);

    i = num;
    while (i % 10 != 0)
    {
        count++;
        i = i / 10;
    }

    n = count;
    for (i = num; i != 0; i /= 10)
    {
        r = i % 10;
        s = s + pow(r, n);
    }
    if (num == s)
        printf("\n%d is an Armstrong number", num);
    else
        printf("\n%d is not an Armstrong number", num);
}
