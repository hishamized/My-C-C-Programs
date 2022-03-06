/*
C++ Program to implement fractional knapsack problem (greedy method)
Author : Mohammad Hisham
Enroll Number: 8613
Branch : CSE
Section : B
Semester : 4th
Submitted To : Mr Adil Yousuf
Dated: 12 Aug 2021
*/
#include<bits/stdc++.h>
using namespace std;
struct element { //defining a structure that will represent our items
   int profit, weight;

   element(int profit, int weight) //defining a constructot
   {
        //this keyword denotes the current instant of a class/structure
       this->profit = profit;
       this->weight = weight;
   }
};
// Now we will make a function that will sort our elements according the profit/weight ratio
bool compare(struct element a, element b)
{
     //Using type casting we will declare 2 variables containing profit/weight ratios
    double r1 = (double)a.profit / (double)a.weight;
    double r2 = (double)b.profit / (double)b.weight;
    return r1 > r2;
}
//defining the actual function that will solve the problem
double greedyKnapsack(int W, struct element arr[], int n)
{
    //sorting elements according to profit/weight ratio
    sort(arr, arr + n, compare );


    int curWeight = 0;
    double totProfit = 0.0;
    for(int i = 0; i<n; i++)
    {
    //When all of an element can be accomodated
        if(curWeight + arr[i].weight <= W)
        {
            curWeight = curWeight + arr[i].weight;
            totProfit = totProfit + arr[i].profit;
        }
    //When only a fraction of an element can be accomodated
        else
        {
            int remain = W - curWeight;
            totProfit = totProfit + arr[i].profit*((double)remain/(double)arr[i].weight);
            break;
        }
    }
    return totProfit;
}
int main()
{
    int W = 50; //    Weight of knapsack
    element arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };

    int n = sizeof(arr) / sizeof(arr[0]);

    // Function call
    cout << "Thus the maximum profit that we can get is = "<<greedyKnapsack(W, arr, n);
     //displaying the newly ordered elements
    cout<<"\nNow the elements are arranged according to their p/w ratios as : \n";
    for(int j=0; j<n; j++)
    {
        cout<<arr[j].profit<<" "<<arr[j].weight<<" : "<<((double)arr[j].profit/(double)arr[j].weight)<<endl;
    }
    return 0;
}
