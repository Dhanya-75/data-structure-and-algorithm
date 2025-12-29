#include <stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int s=n;
    if(n<0)
    {
        printf("not palindrome");
        return 0;
    }
    while(n>0)
    {
        int temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(s==sum)
    {
        printf("palindrome");
    }
    else
    {
        printf("not palindrome");
    }
}
