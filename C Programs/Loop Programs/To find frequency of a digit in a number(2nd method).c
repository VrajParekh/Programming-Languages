#include<stdio.h>

void main()
{
    int num,i,f,r,t=0,j,k,counter;
    printf("Enter the number:");
    scanf("%d",&num);
    j=num;
    while(j!=0)
    {
        r=j%10;
        t++;
        j/=10;
    }
    for(k=1; k<=t; k++)
    {
        printf("\nEnter the digit you want to frequency of it:");
        scanf("%d",&f);
        counter=0;
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
}