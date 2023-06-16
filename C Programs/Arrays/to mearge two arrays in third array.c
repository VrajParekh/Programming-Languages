#include<stdio.h>
void main()
{
    int a[5],b[6],c[11],i;
    for(i=0; i<5; i++)
    {
        printf("\nEnter a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    printf("\v");
    for(i=0; i<6; i++)
    {
        printf("\nEnter b[%d]=",i+1);
        scanf("%d",&b[i]);
    }
    for(i=0; i<5; i++)
    {
        c[i]=a[i];
    }
    for(i=0; i<6; i++)
    {
        c[i+5]=b[i];
    }
    for(i=0; i<11; i++)
    {
        printf("c[%d]=%d ",i+1,c[i]);
    }
}