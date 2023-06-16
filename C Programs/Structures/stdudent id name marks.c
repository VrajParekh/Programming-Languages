#include<stdio.h>
struct student
{
    long long int id;
    char name[20];
    int marks;
};
void main()
{
    struct student s[10];
    int i,avg=0;
    for(i=0; i<5; i++)
    {
        printf("Enter student[%d] id no:",i);
        scanf("%ld",&s[i].id);
        printf("Enter student[%d] name:",i);
        scanf("%s",s[i].name);
        printf("Enter student[i] marks:",i);
        scanf("%d",&s[i].marks);
    }
    for(i=0; i<5; i++)
    {
       avg=avg+s[i].marks;
    }
    printf("\nAverage marks of students= %d",avg);
}
