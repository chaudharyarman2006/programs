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
                
                    if(j>=i)
                    {
                        if(a[i][j]>=10 && a[i][j]<=99)
                        count++;
                    }

            }
            
    }
    printf("2 digit elements in upper triangular matrix is:%d",count);


    return 0;
}