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
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                if(a[i][j]<0){
                    a[i][j]=0;
                }
            }
    }
    printf("matrix after change>>>>>>\n");
    for (i=0;i<3;i++){
            for (j=0;j<3;j++){
                printf(" %d",a[i][j]);
     
            }
            printf("\n");
    }

    return 0;
}