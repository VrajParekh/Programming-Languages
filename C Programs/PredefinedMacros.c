#include<stdio.h>
void main()
{
    printf("Date is:%s\n",__DATE__);
    printf("Time is:%s\n",__TIME__);
    printf("LINE is:%d\n",__LINE__);
    printf("FILE name is:%s\n",__FILE__);
    printf("ANSI:%d",__STDC__);
    
}   