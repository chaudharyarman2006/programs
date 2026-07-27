#include <stdio.h>
struct marks
{
    int math;
    int science; 
     int english;
};
struct student
{
    int rollnm;
   char name[20];
    struct marks mk;
};
int main()
{
    struct student stu;
        printf("enter student roll number:");
        scanf("%d",&stu.rollnm);
        printf("enter student name:");
        scanf("%s",stu.name);
         printf("enter maths,science,english marks:");
         scanf("%d %d %d",&stu.mk.math,&stu.mk.science,&stu.mk.english);
    printf("%d\n%s\n%d\n%d\n%d",stu.rollnm,stu.name,stu.mk.math,stu.mk.science,stu.mk.english);
    int totalmarks=stu.mk.math+stu.mk.science+stu.mk.english;
    printf("\ntoal 3 sub marks=%d",totalmarks);
    return 0;
}