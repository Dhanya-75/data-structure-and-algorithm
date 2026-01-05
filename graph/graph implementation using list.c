#include <stdio.h>
#include <stdlib.h>
#define MAX 10
struct node
{
    int vertex;
    struct node *next;
};
struct node *adjlist[MAX];
struct node *createnode(int v)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->vertex=v;
    newnode->next=NULL;
    return newnode;
}
void addedge(int u,int v)
{
    struct node *newnode=createnode(v);
    newnode->next=adjlist[v];
    adjlist[v]=newnode;
}
void printgraph(int vertices)
{
    for(int i=0;i<vertices;i++)
    {
        struct node *temp=adjlist[i];
        printf("%d: ",i);
        while(temp!=NULL)
        {
            printf("%d -> ",temp->vertex);
            temp=temp->next;
        }
        printf("NULL\n");
    }
}
int main()
{
    int vertices, edges,u,v;
    printf("enter number of vertices:");
    scanf("%d",&vertices);
    for(int i=0;i<vertices;i++)
    {
        adjlist[i]=NULL;
    }
    printf("enter number of edges:");
    scanf("%d",&edges);
    for(int i=0;i<edges;i++)
    {
        printf("enter edge(u,v):");
        scanf("%d %d",&u,&v);
    }
    printf("\nadjacency list\n");
    printgraph(vertices);
    return 0;
}
