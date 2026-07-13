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
int count=0;
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                
                    if(i>=j)
                    {
                        if(a[i][j]<0)
                        count++;
                    }

            }
            
    }
    printf("negative number in lower triangular matrix is:%d",count);


    return 0;
}