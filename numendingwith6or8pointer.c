// Online C compiler to run C program online
#include <stdio.h>
int main() {
    int ar[5];
    printf("enter 5 elements:");
    for(int i=0;i<5;i++){
            scanf(" %d",&ar[i]);
    }
    int *p=ar;
for(int i=0;i<5;i++){
        if(*p%10==6 || *p%10==8)
        {
            printf("%d\n",*p);
        }
        p++;
    }
        

 return 0;
}