/* spanning tree: it is a subgraph that connects all the 
vertices of a graph without forming any cycle and with minimum
number of edges.
important:  includes all vertices
            no cycle
            has v-1 edges
prims algorithm: it is used to find the minimum
spanning treeby repeatedly selecting the minimum
cost edge that connects a new vertex to the 
already selected vertices.
  *starts from one vertex
  *grows the tree step by step
  *always chooses minimum cost edge
 */
 #include<stdio.h>
 #define V 3 
 #define INF 100
 int main()
 {
     int graph[V][V]={{0,1,3},{1,0,2},{3,2,0}};
     int selected[V]={0};
     int edges=0;
     int totalcost=0;
     selected[0]=1;
     printf("edge cost\n");
     while(edges<V-1)
     {
         int min=INF;
         int u=-1,v=-1;
         for(int i=0;i<V;i++)
         {
             if(selected[i])
             {
                 for(int j=0;j<V;j++)
                 {
                     if(!selected[j] && graph[i][j]!=0)
                     {
                         if(graph[i][j] < min)
                         {
                             min=graph[i][j];
                             u=i;
                             v=j;
                         }
                     }
                 }
             }
         }
         printf("%d - %d %d\n",u,v,graph[u][v]);
         totalcost+=graph[u][v];
         selected[v]=1;
         edges++;
     }
     printf("Total cost of MST = %d\n",totalcost);
     return 0;
 }
