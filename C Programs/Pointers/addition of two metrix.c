#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],c[10][10],i,j,m,n,p,q;
  printf("For metrix A Enter number of rows and columns:\n");
  scanf("%d %d",&m,&n);
  printf("\nEnter the value in Matrix A:\n");
  for(i=0;i<m;i++)
  {
     for(j=0;j<n;j++)
     {
        printf("A[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
     }
  }
  printf("\nFor metrix B Enter number of rows and columns:\n");
  scanf("%d %d",&p,&q);
  if(m==p && n==q)
  {
   printf("\nEnter the value in Matrix B:\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
        printf("B[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
     }
   }
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
          c[i][j]=a[i][j]+b[i][j];
     }
   }
   printf("Addition of metrix A and B is:\n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
        printf("%d ",c[i][j]);
     }
       printf("\n");
   }

  }
}
