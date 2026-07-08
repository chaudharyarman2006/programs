#include<stdio.h>
int main()
{
    int a[3][3];

    
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
            }
    }
   int  m=a[0][0];
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(m<a[i][j])
                m=a[i][j];
            }
            
        }
    
    
             printf("maximum array is: %d",m);
   
    return 0;
}