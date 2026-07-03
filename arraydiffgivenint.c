// Online C compiler to run C program online
#include <stdio.h>

int main() {
int ar[8]={8,7,6,5,4,3,2,1};
int k=3;
int count=0;
for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        
        if(k==ar[i]-ar[j]) {
            count++;
            printf(" pairs:%d-%d=%d\n",ar[i],ar[j],k);
        }
    }
}
printf("total pairs:%d\n",count);

    return 0;
}