#include<stdio.h>
int main()
{
    int ar[]={1,2,6,4,5};
    int *p=&ar[0];
   int  sum=0;
    for(int i=1;i<=5;i++)
    {
        sum=sum+ (*p);
        p++;
    }
    printf("sum of  elements is>>>>>>>>>>>>>%d",sum);
}