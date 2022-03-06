#include<iostream>
using namespace std;
struct adjListNode
{
    int dest;
    struct adjListNode *next;
};
struct adjList
{
    struct adjListNode *head;
};
struct Graph
{
    int V;
    struct adjList *array;
};
struct adjListNode *newAdjListNode(int dest)
{
    struct adjListNode *newNode = (struct adjListNode)malloc(sizeof(struct adjListNoe));
    newNode -> dest = dest;
    newNode -> next = NULL;
    return newNode;
}
struct Graph CreateGraph(int V)
{
 struct Graph *graph = (struct Graph)malloc(sizeof(struct Graph));
 graph -> V = V;
 graph -> array = (struct adjList*)malloc(sizeof(V*(struct adjList)));
 int i;
 for(i=0; i<V; i++)
 {
     graph -> array[i].head = NULL;
 }
 return graph;
}
void addEdge(struct Graph *graph, int scr, int dest)
{
    struct adjListNode* newNode = new adjListNode(dest);
    newNode -> next = graph-> array[scr].head;
    graph->array[scr].head = newNode;

    newNode = new adjListNode(scr);
    newNode->next = graph->array[dest].head;
    graph->array[dest].head = newNode;
}
void printGraph(struct Graph *graph)
{
    int v;
    for(v=0; v < graph; v++)
    {
        struct adjListNode *pcrawl = graph -> array[v].head;
        cout<<"\n\nAdjacency List of vertex "<<v<<" head";
        while(pcrawl)
        {
            cout<<" -----> "<<pcrawl -> dest;
            pcrawl = pcrawl -> next;
        }
        cout<<"\n\n";
    }
}
int main()
{
    int v=5;
    struct Graph *graph = CreateGraph(v);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    printGraph(graph);
    return 0;

}
