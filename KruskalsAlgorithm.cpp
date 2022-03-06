/*
C++ Program to implement Kruskal's Algorithm
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<bits/stdc++.h>
using namespace std;
#define V 5
int parent[V];
int find(int i)
{
    while(parent[i]!=i)
        i = parent[i];
    return i;
}
void union1(int i, int j)
{
    int a = find(i);
    int b = find(j);
    parent[a] = b;
}
void kruskal(int cost[][V])
{
    int minCost = 0;
    for(int i=0; i<V; i++)
        parent[i] = i;
    int edgeCount = 0;
    while(edgeCount < V-1)
    {
        int min = INT_MAX, a= -1, b=-1;
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                if(find(i)!=find(j) && cost[i][j] < min)
                {
                    min = cost[i][j];
                    a = i;
                    b = j;
                }
            }
        }
        union1(a,b);
        printf("edge %d : (%d, %d) Cost : %d\n", edgeCount++, a, b, min);
        minCost = minCost + min;
    }
    printf("\nMinimum Cost : %d\n", minCost);
}
int main()
{
    int cost[][V] = {
        { INT_MAX, 2, INT_MAX, 6, INT_MAX },
        { 2, INT_MAX, 3, 8, 5 },
        { INT_MAX, 3, INT_MAX, INT_MAX, 7 },
        { 6, 8, INT_MAX, INT_MAX, 9 },
        { INT_MAX, 5, 7, 9, INT_MAX },
    };
   kruskal(cost);
   return 0;
}
