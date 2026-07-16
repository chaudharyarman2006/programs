#include<stdio.h>
int main()
{
    int ar[]={1,2,6,4,5};
    int *p=&ar[0];
   int  m=ar[0];
    for(int i=1;i<=5;i++)
    {
        if(*p>m)
        m=*p;
        p++;
    }
    printf("biggest elements is>>>>>>>>>>>>>%d",m);
}