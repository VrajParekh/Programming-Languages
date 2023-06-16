#include<stdio.h>
void main()
{
 int var[]={10,20,30},i,*ptr;
 ptr=var; // or ptr=&var[0];
     // & nahi aave ,it stores the address 
     // of arrays first element.
 for(i=0;ptr<=&var[2];i++)
 {
   printf("\naddress of var[%d]=%x",i,ptr); 
   printf("\nvalue of var[%d]=%d",i,*ptr);
   ptr++;
 }
}