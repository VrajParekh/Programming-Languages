#include<stdio.h>
int fact(int num)
{
    if(num==0 || num==1)
        return 1;
    else
        return (num*fact(num-1));
}
void main()
{
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    printf("%d!=%d",number,fact(number));
}