// Online C compiler to run C program online
#include <stdio.h>
int shift(int ar[],int n)
{
    int i, j, k;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (ar[i] == ar[j]) {
                // Shift elements left to remove duplicate
                for (k = j; k < n - 1; k++) {
                    ar[k] = ar[k + 1];
                }
                n--; // Reduce array size
            } else {
                j++;
            }
        }
    }
    return n; // Return new length after duplicates removed

}
int main() {
   int i;
   int n=6;
   int ar[]={1,1,2,3,3,4};
   printf("original array:");
   for(i=0;i<n;i++)
   {
       printf(" %d",ar[i]);
   }
  n=shift(ar,n);
//   if (p==1)
//   {
//       printf("palindrome");
//   }
//   else{
//         printf(" \nnot palindrome");
//   }
      printf("\nchanged array:");
  for(i=0;i<n;i++)
  {
      printf(" %d",ar[i]);
  }
}








