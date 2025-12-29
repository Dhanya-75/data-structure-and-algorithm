#include <stdio.h>
#include <string.h>
int main()
{
    int i,j;
    char haystack[100],needle[100];
    scanf("%s %s", haystack,needle);
    int hlen=strlen(haystack);
    int nlen=strlen(needle);
    for(i=0;i<hlen-nlen;i++)
    {
        for(j=0;j<nlen;j++)
        {
            if(haystack[i+j]!=needle[j])
            {
                break;
            }
        }
        if(j==nlen)
        {
            printf("%d",i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
