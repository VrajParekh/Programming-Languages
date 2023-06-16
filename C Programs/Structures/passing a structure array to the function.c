#include<stdio.h>
struct student
{
    char name[20];
    int id;
    int per;
};
void fun(struct student s[],int size);
void main()
{
    struct student s[3];
    int i;
    for(i=0; i<3; i++)
    {
        printf("enter student [%d] i information:\n",i+1);
        printf("name:");
        scanf("%s",s[i].name);
        printf("id:");
        scanf("%d",&s[i].id);
        printf("percentage:");
        scanf("%d",&s[i].per);
    }
    fun(s,3);
}
void fun(struct student s[],int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("\nstudent[%d] name:%s",i+1,s[i].name);
        printf("\nstudent[%d] id:%d",i+1,s[i].id);
        printf("\nstudent[%d] percentage:%d",i+1,s[i].per);
    }
}