// Online C compiler to run C program online
#include <stdio.h>

int main() {
int ar[5]={1,2,3,4,5};
int cube=1;
for (int i=0;i<5;i++) {
    
        cube=ar[i]*ar[i]*ar[i];
        printf(" %d",cube);
}
    
    return 0;
}