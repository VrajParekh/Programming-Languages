#include<stdio.h>

void main()
{
    int num,i,f,r,counter=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("\nEnter the digit you want to frequency of it: ");
    scanf("%d",&f);
    i=num;
    while(i!=0)
    {
        r=i%10;
        if(f==r)
            counter++;
        i/=10;
    }
    printf("\nIn the %d number frequency of %d is=%d",num,f,counter);
}