// Online C compiler to run C program online
#include <stdio.h>
int reverse(int ar[],int a,int b)
{

    for (int i=a,j=b;i<j;i++,j--)
    {
         int t=ar[i];
         ar[i]=ar[j];
         ar[j]=t;
    }
    
}
int main() {
   int i;
   int ar[]={10,20,30,40};
   printf("original array:");
   for(i=0;i<4;i++)
   {
       printf(" %d",ar[i]);
   }
   reverse(ar,0,3);
      printf("\nchanged array:");
   for(i=0;i<4;i++)
   {
       printf(" %d",ar[i]);
   }
    return 0;
}






