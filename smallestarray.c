// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int min=arr[0];
    for(int i=0;i<8;i++) {
        if(min>arr[i]) {
            min=arr[i];
        }
    } 
    
    printf("%d",min);
    return 0;
}