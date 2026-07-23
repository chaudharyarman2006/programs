#include <stdio.h>
struct book
{
    int bid;
    char bnm[20];
    int bprize;
};
int main()
{
    struct book b1;
    printf("enter book id:");
    scanf("%d",&b1.bid);
        printf("enter book name:");
    scanf("%s",b1.bnm);
        printf("enter book prize:");
    scanf("%d",&b1.bprize);
    printf("%d %s %d",b1.bid,b1.bnm,b1.bprize);

    return 0;
}