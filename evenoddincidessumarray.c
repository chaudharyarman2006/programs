// Online C compiler to run C program online
#include <stdio.h>

int main() {
int ar[8]={1,2,4,2,4,2,1,1};
int sum1=0,sum2=0;
for(int i=0;i<8;i++)
{
    if(i%2==0){
        sum1=sum1+ar[i];
    }
    else
    {
        sum2=sum2+ar[i];
    }
}
printf("sum of even indices=%d\n",sum1);
printf("sum of odd indices=%d",sum2);
    return 0;
}