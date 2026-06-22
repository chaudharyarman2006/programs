#include <stdio.h>
int main(){
    int x,y,z;
    printf("Enter value of x: ");
    scanf("%d", &x);
 printf("Enter value of y: ");
    scanf("%d", &y);
    z=x;
    x=y;
    y=z;
    printf("new value of x after swaping:%d",x);
    printf("\nnew value of y after swaping:%d",y);
    

}
