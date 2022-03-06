/* C++ Program to implement Prim's Algorithm
 Author: Mohammad Hisham
 Enroll No. : 8613
 Section: 'B'
 Semester: 4th
 Branch: CSE
 Dated: 26 Aug 2021
 Submitted To: Mr Adil Yousuf
 Subject: Analysis and design of algorithms
 */
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define V 5
//Function to select a vertex with minimum cost
// among vertices that have not yet been included in the mst
int minKey(int key[], bool mstSet[])
{
    int min = INT_MAX;
    int min_index;
    for(int v=0; v<V; v++)
    {
        if(mstSet[v] == false && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }

    }
      return min_index;
}//Function to print the constructed minimum spanning tree
void printMST(int parent[], int graph[V][V])
{
    cout<<"\nEdge \tWeight \n";
    for(int i=0; i<V; i++)
    {
        cout<<parent[i]<<" - "<<i<<"\t"<<graph[i][parent[i]]<<"\n";
    }
}
//The function used to implement prim's algorithm
void primMST(int graph[V][V])
{
    int parent[V]; //array that stores mst
    int key[V]; //array to store key values among which minimum weight edge must be picked
    bool mstSet[V]; //represents set of vertices included in MST
    for(int i=0; i<V; i++) //initializing all keys to infinity and not including any at first
    {
        key[i] = INT_MAX, mstSet[i] = false;
    }
    key[0] = 0;
    parent[0] = -1;
    for(int count=0; count < V-1; count++)
    {
        //picking up minimum key vertex
        int u = minKey(key, mstSet);
        mstSet[u] = true; //including that vertex into the MST

        for(int v=0; v<V; v++) //updating key values and parent index
        {
            //update key value if the edge is less costly than they current key value
            if(graph[u][v] && mstSet[v] == false && graph[u][v] < key[v])
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

    return 0;
}
