#include <stdio.h>
struct address
{
    char street[20];
    char city[20];
};
struct person
{
    char name[20];
    int age;
    struct address addr;
};
int main()
{
    struct person p1;
    printf("enter person name:");
    scanf("%s",p1.name);
     printf("enter person age:");
    scanf("%d",&p1.age);
     printf("enter person street:");
    scanf(" %[^\n]",p1.addr.street);
         printf("enter person city:");
    scanf(" %[^\n]",p1.addr.city);
    printf("%s %d %s %s",p1.name,p1.age,p1.addr.street,p1.addr.city);
}

    
