#include<stdio.h>
#define max 20
void main()
{
    int i,a[max],size,sum=0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nSum of the array is:");
    for(i=0; i<size; i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}