#include<stdio.h>
#define max 20
void main()
{
    int i,a[max],size,second,largest;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    largest=a[0];
    second=a[1];
    if(second>largest)
    {
        largest=a[1];
        second=a[0];
    }
    for(i=2; i<size; i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
    }
    printf("\nSecond largest value=%d", second);
}