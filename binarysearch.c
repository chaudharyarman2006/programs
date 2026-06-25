// Online C compiler to run C program online
#include <stdio.h>
int search(int arr[],int n,int x)
{
    
    
    int f=0,l=n-1,mid;//Binary search .
    while(f<=l)       //array is sorted.
    {
    mid=(f+l)/2 ;
    if (arr[mid]==x)
    {
        return mid;
    }
    else if(arr[mid]<x)
    {
        f=mid+1;
    }
    else
    {
        l=mid-1;
    }
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