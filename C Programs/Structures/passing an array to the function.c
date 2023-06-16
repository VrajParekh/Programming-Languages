#include<stdio.h>
void fun(int a[],int size);
void main()
{
    int i,a[10];
    for(i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    fun(a,10);
}
void fun(int a[],int size)
{
    int i;
    for(i=0; i<size; i++)
        printf("\na[%d]=%d",i+1,a[i]);
}