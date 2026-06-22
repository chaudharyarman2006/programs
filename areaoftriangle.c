#include <stdio.h>
#include<math.h>

float main() {
     float tr,s,a,b,c;
    printf("Enter one side(a):");
    scanf("%f",&a);
    printf("Enter second side(b):");
    scanf("%f",&b);
       printf("Enter third side(c):");
    scanf("%f",&c);
    s=(a+b+c)/2;
    printf("%f",s);
    tr=sqrt((s)*(s-a)*(s-b)*(s-c));
printf("\n area of triangle :%f",tr);
    
    
    return 0;
}