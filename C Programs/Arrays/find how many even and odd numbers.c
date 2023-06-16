#include<stdio.h>
void main()
{
    int i,a[10],even=0,odd=0;
    for(i=0; i<10; i++)
    {
        printf("Enter the number[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0; i<10; i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nTotal even numbers is=%d\nTotal odd numbers is=%d",even,odd);


}