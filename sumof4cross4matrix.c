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
int sum=0;
    for (i=0;i<4;i++){
            for (j=0;j<4;j++){
                
                    if(i==j||i-j==1 || i-j==-1)
                    sum=sum+a[i][j];
            }
    }
    printf("sum of diagonal element is:%d",sum);
    // printf("multiplication' of two matrices are:\n");
    // for (i=0;i<3;i++){
    //         for (j=0;j<3;j++){
    //             printf(" %d",c[i][j]);
    //         }
    //         printf("\n");
    // }

    return 0;
}