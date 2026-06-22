#include <stdio.h>

float circle(float r) {  
    float pi = 3.14159;  
    float area;
    area = pi * r * r;   
    return area;         
}

int main() {
    float radius;
    printf("Enter radius: ");
    scanf("%f", &radius);
    
    printf("Area of circle = %f", circle(radius));
    return 0;
}