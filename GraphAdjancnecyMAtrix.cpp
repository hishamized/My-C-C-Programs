#include<iostream>
using namespace std;
struct Graph
{
    int E;
    int V;
    int **adj;
};
struct Graph* adjMatrixOfGraph()
{
 int u, v, i;
 struct Graph *G = (struct Graph*)malloc(sizeof(struct Graph));
 if(G == NULL)
 {
     cout<<"\n\nMemory Error!\n";
     return;
 }
 cout<<"Enter the number of nodes and the number of edges.\n\n";
 cin>>G->V>>G->E;
 G->adj = (int **)malloc(sizeof(int)*(G->V)*(G->E));
 for(u=0; u < G->V; u++)
 {
     for(v=0; v< G-> V; v++)
     {
         G-> adj[u][v] = 0;
     }
 }
 cout<<"\nEnter the node numbers in pairs to represent an edge.\n";
 for(i=0; i<G->E; i++)
 {
     cin>>u>>v;
     G-> adj[u][v] = 1;
     G-> adj[v][u] = 1;
 }
 return(G);
}
