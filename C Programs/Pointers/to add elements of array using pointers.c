#include<stdio.h>
//to add elements of array using pointer
int sum(int *p,int size)
{
    int i,sum=0;
    for(i=0; i<size; i++)
    {
        sum=sum+*(p+i);
    }
    return (sum);
}
void main()
{
    int a[10],i;
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nsum of elements=%d",sum(a,10));
}