#include<stdio.h>
int main()
{
    int r;
    printf("enter radius:");
    scanf("%d",&r);
    int pi=3.14;
    int *p;
    p=&r;
    int c=*p * *p * pi;
    printf(" area of circle is>>.%d\n",c);
    printf("%x\n",c);
    
}
