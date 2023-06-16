#include<stdio.h>
void main()
{
    int a[10],i,search_element,replace_element,flag=0,location;
    for(i=0; i<10; i++)
    {
        printf("enter a[%d]=",i+1);
        scanf("%d",&a[i]);
    }
    printf("\nEnter the element you want to search:");
    scanf("%d",&search_element);
    for(i=0; i<10; i++)
    {
        if(a[i]==search_element)
        {
            location=i;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("\nThe element %d is found at %dth location",search_element,location);
        printf("\nEnter the replacement element:");
        scanf("%d",&replace_element);
        a[location]=replace_element;
    }
    else
    {
        printf("\nElement does not found");
    }
    for(i=0; i<10; i++)
    {
        printf("a[%d]=%d ",i+1,a[i]);
    }
}