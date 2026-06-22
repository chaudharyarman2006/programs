#include <stdio.h>
int main(){
    float g,c;
    printf("enter value of gallons:");//US gallon
    scanf("%f",&g);
    c=g*0.1336;
    printf("cubic feet:%f",c);
}