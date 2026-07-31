#include<stdio.h>

struct student{
    int rn;
    char nm[20];
    int marks;
};
int main()
{
    FILE *fp;
    fp=fopen("student.dat","ab");
    if (fp==NULL)
    {
        printf("file doesnot exist");
        return 1;
    }
    struct student s ;
    for(int i=1;i<=5;i++)
    {
        printf("\nenter student roll no:");
        scanf("%d",&s.rn);
        printf("enter student name:");
        scanf("%s",s.nm);
        printf("enter student maarks:");
        scanf("%d",&s.marks);
        fwrite(&s,sizeof(s),1,fp);
}
fclose(fp);
return 0;
}