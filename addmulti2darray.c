#include<stdio.h>
int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    int r[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            scanf("%d",&b[i][j]);
            scanf("%d",&c[i][j]);
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=3*a[i][j];
                        b[i][j]=4*b[i][j];
                                    c[i][j]=5*c[i][j];
            r[i][j]=a[i][j]+b[i][j]+c[i][j];
        }
    }
    for(i=0;i<3;i++){
         for(j=0;j<3;j++){
             printf(" %d",r[i][j]);
         }
         printf("\n");
    }
    return 0;
}