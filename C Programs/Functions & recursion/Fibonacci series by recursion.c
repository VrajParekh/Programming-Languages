#include<stdio.h>
int fib(int n)
{
    if(n==1 || n==2)
        return (1);
    else
        return (fib(n-1) + fib(n-2));
}
void main()
{
    int n,i;
    printf("enter the how many term of Fibonacci series you want to see:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
        printf("%d ",fib(i));
}