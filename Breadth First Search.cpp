//C++ PRogram to implement BFS Technique
/*
 Author: Mohammad Hisham
 Enroll No. : 8613
 Section: 'B'
 Semester: 4th
 Branch: CSE
 Dated: 12 Sep 2021
 Submitted To: Mr Adil Yousuf
 Subject: Analysis and design of algorithms
*/
#include<iostream>
#include<list>
using namespace std;
class graph
{
    int V;
    list<int> *adj;
public:
    graph(int V); //constructor
    void plusEdge(int v, int w); //function to add an edge to the graph
    void BFS(int s); //function to implement the BFS technique
};
graph::graph(int V) //constructor
{
    this->V = V;
    adj = new list<int>[V];
}
void graph::plusEdge(int v, int w) //function to add an edge to the graph
{
    adj[v].push_back(w);
}
void graph::BFS(int s)
{
    bool *visited = new bool[V]; //declaring a pointer of the bool type and assigning a bool type array to it
    for(int i=0; i<V; i++)
    {
        visited[V] = false; //mark all vertices as unvisited
    }
    list<int> queue; // declaring a list to implement a queue
    visited[s] = true; //mark source as visited
    queue.push_back(s); //push current vertex on queue
    list<int>::iterator i; //will be used to run a loop later
    while(!queue.empty())
    {
        s = queue.front();
        cout<< s <<" "; //print the current visited vertex and pop it out of the queue
        queue.pop_front();
        for(i = adj[s].begin(); i!=adj[s].end(); ++i) //traverse the neighbouring vertices on the same level and mark them as visited
        {
            if(!visited[*i])
            {
                visited[*i] = true; //if not visited yet then mark it as visited
                queue.push_back(*i);
            }
        }
    }
}
int main()
{
    graph g(4);
    g.plusEdge(0, 1);
    g.plusEdge(0, 2);
    g.plusEdge(1, 2);
    g.plusEdge(2, 0);
    g.plusEdge(2, 3);
    g.plusEdge(3, 3);
    cout<<"\nThe breadth first traversal of the given graph (with 2 as source) is :\n";
    g.BFS(2);
    return 0;
}
