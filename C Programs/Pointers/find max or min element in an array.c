#include<stdio.h>
void main()
{
    int num[10],*p,i,max,t;
    p=&num[0];
    printf("enter 10 numbers in an array:\n");
    for(i=0;i<10;i++)
    {
      scanf("%d",p+i);
    }
    max=*p;
    for(i=0;i<10;i++)
    {
      if(*(p+i)>max)
      {
         t=max;
         max=*(p+i);
         *(p+i)=t;
      }
    }
    printf("max=%d",max);
}
