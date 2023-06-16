#include<stdio.h>

void main()
{
    int a,b,c;
    printf("Enter the 1st angle of a triangle:");
    scanf("%d",&a);
    printf("Enter the 2nd angle of a triangle:");
    scanf("%d",&b);
    printf("Enter the 3rd angle of a triangle:");
    scanf("%d",&c);

    if(a==0 || b==0 || c==0)
        printf("\nTriangle is not valid");
    else if((a+b+c)==180)
        printf("\nTriangle is valid");
    else
        printf("\nTriangle is not valid");
}