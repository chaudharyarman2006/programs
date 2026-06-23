#include <stdio.h>
int main() {
    int w,x,y,z;
    printf("enter w value:");
    scanf("%d",&w);
    printf("enter x value:");
    scanf("%d",&x);
    printf("enter y value:");
    scanf("%d",&y);
    printf("enter z value:");
    scanf("%d",&z);
 if(w>x && w>y && w>z) {
    printf(" w is greater:%d",w);
    }
    else if(x>w && x>y && x>z) {
    printf(" x is greater:%d",x);
    }
    else if(y>w && y>x && y>z) {
    printf("y is greater :%d",y);
    }
    else if(z>w && z>x && z>y) {
    printf("z is greater :%d",z);
    }
}