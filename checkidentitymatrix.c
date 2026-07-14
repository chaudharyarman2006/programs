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
int count=1;
   for (i=0;i<4;i++)
   {
       if(a[i][i]!=1){
           count=0;
          printf("invalid matrix");
          break;
       }
   }
    
if (count==1){
    printf("identity matrix");
}
            
    //         printf("\n");
    //         }
    // // }
    // printf("even number in diagonal elements are:%d",count);


    return 0;
}