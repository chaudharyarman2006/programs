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
    printf("zig -zag printing shown as:>");
            for (i=0;i<4;i++){
                
                    if(i%2==0){
                        for(j=0;j<4;j++){
                            printf(" %d",a[i][j]);
                        }
                    }
else{
    for(j=3;j>=0;j--){
        printf(" %d",a[i][j]);
    }
}
            
            printf("\n");
            }
    // }
    // printf("even number in diagonal elements are:%d",count);


    return 0;
}