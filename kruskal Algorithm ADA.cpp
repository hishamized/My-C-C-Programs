/*
 C++ Program to implement Kruskal's Algorithm
 to find the minimum spanning tree in a graph
 Author: Mohammad Hisham
 Enroll No. : 8613
 Section: 'B'
 Semester: 4th
 Branch: CSE
 Dated: 27 Aug 2021
 Submitted To: Mr Adil Yousuf
 Subject: Analysis and design of algorithms
*/
#include<bits/stdc++.h>
using namespace std;
#define V 5
int parent[V]; //V is the number of vertices
int find(int i) //set of vertex i is to be found
{
    while(parent[i]!=i)
    {
        i = parent[i];

    }
       return i;
}
//unifies ith and jth vertex to form an edge in our MST
void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
//Finds minimum spanning tree using kruskal's algorithm
void kruskalMST(int cost[][V])
{
    //variable that stores the minimum cost of traversal
    int mincost = 0;
    //initialize sets of disjoint sets
    for(int i=0; i<V; i++)
    {
        parent[i] = i;
    }
    //include minimum cost of edges one by one
    int edge_count = 0;
    while(edge_count < V - 1)
    {
        int min = INT_MAX;
        int a = -1, b = -1;
        for(int i = 0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                //min gets replaced with a cheaper cost edge
                if(find(i)!=find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        union1(a, b);
        printf("\nEdge: %d : (%d, %d) - Cost: %d \n", edge_count++, a, b, min);
        mincost = mincost + min;
    }
    printf("\n Minimum Cost: %d \n", mincost);
}
int main()
{
    //Creating the graph using adjacency matrix
    int cost[][V] = {
        { INT_MAX, 2, INT_MAX, 6, INT_MAX },
        { 2, INT_MAX, 3, 8, 5 },
        { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
        { 6, 8, INT_MAX, INT_MAX, 9 },
        { INT_MAX, 5, 7, 9, INT_MAX },
    };

    kruskalMST(cost);

    return 0;
}
