#include<stdio.h>
void main()
{
    int i,j,r,s;
    printf("\nArmstrong numbers beween 1 to 1000 is:\n");
    for(i=1; i<=1000; i++)
    {
        s=0;
        j=i;
        while(j!=0)
        {
          r=j%10;
          s=s+r*r*r;
          j/=10;
        }
        if(i==s)
          printf("%d\n",i);
     }
}
    