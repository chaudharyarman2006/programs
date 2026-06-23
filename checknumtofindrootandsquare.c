// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int check(int x){
if (x%3==0 || x%5==0) {
return 1;
}
else  {
    return 0;
}
}
int main(){
    int x,a;
    float y;
    printf("enter a number:");
    scanf("%d",&x);
    a=check(x);
    y=sqrt(x);
    if (a==1)
    printf("%d",x*x);
    else if (a==0)
    printf("%f",y);
}