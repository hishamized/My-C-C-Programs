/*
C++ Program to implement Bubble Sort technique
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
void bubbleSort(int[], int);
int main()
{
    int arr[10], i;
    cout<<"Enter 10 integers.\n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array before sorting is : \n";
    for(i=0; i<10; i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"\n\n";
    bubbleSort(arr, 10);
    cout<<"The array after sorting is : \n";
    for(i=0; i<10; i++)
    {
        cout<<"\t"<<arr[i];
    }
    return 0;
}
void bubbleSort(int A[], int n)
{
    int round, i, temp;
    for(round=1; round < n; round++)
    {
        for(i=0; i < n - round; i++)
        {
            if(A[i] > A[i+1])
            {
                temp = A[i];
                A[i] = A[i+1];
                A[i+1] = temp;
            }
        }
    }
}
