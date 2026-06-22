// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
        int t;
        //input
        printf("Enter temperature in  farenheit:");
        scanf("%d",&t);
        //logic
        int c=(t-32)/1.8;
        
        //print result
        printf("celcius temp = %d",c);
        
        
    
    return 0;
}