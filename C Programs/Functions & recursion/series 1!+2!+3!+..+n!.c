#include<stdio.h>
int sum(int);
void main()
{
    int n,result;
    printf("Enter the term:");
    scanf("%d",&n);
    result=sum(n);
    printf("sum=%d",result);

}
int sum(int n)
{
    int i,j,mul=1,sum=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            mul=mul*j;
        }
        sum=sum+mul;
        mul=1;
    }
    return (sum);
}