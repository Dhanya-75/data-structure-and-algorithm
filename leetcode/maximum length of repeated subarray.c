#include <stdio.h>
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    int max=0;
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
           int count=0;
           int x=i;
           int y=j;
           while(x < n1 && y < n2 && a[x]==b[y])
           {
               count++;
               x++;
               y++;
           }
           if(count>max)
           {
               max=count;
           }
        }
    }
    printf("%d",max);
}
