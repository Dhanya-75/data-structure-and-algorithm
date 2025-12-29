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
    int currentsum=arr[0];
    count = 1;
    for(i=1;i<n;i++)
    {
        if(currentsum==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }
        if(count==0)
        {
            currentsum=arr[i];
            count=1;
        }
    }
    printf("%d ",currentsum);
}
