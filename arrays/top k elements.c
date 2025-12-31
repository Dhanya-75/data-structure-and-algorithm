#include<stdio.h>
int main()
{
    int n,k;
    printf("enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter k value:");
    scanf("%d",&k);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("top %d elements",k);
    for(int i=0;i<k;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
