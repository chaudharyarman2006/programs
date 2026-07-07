// Online C compiler to run C program online
#include <stdio.h>
int palindrome(int ar[],int n)
{

    for (int i=0,j=n-1;i<j;i++,j--)
    {
if(ar[i]!=ar[j])
         {
             return 0;
         }
         
    }
   return 1; 
}
int main() {
   int i;
   int ar[]={10,20,35,40,30,20,10};
   printf("original array:");
   for(i=0;i<7;i++)
   {
       printf(" %d",ar[i]);
   }
  int p= palindrome(ar,7);
   if (p==1)
   {
       printf("palindrome");
   }
   else{
        printf(" \nnot palindrome");
   }
    return 0;
}






