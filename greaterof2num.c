// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int x,y;
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);
    if(x>y) {
        printf(" x is greater:%d",x);
    }
    else
    printf("y is greater :%d",y);
}