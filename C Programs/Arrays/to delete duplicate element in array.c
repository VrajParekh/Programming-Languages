#include<stdio.h>
#define max 20
void main()
{
    int i,j,k,a[max],size;
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
      {
         if(a[i]==a[j])
         {
            for(k=j;k<size;k++)
            {
               a[k]=a[k+1];
            }
            j--;
            size--;
         }
      }
    }
    printf("\nAfter deleting duplicate element in array:\n");
    for(i=0;i<size;i++)
    {
          printf("a[%d]:%d\n",i+1,a[i]);
    }
     
}