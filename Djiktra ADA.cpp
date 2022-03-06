/*
 C++ Program to implement Dijkstra's algorithm
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
using namespace std;
#include<limits.h>
#define V 9
//A function to find a vertex with minimum cost among a set of vertices not yet processed
int minDistance(int dist[], bool sptSet[])
{
    int min = INT_MAX, min_index;
    for(int v=0; v<V; v++)
    {
        if(sptSet[v] == false && dist[v] <= min)
        {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}
// A function used to print the constructed distance array
void printSolution(int dist[])
{
    cout<<"Vertex \t Distance from source"<<endl;
    for(int i=0; i<V; i++)
    {
        cout<<i<<"\t"<<dist[i]<<endl;
    }
}
// The major function that implements the dijkstra's algotithm
void dijkstra(int graph[V][V], int src)
{
  int dist[V];
  bool sptSet[V];
  // Setting the cost of each vertex as infinity and labelling each vertex as unprocessed
  for(int i=0; i<V; i++)
  {
      dist[i] = INT_MAX, sptSet[i] = false;
  }
  //distance of source vertex from itself is always zero
  dist[src] = 0;
  for(int count = 0; count < V - 1; count++)
  {
      //picking the minimum distance vertex among the set of vertices not yet processed
      int u = minDistance(dist, sptSet);
      sptSet[u] = true;
      //relaxing and updating the values of adjacent vertices of the selected vertex
      for(int v=0; v < V; v++)
      {
          if(!sptSet[v] && graph[u][v] && dist[u]!= INT_MAX && dist[u] + graph[u][v] < dist[v])
          {
              dist[v] = dist[u] + graph[u][v];
          }
      }
  }
  printSolution(dist);
}
int main()
{
    int graph[V][V] = { { 0, 4, 0, 0, 0, 0, 0, 8, 0 },
                        { 4, 0, 8, 0, 0, 0, 0, 11, 0 },
                        { 0, 8, 0, 7, 0, 4, 0, 0, 2 },
                        { 0, 0, 7, 0, 9, 14, 0, 0, 0 },
                        { 0, 0, 0, 9, 0, 10, 0, 0, 0 },
                        { 0, 0, 4, 14, 10, 0, 2, 0, 0 },
                        { 0, 0, 0, 0, 0, 2, 0, 1, 6 },
                        { 8, 11, 0, 0, 0, 0, 1, 0, 7 },
                        { 0, 0, 2, 0, 0, 0, 6, 7, 0 } };

    dijkstra(graph, 0);

    return 0;
}
