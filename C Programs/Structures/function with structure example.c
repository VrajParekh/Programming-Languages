#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float per;
};
void fun(struct student s1)
{
    printf("\nStudent name:%s",s1.name);
    printf("\nStudent id:%d",s1.id);
    printf("\nStudent percentage:%f",s1.per);
}
void main()
{
    struct student s1;
    printf("enter student name:");
    scanf("%s",s1.name);
    printf("enter student id:");
    scanf("%d",&s1.id);
    printf("enter student Percentage:");
    scanf("%f",&s1.per);
    fun(s1);
}