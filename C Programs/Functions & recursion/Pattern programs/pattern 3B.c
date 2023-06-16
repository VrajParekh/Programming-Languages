#include<stdio.h>     //* * * *     
                      // *     *  
void main()           //  *     *   
{                     //   * * * * 
 int i,j;                  
    for(i=1; i<=4; i++)       
    {    
       for(j=1;j<i;j++)
       {
           printf(" ");                   
       }
       if(i==1||i==4)
       {
         for(j=1;j<=4;j++)      
         {
           printf("* ");       
         }
       }
       else
       {
           printf("*");
         for(j=1;j<=5;j++) 
         {
           printf(" ");
         }
           printf("*");
       }
         printf("\n");
    }
}




