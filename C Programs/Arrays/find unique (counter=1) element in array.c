#include<stdio.h>
#define max 20
void main()
{
    int i,j,a[max],size,counter,freq[max];
    printf("Enter the size of an array:");
    scanf("%d",&size);
    for(i=0; i<size; i++)
    {
        printf("a[%d]:",i+1);
        scanf("%d",&a[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
      counter=1;
      for(j=i+1;j<size;j++)
      {
         if(a[i]==a[j])    //MUST DID DRY RUN
         {                 //😑😑😑
            counter++;
            freq[j]=0;
         }
      }
         if(freq[i]!=0)
             freq[i]=counter;
    }
    printf("\nAll unique elements in array is:");
    for(i=0;i<size;i++)
    {
        if(freq[i]==1)
          printf("%d,",a[i]);
    }
     
}