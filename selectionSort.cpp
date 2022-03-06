#include<iostream>
using namespace std;
int display(int[], int);
int minim(int[], int, int);
int main()
{
 int arr[10], i;
 int k, LOC, temp;
 cout<<"Enter 10 integers.\n";
 for(i=0; i<10; i++)
 {
    cin>>arr[i];
 }
 cout<<"The array before sorting is : \n";
 display(arr, 10);
 for(k=0; k<10; k++)
 {
     LOC = minim(arr, 10, k);
     temp = arr[k];
     arr[k] = arr[LOC];
     arr[LOC] = temp;
 }
 cout<<"\n\nThe array after sorting is : \n";
 display(arr, 10);
}
int minim(int A[], int n, int k)
{
    int LOC, MIN, j;
    LOC = k;
    MIN = A[k];
    for(j=k+1; j < n; j++)
    {
        if(MIN > A[j])
        {
            MIN = A[j];
            LOC = j;
        }
    }
    return (LOC);
}
int display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<A[i];
    }
}
