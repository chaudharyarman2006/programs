// Online C compiler to run C program onl
#include <stdio.h>
 int circle(int radius)
 {
    int r,pi,area;
    pi=3.14;
    printf(" this option is providing area of circle:\n");
    printf("enter radius:");
    scanf("%d",&r);
    area=pi*r*r;
    printf("area of circle is:%d",area);
}
int rectangle(int length,int breadth)
{
    int l,b,area;
    printf(" this option is providing area of rectangle:\n");
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    area=l*b;
    printf("area of rectangle is:%d",area);
}
int triangle(int base,int height)
{
    int h,b,area;
    printf(" this option is providing area of triangle:\n");
    printf("enter height:");
        scanf("%d",&h);
    printf("enter base:");
    scanf("%d",&b);
    area=h*b*0.5;
    printf(" area of triangle is:%d",area);
}
int square(int side)
{
    int s,area;
    printf(" this option is providing area of square:\n");
    printf("enter side:");
    scanf("%d",&s);
    area=s*s;
    printf("area of square is:%d",area);
}
int main()
{
    int ch,radius,length,breadth,base,height,side;
    printf("enter ch value:");
    scanf("%d",&ch);
    if (ch==1)
    {
    circle(radius);    
    }
    else if (ch==2)
    {
    rectangle(length,breadth) ;   
    }
    else if (ch==3)
    {
    triangle(base,height);   
    }
    else if (ch==4)
    {
    square(side) ;   
    }
    else {
        printf("this choice is not avalaible:");
    }
    
    
    
    
    
    
    
    
    
}