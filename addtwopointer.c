#include<stdio.h>
int main()
{
    int a =10;
    int b=15;
    int *p,*q;
    p=&a;
     q=&b;
   int  c=*p+*q;
    printf(" sum of two pointer is:%d",c);
}