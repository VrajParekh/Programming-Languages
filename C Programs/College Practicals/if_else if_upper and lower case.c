#include<stdio.h>

void main()
{
    // if else if nu example
 char c;
    printf("Enter the character:");
    scanf("%c",&c);
    
    if(c>='A' && c<='Z')
     {
       printf("\nIt is the upper case alphabet");
     }
    else if(c>='a' && c<='z')
     {
       printf("\nIt is the lower case alphabet");
     }
    else
     {
       printf("\nIt is not an alphabet");
     }
}