// Online C compiler to run C program online
#include <stdio.h>

int main() {
int ar[10];
printf("enter 5 values:");
for( int i=0;i<10;i++)
{
    scanf("%d",&ar[i]);
}
    printf("Array elements are: ");
    for(int i = 0; i < 10; i++) {
    printf("%d ", ar[i]); 
    }


return 0;
}