#include<stdio.h>
#include<string.h>
int validparenthesis(char s[]) //()
{
    int count=0;
    for(int i=0;i<strlen(s);i++) //0<2
    {
        if(s[i]=='(') //s[0]=( true,
        {
            count++; //1
        }
        else if(s[i]==')')
        {
            count--;
        }
        if(count<0)
        {
            return 0;
        }
    }
    return count==0; //1 condn true
}
int main()
{
    char s[100];
    printf("enter parentheses string");
    scanf("%s",s);
    if(validparenthesis(s))
    {
        printf("valid parenthesis");
    }
    else
    {
        printf("invalid parenthesis");
    }
    return 0;
}
