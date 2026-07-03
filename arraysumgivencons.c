// Online C compiler to run C program online
#include <stdio.h>

int main() {
int ar[8]={1,2,3,4,5,6,7,8};
int k=12;
int count=0;
for(int i=0;i<8;i++){
    for(int j=i+1;j<8;j++){
        
        if(k==ar[i]+ar[j]) {
            count++;
            printf(" pairs:%d+%d=%d\n",ar[i],ar[j],k);
        }
    }
}
printf("total pairs:%d\n",count);

    return 0;
}