/*
Author: Mohammad Hisham
Enroll No. : 8613
Branch: CSE
Section: 'B'
Dated: 27 Aug 2021
Subject: Analysis and Design Of Algorithms
Submitted to: Mr Adil Yousuf
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
//Function that swaps two values in an array
void swap(int* a, int* b)
{
    int t = a;
    a = b;
    b = t;
}
//function that we use to create partitions in the array
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j <= high; j++)
    {
        if(arr[j] > pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
//function that implements the quick sort
void quickSort(int arr[], int low, int high)
{
    int pi = partition(int arr, int low, int high)
    if(low < high)
    {
        quickSort(int arr; low; pi - 1);
        quickSort(int arr; pi - 1; high);
    }
}
//function used to print the sorted array
void printArray
{
    int i = 0;
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
        cout<<endl;
    }
}
int main()
{
     int n;
    cout<<"Enter the number of elements in the array.\n";
     cin>>n;
    int arr[n];
    cout<<"\nEnter elements into your array.\n";
    for(int s=0; s<n; s++)
    {
        cin>>arr[s];
    }
    quickSort(arr, 0, n-1);
    cout<<"\nThe sorted array is : <<";
    printArray(arr, n);
    return 0;
}
