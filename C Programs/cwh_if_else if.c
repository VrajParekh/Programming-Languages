#include<stdio.h>
void main()
{
// if else nu example
    int age;
    printf("Enter yout age:");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("\nYou can vote");
    }
    else if(age>=10)
    {
        printf("\nYou can vote for teenagers");
    }
    else
    {
        printf("\nYou can vote for babies");
    }
}