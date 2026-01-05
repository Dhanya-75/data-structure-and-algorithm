/* topological sort: it is a way of arranging tasks
so that a task is one only after all the tasks before it
are completed.
key idea:
1) find the task with no dependency(indegree=0)
2) do that task
3) remove it from the list 
4) repeat until all the tasks are done
algorithm:(kahn's algorithm)
step-by-step algorithm
1.initialize indegree of all nodes to 0
2.calculate indegree of each nodes
3.for every edge u->v, increase indegree of v
4.insert all nodes with indegree 0 into a queue 
5.while queue is not empty:
     remove a node from the queue
     print/store it in result.
6.reduce indegree of its adjacent nodes by 1 
7.if any nodes indegree becomes 0, add it to the queue
8.if all nodes are printed->topological sort is successful
otherwise->ordering is not possible.
*/
#include<stdio.h>
#define V 4 
void topologicalsort(int graph[V][V])
{
    int indegree[V]={0};
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            if(graph[i][j]==1)
            {
                indegree[j]++;
            }
        }
    }
    int queue[V];
    int front=0,rear=0;
    for(int i=0;i<V;i++)
    {
        if(indegree[i]==0)
        {
            queue[rear++]=i;
        }
    }
    while(front<rear)
    {
        int node=queue[front++];
        printf("%d ",node);
        for(int i=0;i<V;i++)
        {
            if(graph[node][i]==1)
            {
                indegree[i]--;
                if(indegree[i]==0)
                  queue[rear++]=i;
            }
        }
    }
}
int main()
{
    int graph[V][V]={{0,1,1,0},{0,0,0,1},{0,0,0,1},{0,0,0,0}};
    printf("topological order:");
    topologicalsort(graph);
    return 0;
}
