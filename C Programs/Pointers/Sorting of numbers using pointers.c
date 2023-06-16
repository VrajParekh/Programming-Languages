#include<stdio.h>
void sort(int *p)
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
           if(*(p+i) > *(p+j))
           {
               temp=*(p+j);
               *(p+j)=*(p+i);
               *(p+i)=temp;
           }
        }
    }
    printf("\nSorted array:\n");
    for(i=0;i<5;i++)
        printf("%d\n",*(p+i));
}
void main()
{
    int a[5],i;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    sort(a);
}
