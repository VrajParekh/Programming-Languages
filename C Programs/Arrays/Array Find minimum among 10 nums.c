#include<stdio.h>

void main()
{
    int a[10],i=0,minimum;
    for(i=0; i<10; i++)
    {
        printf("enter %d value:",i+1);
        scanf("%d",&a[i]);

    }
    minimum=a[0];
    for(i=1; i<10; i++)
    {
        if(a[i]<minimum)
            minimum=a[i];
    }
    printf("Minimum value is %d",minimum);

}
