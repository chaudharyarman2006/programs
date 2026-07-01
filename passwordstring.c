// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    char ch[20];
    printf("enter password:");
    scanf("%s",ch);
    int  l=strlen(ch);
    printf("length=%d\n",l);
    if(l>=8)
    {
        printf("password is valid");
    }
    else
    {
     printf("password should be of 8 chracter");   
    }
}