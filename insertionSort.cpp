/*
C++ Program to implement Insertion Sort Technique
Program No. : 2
Author: Mohammad Hisham
Enroll No. : 8613
University Enroll No. : 19205135117
Section: B
Branch: CSE
Semester: 3rd
*/
#include<iostream>
using namespace std;
int display(int[], int);
void insertionSort(int[], int);
int main()
{
    int arr[10], i;
    cout<<"Enter 10 integers for the array.\n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array before sorting is : \n";
    display(arr, 10);
    insertionSort(arr, 10);
    cout<<"\n\nThe array after sorting is : \n";
   // display(arr, 10);
    return 0;
}
int display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<A[i];
    }
}
void insertionSort(int A[], int n)
{
    int i, temp, j;
    for(i=0; i<n; i++)
    {
        temp = A[i];
        j = i - 1;
        while(j>=0 && temp < A[j])
        {
            A[j+1] = A[j];
            j--;
            A[j+1] = temp;
        }
    }
    display(arr, 10);
}
