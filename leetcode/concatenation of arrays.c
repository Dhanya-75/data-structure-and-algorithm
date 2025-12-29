#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],ans[2*n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        ans[i]=arr[i];
        ans[i+n]=arr[i];
    }
    for(int i=0;i<2*n;i++)
    {
        printf("%d ",ans[i]);
    }
}
