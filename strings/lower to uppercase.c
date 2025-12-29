#include<stdio.h>
#include<ctype.h>
int main()
{
    int i=0;
    char ch[100];
    fgets(ch,sizeof(ch),stdin);
    while(ch[i]!='\0')
    {
        if(ch[i]>='a' && ch[i]<='z')
        {
            ch[i]=ch[i]-32; //97-32=65
        }
        i++;
    }
    printf("%s",ch);
}
