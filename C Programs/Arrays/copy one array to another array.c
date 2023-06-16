#include<stdio.h>
void main()
{
    int i,a[10],b[10],size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        b[i]=a[i];
    }
    printf("\n");
    for(i=0; i<size; i++)
    {
        printf("b[%d]:%d ",i+1,b[i]);
    }

}