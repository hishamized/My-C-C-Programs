#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
using namespace std;
int LCS(char *X, char *Y, int x, int y)
{
    if(x == 0 || y == 0 )
        return 0;
    if(X[x-1] == Y[y-1]) {
        return 1 + LCS(X, Y, x-1, y-1);
    }
    else {
        return max(LCS(X, Y, x, y-1), LCS(X, Y, x-1, y));
    }
}
int max(int a, int b)
{
    return (a>b)? a : b;
}
int main()
{
    int x, y;
    cout<<"\nEnter the number of characters that you wish to be stored in the first string.\n";
    cin>>x;
    char X[x];
    cout<<"\nEnter the characters for the first string.\n";
    for(int i=0; i<x; i++)
    {
        cin>>X[i];
    }
    cout<<"\nEnter the number of characters that you wish to be stored in the second string.\n";
    cin>>y;
    char Y[y];
    cout<<"\nEnter the characters for the second string.\n";
    for(int i=0; i<y; i++)
    {
        cin>>Y[i];
    }
    printf("\nLength of the longest common subsequence is : %d", LCS(X,Y,x,y));
    return 0;
}
