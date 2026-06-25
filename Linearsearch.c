// Online C compiler to run C program online
#include <stdio.h>
int search(int arr[],int n,int x)
{
    int i;
    for (i=0;i<n;i++)
    {
    if( arr[i]==x)
    {return i;}
    }
    return -1;
}
int main() {
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int n,x,s;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("number to find:");
    scanf("%d",&x);
    s=search(arr,n,x);
    printf("%d",s);
    return 0;
}