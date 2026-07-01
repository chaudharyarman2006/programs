// Online C compiler to run C program online
#include <stdio.h>
void add(int ar[],int n)
{

    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+ar[i];
    }
        printf("sum=%d",sum);
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

    add(ar,n);
        
    
}
    

    

