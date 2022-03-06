/*
C++ Program to implement quick sort
Author : Mohammad Hisham
Enroll Number: 8613
Branch : CSE
Section : B
Semester : 4th
Submitted To : Mr Adil Yousuf
Dated: 12 Aug 2021
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partitioning(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for(int j = low; j <= high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}
void quickSort(int arr[], int low, int high)
{

    if(low < high)
    {
        int pi = partitioning(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void printArray(int arr[], int size)
{
    int i;
    for(i=0; i<size; i++)
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
    cout<<"\nThe sorted array is : \n";
    printArray(arr, n);
    return 0;
}
