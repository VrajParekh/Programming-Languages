#include<stdio.h>
#define max 20
void main()
{
    int i,a[max],size,odd=0,even=0;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<size; i++)
    {
        if(a[i]%2==0)
        {
            even++;
            printf("%d ",a[i]);
        }
    }
    printf("This are the total %d even numbers\n",even);
    for(i=0; i<size; i++)
    {
        if(a[i]%2!=0)
        {
            odd++;
            printf("%d ",a[i]);
        }
    }
    printf("This are the total %d odd numbers",odd);
}