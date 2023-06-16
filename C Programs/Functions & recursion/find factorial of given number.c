#include<stdio.h>
int fact(int);
void main()
{
    int num,result;
    printf("Enter the number:");
    scanf("%d",&num);
    result=fact(num);
    printf("%d!=%d",num, result);

}
int fact(int num)  // a=num thase
{   // num pan levay
    int i,mul=1;
    for(i=1; i<=num; i++)
        mul=mul*i;
    return (mul);
}