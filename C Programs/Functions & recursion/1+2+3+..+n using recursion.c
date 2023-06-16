#include<stdio.h>
int sum(int num)
{
    if(num>0)
        return (num+sum(num-1));
    else
        return;
}
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    printf("sum=%d",sum(number));
}