 #include <stdio.h>

float area(int h, int b) {   
    float a;                
    a = (h * b) / 2.0;      
    return a;           
}
float main() {
    float h, b;
     printf("Enter height: ");
    scanf("%f", &h);
    printf("Enter base: ");
    scanf("%f", &b);
     printf("Area of triangle = %f", area(h, b));
     return 0;
}
