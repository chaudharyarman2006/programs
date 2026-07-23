#include <stdio.h>
struct circle
{
    int radius;
};
int main()
{
    struct circle c;
    printf("enter radius:");
    scanf("%d",&c.radius);
    float area =c.radius *c.radius*3.14;
    printf("%f",area);

    return 0;
}