#include<stdio.h>
#include<string.h>
void main()

{
    int i,a,flag=0;
    char name[10][50],search_name[50];
    for ( i = 0; i < 10; i++)
    {
        scanf("%s",name[i]);
    }
    printf("Enter search name:");
    scanf("%s",search_name);

    for ( i = 0; i < 10; i++)
    {
        if ((a=strcmp(search_name,name[i]))==0)
        {
            printf("Yes exist");
            flag=1;
        }
    }
    if (flag==0)
        printf("\nnot exist");

}
