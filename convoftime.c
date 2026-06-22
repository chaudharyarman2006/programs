#include <stdio.h>
float min(int s) {
    float m=s/60;
    return m;
}
float hour(int s) {
    float h=s/3600;
    return h;
}
float main() {
    float s;
    printf("enter time in second:");
    scanf("%f",&s);
    printf("%f",min(s));
    printf("\n%f",hour(s));
}
    
    
