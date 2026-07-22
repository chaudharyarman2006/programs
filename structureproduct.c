// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct product
    {
    int pno;
    char pname[20];
    int cost;
    char company[20];
};
int main() {
    struct product p1,p2;
    p1.pno=1;
    strcpy(p1.pname,"maggi");
   p1.cost=20;
    strcpy (p1.company,"nestle");
        p2.pno=2;
    strcpy (p2.pname,"coffee");
    p2.cost=100;
    strcpy (p2.company,"bru");
printf("%d %s %d %s\n", p1.pno, p1.pname,p1.cost,p1.company);
printf("%d %s %d %s", p2.pno, p2.pname,p2.cost,p2.company);

    return 0;
}