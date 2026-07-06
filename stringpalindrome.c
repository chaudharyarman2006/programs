// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int palin( char st[])
{
    int L=0,i,j;
    for(L=0;st[L]!='\0';L++)
    {
        
    }
    for (i=0,j=L-1; i<=j; i++,j--)
    {
        if(st[i]!=st[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char str[20];
    printf("enter a string:");
    scanf("%s",str);
    if(palin(str)==1)
    {
        printf("string is palindrome");
    }
    else
    {
                printf("string is  not palindrome");
    }
}










