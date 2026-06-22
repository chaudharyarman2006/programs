#include <stdio.h>
int main(){
    float b;
    int a,x,y;
    printf("enter value of x:");
    scanf("%d",&x);
    printf("enter value of y:");
    scanf("%d",&y);
    a=x%y;//x>y
    printf("remainder is:%d",a);
    b=x/y;
    printf("\nquotient is:%f",b);
}
   