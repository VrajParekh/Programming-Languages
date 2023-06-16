#include<stdio.h>
#define MAX 20
void main()
{
    float height[MAX],max,min;
    int i,size;
    printf("Enter how many students:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("Enter height of student[%d]:",i+1);
        scanf("%f",&height[i]);
    }
    max=height[0];
    min=height[0];
    for(i=1; i<size; i++)
    {
        if(height[i]>max)
            max=height[i];
        if(height[i]<min)
            min=height[i];
    }
    printf("Maximum height is=%f \nMinimum height is=%f",max,min);
}