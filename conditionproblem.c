// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main() {
    int n;
    float m;
    
    printf("enter value of n:");
    scanf("%d",&n);
    m=sqrt(n);
    if(n%2!=0 && n>0)
    {
        printf("%f",m);
    }
    else
    {
        printf("%d",n*5);
}
}