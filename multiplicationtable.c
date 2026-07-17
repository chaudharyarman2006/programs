// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
        printf("enter a number:");
    scanf("%d",&n);
    int ans;
    for(int i=1;i<=10;i++)
    {
        n*i;
        ans=n*i;
        printf("%d*%d=%d\n",n,i,ans);
    
    }
    return 0;
}