// Online C compiler to run C program online
#include <stdio.h>

float main() {
     float p,r,t,ci;
    printf("Enter principal value:");
    scanf("%f",&p);
    printf("Enter rate of interest:");
    scanf("%f",&r);
       printf("Enter time :");
    scanf("%f",&t);
    ci=p*(1+r/100)*t-p;
    printf(" simple interest is:%f",ci);
    return 0;
}