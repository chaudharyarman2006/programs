#include<stdio.h>

struct student{
    int pid;
    char nm[20];
    int price;;
    char company[60];
    int qty;
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
    struct student p;
    for(int i=1;i<=3;i++)
    {
        printf("\nenter product id:");
        scanf("%d",&p.pid);
        printf("enter product name:");
        scanf("%s",p.nm);
        printf("enter product price:");
        scanf("%d",&p.price);
        printf("enter product compaany:");
        scanf("%s",p.company);
        printf("enter product quantity:");
        scanf("%d",&p.qty);
        fwrite(&p,sizeof(p),1,fp);
}
fclose(fp);
return 0;
}