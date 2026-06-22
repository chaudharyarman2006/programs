// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>

float main() {
     float a,b,c,d,x;
    printf("Enter one side(a):");
    scanf("%f",&a);
    printf("Enter second side(b):");
    scanf("%f",&b);
       printf("Enter third side(c):");
    scanf("%f",&c);
printf("Enter fourth side(d):");
    scanf("%f",&d);    
    x=((a+b)*(c-d))/(a+d);
    printf(" value of x is:%f",x);
    
    return 0;
}