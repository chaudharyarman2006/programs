// Online C compiler to run C program onl
#include <stdio.h>
 int cylinder(int radius,int height)
 {
    int r,h,vol,pi;
    pi=3.14;
    printf(" this option is providing volume of cylinder :\n");
    printf("enter radius:");
    scanf("%d",&r);
    printf("enter height:");
    scanf("%d",&h);
    vol=pi*r*r*h;
    printf("volume  of cylinder is:%d",vol);
}
int sphere(int radius)
{
    int r,vol;
    int pi=3.14;
    printf(" this option is providing volume of sphere:\n");
    printf("enter radius:");
    scanf("%d",&r);
    vol=(4/3)*pi*r*r*r;
    printf("volume of sphere is:%d",vol);
}
int cone(int radius,int height)
{
    int r,h,vol;
    int pi=3.14;
    printf(" this option is providing voumne of cone:\n");
    printf("enter height:");
    scanf("%d",&h);
    printf("enter radius:");
    scanf("%d",&r);
    vol= (1.0/3.0)*pi*h*r*r;
    printf(" volume of cone is:%d",vol);
}
int main()
{
    int ch,radius,length,breadth,base,height,side;
    printf("enter ch value:");
    scanf("%d",&ch);
    if (ch==1)
    {
    cylinder(radius,height);    
    }
    else if (ch==2)
    {
    sphere(radius) ;   
    }
    else if (ch==3)
    {
    cone(radius,height);   
    }
    else {
    printf("this choice is not avalaible:");
    }
}