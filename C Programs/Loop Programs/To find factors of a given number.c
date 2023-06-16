#include<stdio.h>
void main()
{
    int i,num;
    printf("Enter the number you want factors of it:");
    scanf("%d",&num);
    printf("\nFactors of %d is= ",num);
    for(i=1; i<=num; i++)
    {
        if(num%i==0)
            printf("%d, ",i);
    }
}
