#include<bits/stdc++.h>
#include<iostream>
#define V 5
using namespace std;
void printMST(int parent[], int graph[V][V])
{
  cout<<"\nEdge \tWeight \n";
    for(int i=0; i<V; i++)
    {
        cout<<parent[i]<<" - "<<i<<"\t"<<graph[i][parent[i]]<<"\n";
    }
}
int minkey(int key[], bool mstset[])
{
    int min = INT_MAX;
    int min_index;
    for(int v=0; v<V; v++)
    {
        if(mstset[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }
    return min_index;
}
void primMST(int graph[V][V])
{
    int parent[V];
    int key[V];
    bool mstset[V];
    for(int i=0; i<V; i++)
    {
        key[i] = INT_MAX;
        mstset[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for(int count=0; count<V-1; count++)
    {
        int u = minkey(key, mstset);

        for(int v=0; v<V; v++)
        {
            if(graph[u][v] && mstset[v] == false && graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent, graph);
}
int main()
{
    int graph[V][V] = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };
    primMST(graph);
}
