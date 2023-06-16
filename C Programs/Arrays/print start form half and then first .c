#include<stdio.h>
#define max 20
void main()
{
    int i,a[max],size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=size/2; i<size; i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0; i<size/2; i++)
    {
        printf("%d ",a[i]);
    }
}