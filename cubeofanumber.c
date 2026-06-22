#include <stdio.h>

int cube(int x) {
    return x * x * x;  // must return value
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Cube is: %d", cube(num));
    return 0;
}