#include <stdio.h>
struct engine
{
    int cc;
    int hp;   
};
struct car
{
   char model[20];
    struct engine eng;
};
int main()
{
    struct car c;
        printf("enter car model:");
        scanf("%s",c.model);
         printf("enter car cc and hp:");
         scanf("%d %d",&c.eng.cc,&c.eng.hp);
    printf("%s\n%d\n%d",c.model,c.eng.cc,c.eng.hp);
    return 0;
}