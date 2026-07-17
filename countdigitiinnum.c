// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
        printf("enter a digit:");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++)
    {
        n=n/10;
        count++;
    
    }
    printf("%d",count);
    return 0;
}