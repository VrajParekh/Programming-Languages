#include<stdio.h>
void swap(int *x,int *y);
void main()
{
    int a,b;
    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("after swapping a=%d & b=%d",a,b);
}
void swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}