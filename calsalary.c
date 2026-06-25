// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int salary ,hra,da,ts;
    printf("enter amount of salary:");
    scanf("%d",&salary);
    if(salary<5000) {
    hra=(5*salary)/100;
    da=(7*salary)/100;
    ts=salary+hra+da;
    printf("%d\n%d\n%d ",hra,da,ts);
    }
    else if (salary >= 5000 && salary<= 10000) {
    hra=(6*salary)/100;
    da=(8*salary)/100;
    ts=salary+hra+da;
    printf("%d\n%d\n%d ",hra,da,ts);
    }

}