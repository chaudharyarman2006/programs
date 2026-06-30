// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a,b;
    printf("enter a base:");
    scanf("%d",&a);
        printf("enter a exponent:");
    scanf("%d",&b);
    int power=1;
    for(int i=1;i<=b;i++)
    {
        power=power*a;
    }
printf("the base %d and its power of %dis  : %d",a,b,power);
    return 0;
}