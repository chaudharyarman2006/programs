// Online C compiler to run C program online
#include <stdio.h>
int lshift(int ar[],int n)
{
    int i ,t;
    t=ar[0];
    for (i=1;i<n;i++)
    {
        ar[i-1]=ar[i];
    }
    ar[n-1]=t;
}
int main() {
   int i;
   int ar[]={10,20,30,40};
   printf("original array:");
   for(i=0;i<4;i++)
   {
       printf(" %d",ar[i]);
   }
   lshift(ar,4);
      printf("\nchanged array:");
   for(i=0;i<4;i++)
   {
       printf(" %d",ar[i]);
   }
    return 0;
}







