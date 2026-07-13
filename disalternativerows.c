// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[4][4],i,j;
    printf("enter matrix a:\n");
    for (i=0;i<4;i++){
            for (j=0;j<4;j++){
                scanf("%d",&a[i][j]);
            }
    }
// int sum=0;
    for (i=0;i<4;i=i+2){
            for (j=0;j<4;j++){
                
                    // if(i%2==0)
                    printf(" %d",a[i][j]);
            }
            printf("\n");
    }
    // printf("sum of  both diagonal element is:%d",sum);


    return 0;
}