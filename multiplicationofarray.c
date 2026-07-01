// Online C compiler to run C program online
#include <stdio.h>
void mul(int ar[],int n)
{

    int prod=1;
    for(int i=0;i<n;i++)
    {
        prod=prod*ar[i];
    }
        printf("product=%d",prod);
}
int main()
{
        int ar[20];
    int n;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }

    mul(ar,n);
        
    
}
    

    

