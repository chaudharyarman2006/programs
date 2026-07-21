#include <stdio.h>
#include <malloc.h>
int main()
{
int *p;
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);
    int s=0,i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+p[i];
    }
    printf("sum=%d",s);
    free(p);
return 0;
}