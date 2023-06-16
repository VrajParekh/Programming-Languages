#include<stdio.h>

void main()
{
    int n,a,b,c,d,e,f,g,h,i,j;
    printf("Enter the amount:");
    scanf("%d",&n);

   j=n/2000;
   n=n%2000;
   i=n/500;
   n=n%500;
   h=n/200;
   n=n%200;
   g=n/100;
   n=n%100;
   f=n/50;
   n=n%50;
   e=n/20;
   n=n%20;
   d=n/10;
   n=n%10;
   c=n/5;
   n=n%5;
   b=n/2;
   a=n%2;

    printf("\nNo of 1 rupees note is %d",a);
    printf("\nNo of 2 rupees note is %d",b);
    printf("\nNo of 5 rupees note is %d",c);
    printf("\nNo of 10 rupees note is %d",d);
    printf("\nNo of 20 rupees note is %d",e);
    printf("\nNo of 50rupees note is %d",f);
    printf("\nNo of 100 rupees note is %d",g);
    printf("\nNo of 200 rupees note is %d",h);
    printf("\nNo of 500 rupees note is %d",i);
    printf("\nNo of 2000 rupees note is %d",j);
    
}