#include<stdio.h>
#include <string.h>
int main()
{
    int count=0,len;
    char s[100];
    fgets(s,sizeof(s),stdin);
    len=strlen(s);
    for(int i=len-1;i>=0;i--)
    {
        if((s[i]==' ' || s[i]=='\n') && count == 0 )
        {
            continue;
        }
        if(s[i] !=' ')
        {
            count++;
        }
        else
        {
            break;
        }
    }
    printf("%d",count);
}
