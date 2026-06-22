#include <stdio.h>

float week(float d) {  // days to weeks
    float w = d / 7.0;  // 1 week = 7 days
    return w;
}

float year(float d) {  // days to years
    float y = d / 365.0;  // 1 year = 365 days
    return y;
}
int remain(int d) {
    int z=d%365;
    return z;
}
int main() {
    float d;
    printf("Enter days: ");
    scanf("%f", &d);
    
    printf(" days into weak:%f\n", week(d));
    printf("days into year:%f\n", year(d));
    printf("remaining days:%d",remain(d));
    return 0;
}
