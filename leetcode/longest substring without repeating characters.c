#include <stdio.h>
#include <string.h>
int main() 
{
    char s[1000];
    scanf("%s", s); //pwwkew
    int len = strlen(s); //6
    int last[128];  // only ASCII letters
    for(int i = 0; i < 128; i++)
    {
        last[i] = -1;
    }
    int start = 0, maxLen = 0;
    for(int i = 0; i < len; i++) 
    { 
        if(last[s[i]] >= start) 
        {
            start = last[s[i]] + 1; //2
        }
        last[s[i]] = i; //last[p]=0,=1
        if(i - start + 1 > maxLen)
        {//0-0+1 >0,1-0+1 2>1
            maxLen = i - start + 1; //0=0-0+1=1 ,2,
        }
    }
    printf("%d\n", maxLen);
    return 0;
}
