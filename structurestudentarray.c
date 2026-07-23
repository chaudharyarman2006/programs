#include <stdio.h>
struct student
{
    int rollno;
    char nm[20];
    int marks;
};
int main()
{
    struct student ar[5];
    for (int i=0;i<5;i++){
    printf("enter student roll number:");
    scanf("%d",&ar[i].rollno);
    printf("enter student name:");
    scanf("%s",ar[i].nm);
    printf("enter student marks:");
    scanf("%d",&ar[i].marks);
    }
    for (int i=0;i<5;i++){
    printf("%d  %s  %d\n",ar[i].rollno,ar[i].nm,ar[i].marks);
    }
return 0;
}