#include <stdio.h>
float arm(float a) {  
    float b = a / 12.0;
    return b;
}
float feet(float d) {  
    float f = d / 30;
    return f;
}
float inches(float d) {  
    float i = d * 0.4;
    return i;
}
int main() {
    float d,a;
    printf("Enter distance in cm: ");
    scanf("%f", &d);  
    printf("Enter inches: ");
    scanf("%f", &a);  
    printf("Inches to feet: %f\n",arm(a));
    printf("CM to feet: %f\n", feet(d));
    printf("CM to inches: %f", inches(d));
    return 0;
}
