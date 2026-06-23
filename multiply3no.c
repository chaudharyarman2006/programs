// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int calculate(int n) {
    if(n<0) {
    return pow(n,4);
    }
    else {
    return sqrt(n);
    }
}
int main () 
{
    int n;
    int z;
    printf("enter a number:");
    scanf("%d",&n);
    z=calculate(n);
    printf("%d",z);
}