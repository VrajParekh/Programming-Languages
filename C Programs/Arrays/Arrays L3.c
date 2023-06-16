#include<stdio.h>
void main()
{
    int i,sal[5],sum=0;
    float avg;
    for(i=0; i<5; i++)
    {
        printf("Enter salary for person %d: ",i+1);
        scanf("%d",&sal[i]);
        sum+=sal[i];
    }

    avg=sum/5.0;
    printf("avg salary=%f",avg);
}