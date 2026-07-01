// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char ch[20];
    printf("enter password:");
    scanf("%s",ch);
    int  l=strlen(ch);
    int d=0;
    for(int i=0;i<l;i++)
    {
    if(ch[i]>=0 && ch[i]<=9)
    { 
        d++;
    }
    
    }
    if (d>0)
    { 
        printf("password accepted");
    }
    else
    {
        printf("password should have atleast 1 digit");
    }
    
}