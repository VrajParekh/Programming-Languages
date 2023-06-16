#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the 1st side of a triangle:");
    scanf("%d",&a);
    printf("Enter the 2nd side of a triangle:");
    scanf("%d",&b);
    printf("Enter the 3rd side of a triangle:");
    scanf("%d",&c);

    if(a+b>c && b+c>a && a+c>b)
        printf("\nTriangle is valid");
    else
        printf("\nTriangle is not valid");
}