// Online C compiler to run C program online
#include <stdio.h>
void check(int ar[],int n)
{
    int p=0,m=0,z=0;
    for (int i=0;i<n;i++)
    {
        if(ar[i]>0)
        {
            p++;
        }
        else if(ar[i]<0)
        {
            m++;
        }
        else if(ar[i]==0)
        {
            z++;
        }
    }
    printf("Total positive numbers:%d\n", p);
    printf("Total negative numbers: %d\n", m);
    printf("Total zero numbers: %d\n", z);

}
int main()
{
        int ar[20];
    int n,i;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter array:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("array elements:");
        for(int i=0;i<n;i++)
        {
    printf(" %d",ar[i]);
        }
        
    check(ar,n);
        
    
}
    

    

