// Online C compiler to run C program online
#include <stdio.h>
void check(int ar[],int n)
{
    int i;
    printf(" arrays  in negative index are:");
    for(int i=0;i<n;i++)
    {
    if (i%2!=0)
    {
    printf("%d\n",ar[i]);
    }

    }
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
      printf("\n")  ;
    check(ar,n);
        
    
}
    

    

