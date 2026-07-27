#include <stdio.h>
struct name
{
    char fnm[10];
    char mnm[10];   
    char lnm[10];
};
struct salary
{
    int bsal;
    int hra;
    int da;
    int tsalary;
};
struct employee
{
    int eno;
   struct name nm;
    struct salary sly;
};
int main()
{
    struct employee ar[2];
    for(int i=0;i<2;i++)
    {
        printf("enter employee number:");
        scanf("%d",&ar[i].eno);
         printf("enter employee name:");
         scanf("%s %s %s",ar[i].nm.fnm,ar[i].nm.mnm,ar[i].nm.lnm);
         printf("enter salary:");
         scanf("%d %d %d",&ar[i].sly.bsal,&ar[i].sly.hra,&ar[i].sly.da);
    ar[i].sly.tsalary=ar[i].sly.bsal+ar[i].sly.hra+ar[i].sly.da;
    printf("toal salary=%d\n",ar[i].sly.tsalary);
    }
    return 0;
}