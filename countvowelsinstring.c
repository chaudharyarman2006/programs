// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
int main() {
    char str[]="aeiou";
    int l=strlen(str);
    int count=0;
    for(int i =0;i<l;i++)
    {
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' ||str[i]=='U' )
    count++;
    }
printf("number of vowels in string:%d",count);
    return 0;
}