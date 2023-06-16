#include<stdio.h>

void main()
{
// if else nu biji rite(3 mathi largest vadanu)
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nEnter the value of c:");
    scanf("%d",&c);

    if(a>b && a>c)
    {
        printf("\n%d is largest",a);
    }
    else if(b>c)
    {
        printf("\n%d is largest",b);
    }
    else
    {
        printf("\n%d is largest",c);
    }
}