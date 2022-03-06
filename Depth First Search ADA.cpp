//C++ PRogram to implement DFS Technique
/*
 Author: Mohammad Hisham
 Enroll No. : 8613
 Section: 'B'
 Semester: 4th
 Branch: CSE
 Dated: 12 sep 2021
 Submitted To: Mr Adil Yousuf
 Subject: Analysis and design of algorithms
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Tree
{
public:
    map<int, bool> visited;
    map<int, list<int>> adj;
    void plusEdge(int v, int w); //Function to add an edge to the grapgh
    void DFS(int v); //function to implement DFS
};
void Tree::plusEdge(int v, int w)
{
    adj[v].push_back(w); //Add w to v's list
}
void Tree::DFS(int v)
{
    //Mark the node as visited and print it
    visited[v] = true;
    cout<<v<<" ";
    //iterate for all adjacent vertices
    list<int>::iterator i;
    for(i = adj[v].begin(); i != adj[v].end(); ++i )
    {
        if(!visited[*i])
            DFS(*i);
    }
}
int main()
{
    Tree t;
    t.plusEdge(0, 1);
    t.plusEdge(0, 2);
    t.plusEdge(1, 2);
    t.plusEdge(2, 0);
    t.plusEdge(2, 3);
    t.plusEdge(3, 3);
    cout<<"\nThe depth first traversal for the graph (With 2 as root node) is given as\n";
    t.DFS(2);
    return 0;
}
