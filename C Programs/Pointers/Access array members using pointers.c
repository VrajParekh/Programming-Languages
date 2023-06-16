#include<stdio.h>
void main()
{
    int i,a[10],*p;
   // p=&a[0];
    for(i=0;i<5;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<5;i++)
    {
        printf("%d\n",*(p+i));
    }
}
