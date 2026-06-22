#include <stdio.h>
int main(){
    int w,x,y,z,p;
    printf("enter value of w:");
    scanf("%d",&w);
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    printf("enter value of z:");
    scanf("%d",&z);
    p=(w+x)/(y-z);
    printf("final value of p:%d",p);
}