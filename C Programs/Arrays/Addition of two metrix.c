#include<stdio.h>
void main()
{
  int a[3][3],b[3][3],c[3][3],i,j;
  printf("Enter the value in Matrix A:\n");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        printf("A[%d][%d]:",i,j);
        scanf("%d",&a[i][j]);
     }
  }
  printf("\nEnter the value in Matrix B:\n");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        printf("B[%d][%d]:",i,j);
        scanf("%d",&b[i][j]);
     }
  }   
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        c[i][j]=a[i][j]+b[i][j];
     }
  }
  printf("\nAddition of metrix A an B is:\n");
  for(i=0;i<3;i++)
  {
     for(j=0;j<3;j++)
     {
        printf("%d ",c[i][j]);
     }
        printf("\n");
  }
}