// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    printf("enter a elements:");
    scanf(" %d",&n);
    int rev=0;
    int temp=n;
    for(;temp>0;)
    {
        int lastdigit=temp%10;
        rev=(rev*10)+lastdigit;
        temp=temp/10;
    }
if(n==rev) printf("number is palindrome");
else printf("number is not palindrome");
 return 0;
}