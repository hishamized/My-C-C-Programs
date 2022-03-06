/*
C++ Program to Implement Prim's Algorithm
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
#define V 5
bool edgeValidity(int u, int v, vector<bool> inMST)
{
    if( u==v )
        return false;
    if(inMST[u] == false && inMST[v] == false)
        return false;
    else if(inMST[u] == true && inMST[v] == true)
        return false;
    return true;
}
void Prim(int cost[][V])
{
    vector<bool> inMST(V, false);
    inMST[0] = true;
    int edgeCount = 0, minCost = 0;;
    while(edgeCount < V - 1)
    {
         int min = INT_MAX, a = -1, b = -1;
        for(int i=0; i<V; i++)
        {
            for(int j=0; j<V; j++)
            {
                if(cost[i][j] < min)
                {
                    if(edgeValidity(i, j, inMST))
                    {
                        min = cost[i][j];
                        a = i;
                        b = j;
                    }
                }
            }
        }
        if(a != -1 && b != -1)
        {
            printf("\nEdge %d : (%d, %d) Cost : %d \n", edgeCount++, a, b, min);
            minCost = minCost + min;
            inMST[a] = inMST[b] = true;
        }
    }
        printf("\nMinimum Cost : %d", minCost);
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
    Prim(cost);
    return 0;
}
