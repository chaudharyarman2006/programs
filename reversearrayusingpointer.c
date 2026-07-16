#include<stdio.h>
int main()
{
    int ar[]={1,2,3,4,5};
    int *p=&ar[4];
    for(int i=5;i>=1;i--)
    {
        printf("%d\n",*p);
        p--;
    }
}