#include<stdio.h>

void main()
{
    int num,rem,rev=0,temp;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;

    for(temp; temp!=0; temp/=10)
    {
        rem=temp%10;
        rev=rev*10+rem;
    }
    if(num==rev)
        printf("\n %d is pelindrom",num);
    else
        printf("\n %d is not pelindrom",num);



}