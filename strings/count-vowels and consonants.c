#include<stdio.h>
int main()
{
    char str[100];
    fgets(str,sizeof(str),stdin);
    int vowels=0,consonants=0;
    for(int i=0;str[i]!='\0';i++)
    {
       char ch=str[i];
       if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
       {
           if(ch=='a' || ch=='e' ||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I' || ch=='O'||ch=='U')
           {
               vowels++;
           }
           else
           {
               consonants++;
           }
       }
    }
    printf("%d %d",vowels,consonants);
}
