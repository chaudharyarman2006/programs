// Online C compiler to run C program online
#include <stdio.h>
//1 1 2 3 5 8 13 21 34 55 89 .....
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    int a=1,b=1,sum=0;
    for(int i=1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    }
printf("the fibonacci of a number is: %d",sum);
    return 0;
}