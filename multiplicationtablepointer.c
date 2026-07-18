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
        for (int j=1;j<11;j++){
            printf("%d\n",*p *j);
        }
        printf("\n");
        p++;
    }
        

 return 0;
}