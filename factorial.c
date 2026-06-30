// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int product=1;
    for(int i=1;i<=n;i++)
    {
product=product*i;
    }
printf("the factorial of a number is: %d",product);
    return 0;
}