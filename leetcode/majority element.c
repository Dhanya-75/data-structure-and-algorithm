#include <stdio.h>
int main()
{
    int n,i,count;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int current=arr[0];
    count = 1;
    for(i=1;i<n;i++)
    {
        if(current==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            current=arr[i];
            count=1;
        }
    }
    printf("%d ",current);
}
