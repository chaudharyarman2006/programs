#include <stdio.h>

int main() {
    int x, y;
    
    printf("Enter the number: ");
    scanf("%d", &x);  // & is important
    
    y = x * x;
    printf("Square is: %d", y);
    
    return 0;
}