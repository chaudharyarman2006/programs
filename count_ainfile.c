#include <stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("story.txt","r");
    int c=0;
    int ch;
    if (fp==null)
    {
        printf("file does not exist");
        return 1;
    }
    while(ch=fgetc(fp)!=EOF)
    {
    if(ch=='a'||ch=='A')
    {
        c++;
    }
    }
    printf("cound of a%d",c);
    fclose(fp);
return 0;
}
