#include<stdio.h>
int main()
{
    int m1,m2,m3,m4;
    printf("enter 4 numbers:");
    scanf("%d %d %d %d",&m1,&m2,&m3,&m4);
    int *p,*q,*r,*s;
    p=&m1;
    q=&m2;
    r=&m3;
    s=&m4;
    int c=*p * *q * *r * *s;
    printf("%d\n",c);
    printf("%x\n",c);
    
}
