// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    // int m;
    // printf("enter a number:");
    // scanf("%d",&m);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){

                            printf("*");

        }
        printf("\n");
    }
    
    return 0;
}