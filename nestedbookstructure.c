#include <stdio.h>
struct author
{
    int age;
    char name[20];   
};
struct book
{
    int price;
   char title[20];
    struct author au;
};
int main()
{
    struct book b;
        printf("enter book titile:");
        scanf("%s",b.title);
         printf("enter book price:");
         scanf("%d",&b.price);
         printf("enter author age and name:");
         scanf("%d %s",&b.au.age,b.au.name);
    printf("%s\n%d\n%d\n%s",b.title,b.price,b.au.age,b.au.name);
    return 0;
}