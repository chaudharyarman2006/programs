// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[8]={1,2,3,4,5,6,7,8};
    int max=arr[0];
    int smax=0;
    for(int i=0;i<8;i++) {
        if(max<arr[i]) {
            max=arr[i];
        }
    } 
    for(int i=0;i<8;i++) {
        if(smax<arr[i] && arr[i]!=max) {
            smax=arr[i];
        }
    } 
    printf("%d",smax);
    return 0;
}