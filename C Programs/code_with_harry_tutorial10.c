#include<stdio.h>

void main()
{
    int a;
    printf("Which exam you have passed ?:");
    printf("\nType 1 for maths, type 2 for science or type 2 for both\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("\nCongratulations you won 15rs for passing maths exam");
    }
    else if(a==2)
    {
        printf("\nCongratulations you won 15rs for passing science exam");
    }
    else if(a==3)
    {
        printf("\nWoW!! you passed both the exams you won 45rs for that");
    }
    else
    {
    printf("\sorry this is not valid input");
    }

    getchar();


}