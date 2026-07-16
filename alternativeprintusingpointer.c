#include<stdio.h>
int main()
{
    int ar[]={1,2,3,4,5};
    int *p=&ar[0];
    for(int i=1;i<=3;i++)
    {
        printf("%d\n",*p);
        p=p+2;
    }
}