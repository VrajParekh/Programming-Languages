#include<stdio.h>

void main()
{
    int a[10],i=0,greatest;
    for(i=0; i<10; i++)
    {
        printf("enter %d value:",i+1);
        scanf("%d",&a[i]);

    }
    greatest=a[0];
    for(i=1; i<10; i++)
    {
        if(a[i]>greatest)
            greatest=a[i];
    }
    printf("Greatest value is %d",greatest);

}
