#include <stdio.h>
struct complex
{
    int re;
    int img;
};
int main()
{
    struct complex c1,c2,sc,suc,muc;
    printf("enter complex number 1:");
    scanf("%d %d",&c1.re,&c1.img);
     printf("enter complex number 2:");
    scanf("%d %d",&c2.re,&c2.img);
    sc.re=c1.re+c2.re;
    sc.img=c1.img+c2.img;
    suc.re=c1.re-c2.re;
    suc.img=c1.img-c2.img;
    muc.re=(c1.re*c2.re)-(c1.img*c2.img);
    muc.img=(c1.re*c2.img)+(c2.re*c1.img);
    printf("%d+%di\n",sc.re,sc.img);
    printf("%d %di\n",suc.re,suc.img);
    printf("%d+%di",muc.re,muc.img);
return 0;
}