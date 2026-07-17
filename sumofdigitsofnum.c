// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
        printf("enter a digit:");
    scanf("%d",&n);
    int sum=0;
    int m=n;
    for(int i=0;i<=n;i++)
    {
         int digit=m%10;
        sum=sum+digit;
        m=m/10;
        
    
    }
    printf("sum of digits of a number is:>>%d",sum);
    return 0;
}