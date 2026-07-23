#include <stdio.h>
struct student
{
    char nm[20];
    int marks;
};
int main()
{
    struct student ar[3];
    for (int i=0;i<3;i++){
    printf("enter student name:");
    scanf("%s",ar[i].nm);
    printf("enter student marks:");
    scanf("%d",&ar[i].marks);
    }
    for (int i=0;i<3;i++){
    printf("%s  %d\n",ar[i].nm,ar[i].marks);
    }
    printf("higest marks is of ");
    if (ar[0].marks>ar[1].marks && ar[0].marks>ar[2].marks){
        printf("%s",ar[0].nm);
    }
    else if (ar[1].marks>ar[0].marks&& ar[1].marks>ar[2].marks){
        printf("%s",ar[1].nm);
    }
    else {
        printf("%s",ar[2].nm);
    }
return 0;
}