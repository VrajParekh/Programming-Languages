#include<stdio.h>
void fun(int num)
{
    if(num>0)
        fun(num-1);
    else
        return;
    printf("%d,",num);
}
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    fun(number);
}