/*
 C++ Program to find the shortest path between two vertices in a directed graph
 Author: Mohammad Hisham
 Enroll Number: 8613
 Semester: 4th
 Branch: CSE
 Submitted to: Mr Aadil Yousuf
 Dated: 14 August 2021
 Section: B
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define INF 1<<27
int shortestpathdp(std::vector<std::vector<int>> adj, int u, int v, int k)
{
    int __v = adj.size();
    int dp[__v][__v][k+1];
    for(int e=0; e<= k; ++e)
    {
        for(int i=0; i<__v; ++i)
        {
            for(int j=0; j<__v; ++j)
            {
                dp[i][j][e] = INF;

                if(e==0 && i==j) //base case
                    dp[i][j][e] = 0;
                if(e==1 && adj[i][j] != INF)
                    dp[i][j][e] = adj[i][j];
                //go to adjacent edges only when number of edges is greater than 1
                if(e>1)
                {
                    for(int b=0; b<__v; ++b)
                    {
                        if(adj[i][b]!=INF && i!=b)
                        {
                            dp[i][j][e] = std::min(dp[i][j][e], dp[b][j][e-1] + adj[i][b]);
                        }
                    }
                }
            }
        }
    }
    return dp[u][v][k];
}
int main()
{
    int _v, e;
    cout<<"\nEnter the total number of vertices and edges given in the directed graph in v->4 e-> 8 format.\n";
    std::cin>>_v>>e;
    std::vector<std::vector<int>> adj(_v, std::vector<int>(_v, INF));
    int u, v, w;
    cout<<"\nEnter the vertices and weights of all the edges in u->1 v-> 2 w-> 50 format\n";
    for(int i=0; i<e; ++i)
    {
        std::cin>>u>>v>>w;
        adj[u][v] = w;
    }
    int k;
    cout<<"\nEnter the source destination and K (number of edges in the path).\n";
    std::cin>>u>>v>>k;
    int res = shortestpathdp(adj, u, v, k); //function to find the shortest path
    if(res == INF)
        std::cout<<"INF\n";
    else
        std::cout<<"\nThe required shortest path is : "<<res<<"\n";
    return 0;
}
