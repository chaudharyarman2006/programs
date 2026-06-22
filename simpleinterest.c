// Online C compiler to run C program online
#include <stdio.h>

float main() {
     float p,r,t,si;
    printf("Enter principal value:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
       printf("Enter time :");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf(" simple interest is:%f",si);
    return 0;
}