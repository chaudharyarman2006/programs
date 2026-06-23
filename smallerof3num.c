#include <stdio.h>
int main() {
    int x,y,z;
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);
    printf("enter z value:");
    scanf("%d",&z);
    if(x<y && x<z) {
    printf(" x is smaller:%d",x);
    }
    else if(y<x && y<z) {
    printf("y is samller :%d",y);
    }
    else if(z<x && z<y) {
    printf("z is samller :%d",z);
    }
}