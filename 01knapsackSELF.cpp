#include<bits/stdc++.h>
using namespace std;
int max(int a, int b)
{
    return(a>b)? a : b;
}
knapSack(int W, int weight[], int profit[], int n)
{
    int i, w; //declaring our iterators
    vector<vector<int>> k(n+1, vector<int>(W+1));
    for(i=0; i<=n; i++)
    {
        for(w=0; w<=W; w++)
        {
            if(i==0 || w==0)
                 k[i][w] = 0;

            else if(weight[i-1] <= w)
            k[i][w] = max(k[i-1][w], profit[i-1] + k[i-1][w - weight[i-1]]);

            else
             k[i][w] = k[i-1][w];

        }
    }
    return k[n][W];
}
int main()
{
    int weight[] = {3, 4, 5, 6};
    int profit[] = {2, 3, 4, 1};
    int n = sizeof(profit)/sizeof(profit[0]);
    int W = 8; //declaring total weight of the bag
    cout<<knapSack(W,weight,profit, n);
    return 0;
}
