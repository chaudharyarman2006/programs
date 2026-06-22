#include <stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    printf("next 4 character:");
    printf("%c\n%c\n%c\n%c",ch+1,ch+2,ch+3,ch+4);
}