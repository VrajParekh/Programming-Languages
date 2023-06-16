#include<stdio.h>
void main()
{
    int i,a[10],even,odd;
    for(i=0; i<10; i++)
    {
        printf("Enter the number[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEven numbers is=");
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
            printf("%d ",a[i]);
    }
    printf("\nOdd numbers is=");
    for(i=0; i<10; i++)
    {
        if(a[i]%2!=0)
            printf("%d ",a[i]);
    }


}