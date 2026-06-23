// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int calculate() {
    int x,y;
    printf("enter a value:");
    scanf("%d",&x);
    y=pow(x,5);
    return y;
}
int main() {
     int z=calculate();
     printf("%d",z);
}