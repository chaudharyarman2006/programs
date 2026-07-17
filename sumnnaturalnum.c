// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
        printf("enter n-th number:");
    scanf("%d",&n);
int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum=sum+i;
    
    }
printf("sum of N natural number is: %d\n",sum);
    return 0;
}