// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[3][3],i,j;
    printf("enter matrix a:\n");
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                scanf("%d",&a[i][j]);
            }
    }
int sum=0;
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                
                    if(i==j || i+j==2)
                    sum=sum+a[i][j];
            }
    }
    printf("sum of  both diagonal element is:%d",sum);
    // printf("multiplication' of two matrices are:\n");
    // for (i=0;i<3;i++){
    //         for (j=0;j<3;j++){
    //             printf(" %d",c[i][j]);
    //         }
    //         printf("\n");
    // }

    return 0;
}