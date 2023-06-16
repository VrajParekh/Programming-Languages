#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,n,*ptr;
    printf("enter the size of an array you want to create:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the value no %d for this array:",i);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nthe value at %d for this array is %d:",i,ptr[i]);
    }
    printf("\nenter the size of new array you want to create:");
    scanf("%d",&n);
    ptr=(int*)realloc(ptr,n*sizeof(int));
    for(i=0;i<n;i++)
    {
        printf("enter the value no %d for this array:",i);
        scanf("%d",&ptr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("\nthe value at %d for this array is %d:",i,ptr[i]);
    }
    free(ptr);
}
