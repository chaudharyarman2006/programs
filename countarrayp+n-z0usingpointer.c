#include<stdio.h>
int main()
{
    int ar[10];
    for (int i=0;i<10;i++)
    {
        scanf("%d",&ar[i]);
    }
    int *p=&ar[0];
   int  pos=0;
   int neg=0;
   int zero=0;
    for(int i=0;i<10;i++)
    {
       if(*p>0){
           pos++;
       }
       else if(*p<0){
           neg++;
       }
       else if (*p==0){
           zero++;
       }
        p++;
    }
    printf("total positive element:%d\ntotal negative element:%d\ntotal zeros:%d",pos,neg,zero);
}