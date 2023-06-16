#include<stdio.h>
#define max 20
void main()
{
    int i,array[max],size,temp;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    printf("\nBefore reversing an array:\n");
    for(i=0; i<size; i++)
    {
        printf("array[%d]:",i+1);
        scanf("%d",&array[i]);
    }
    for(i=0; i<size/2; i++)
    {
        temp=array[i];
        array[i]=array[(size-1)-i];
        array[(size-1)-i]=temp;
    }
    printf("\nAfter reversing an array:\n");
    for(i=0; i<size; i++)
    {
        printf("array[%d]:%d\n",i+1,array[i]);
    }
}