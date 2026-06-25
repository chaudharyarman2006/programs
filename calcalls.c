// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int calls;
    printf("enter number of calls:");
    scanf("%d",&calls);
    if(calls<200) {
    printf("\n1.80/call.");
    }
    else if (calls >= 200 && calls <= 500) {
    printf("\n1.60/call");
    }
    else {
    printf("\n1.50/call");
    printf("\n7 percent tax added:%d" ,(calls*7)/100);
    
    }
}