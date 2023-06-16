#include<stdio.h>
#include<string.h>
void main()
{
    int i,j;
    char n[5][20],temp[20];
    printf("enter names:\n");
    for(i=0; i<5; i++)
        gets(n[i]);
    for(i=0; i<5; i++)
    {
        for(j=i+1; j<5; j++)
        {
            if(strcmp(n[i],n[j])>0)
            {
                strcpy(temp,n[i]);
                strcpy(n[i],n[j]);
                strcpy(n[j],temp);
            }
        }
    }
    printf("\nsorted names:\n");
    for(i=0; i<5; i++)
        puts(n[i]);
}