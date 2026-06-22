#include <stdio.h>
int main(){
    int y,a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("enter value of b:");
    scanf("%d",&b);
    y=((a*2)+(b*3))/(a-b);
    printf("final value of y:%d",y);
}