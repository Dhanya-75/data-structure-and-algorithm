#include <stdio.h>
#define MAX 5
int queue[MAX];
int front=0,rear=-1;
int main()
{
    int n;
    printf("enter number of elements (max %d):",MAX);
    scanf("%d",&n);
    if(n>MAX)
    {
        printf("queue overflow! too many elements\n");
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&queue[i]);
        rear++;
    }
    if(front>rear)
    {
        printf("queue underflow");
    }
    else
    {
        printf("\n deleted element: %d\n",queue[front]);
        front++;
    }
    printf("\n queue after dequeue:\n");
    if(front>rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
    return 0;
}

