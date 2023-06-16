#include<stdio.h>

void main()
{
    int mark1,mark2;
    printf("Enter your science mark:");
    scanf("%d",&mark1);
    printf("\nEnter your maths mark:");
    scanf("%d",&mark2);
    if(mark1>=33 && mark2>=33)
    {
        printf("\nCongratulations you pass both exams");
    }
    else if(mark1>=33 && mark2<=32)
    {
        printf("\nYou pass only science exam");
    }
    else if(mark2>=33 && mark1<=33)
    {
        printf("\nYou pass only maths exam");
    }
    else
    {
    printf("\You don't pass eny exam");
    }

    getchar();


}