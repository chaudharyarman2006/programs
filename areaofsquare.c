#include <stdio.h>
int square(int l, int b) {  
    int a;
    a = l * b;
    return a;
}
int main() {
    int l, b;
    printf("Enter length: ");
    scanf("%d", &l);
    printf("Enter breadth: ");
    scanf("%d", &b);
     printf("Area = %d", square(l, b));
    return 0;
}