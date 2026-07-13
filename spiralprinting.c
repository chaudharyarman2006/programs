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
int count=0;
    // for (i=0;i<4;i++){
    printf("spiral printing shown as:>");
            for (j=0;j<4;j++){
                
                    if(j%2==0){
                        for(i=0;i<4;i++){
                            printf(" %d",a[i][j]);
                        }
                    }
else{
    for(i=3;i>=0;i--){
        printf(" %d",a[i][j]);
    }
}
            
            printf("\n");
            }
    // }
    // printf("even number in diagonal elements are:%d",count);


    return 0;
}