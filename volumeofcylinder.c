 #include <stdio.h>
float vol(float r, float h) {   
    float pi = 3.14159;        
    float volume;
    volume = pi * r * r * h;   
    return volume;            
}
int main() {
    float r, h;
     printf("Enter radius: ");
    scanf("%f", &r);
    printf("Enter height: ");
    scanf("%f", &h);
printf("Volume of cylinder = %f", vol(r, h));
    return 0;
}