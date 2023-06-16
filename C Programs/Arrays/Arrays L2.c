#include<stdio.h>
void main()
{
    int i,sal[5];
    float avg;
    for(i=0; i<5; i++)
    {
        printf("Enter salary for person %d: ",i+1);
        scanf("%d",&sal[i]);
    }
    avg=(sal[0]+sal[1]+sal[2]+sal[3]+sal[4])/5.0;
    printf("avg salary=%f",avg);
}