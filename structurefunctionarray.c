#include <stdio.h>
int rect(int length,int breadth)
{
    int area=length*breadth;
    return area;
}
struct rectangle
{
    int length;
    int breadth;
};
int main()
{
    struct rectangle r;
    printf("enter length:");
    scanf("%d",&r.length);
     printf("enter breadth:");
    scanf("%d",&r.breadth);
    int area=rect(r.length,r.breadth);
    printf("area of rectangle=%d",area);

    return 0;
}