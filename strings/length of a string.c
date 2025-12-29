#include<stdio.h>
int main()
{
    char ch[50];
    scanf("%s",ch);
    int length=0;
    while(ch[length]!='\0')
    {
        length++;
    }
    printf("%d",length);
}
