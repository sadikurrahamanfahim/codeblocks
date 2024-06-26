#include<stdio.h>

struct student
{
    int id;
    char name[100];

} ;
int main()
{
    struct student stu1, stu2;
    printf("enter student id:");
    scanf("%d",&stu1.id);
    printf("enter name:");
    scanf("%s",&stu1.name);

    printf("enter student id:");
    scanf("%d",&stu2.id);
    printf("enter name:");
    scanf("%s",&stu2.name);
}
