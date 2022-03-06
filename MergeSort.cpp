#include<iostream>
using namespace std;
void Merge(int A[], int n1, int index1, int B[], int n2, int index2, int C[], int index)
{
    while(n1&&n2)
    {
        if(A[index1] < B[index2])
        {
            C[index] = A[index1];
            index++;
            index1++;
            n1--;
        }
        else
        {
            C[index] = B[index2];
            index++;
            index2++;
            n2--;
        }
    }
    while(n1)
    {
      C[index] = A[index1];
            index++;
            index1++;
            n1--;
    }
    while(n2)
    {
       C[index] = B[index2];
            index++;
            index2++;
            n2--;
    }
}
void mergePass(int A[], int n, int L, int B[])
{
    int LB, Q, S, R, j;
    Q = n/2*L; //Total number of array pairs to be merged
    S = 2*Q*L; // Total number of elements in all pairs of arrays
    R = n - S; // Number of residual elements
    for(j=0; j<n; j++)
    {
        LB = (2*j)*L; // Lower bound or index of first array
        Merge(A, L, LB, A, L, LB + L, B, LB);
    }
    if(R < L) // Only one pair of sub arrays is left
    {
        for(j=0; j<R; j++)
            B[S+j] = A[S+j]; //Copy
    }
    else //Pair of arrays with unequal number of indexes are left
    {
        Merge(A, L, S, A, R - L, S+L, B, S);
    }
}
void display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<A[i];
    }
}
void mergeSort(int A[], int n)
{
    int L = 1; // Number of elements in each sub array
    int B[11];
    while(L<n)
    {
        mergePass(A, n, L, B);
        mergePass(B, n, 2*L, A);
        L = 4*L;
    }
}


int main()
{
    int arr[11], i;
    cout<<"Enter 11 integers into the array.\n\n";
    for(i=0; i<11; i++)
    {
        cin>>arr[11];
    }
    cout<<"Array before Sorting : \n\n";
    display(arr, 11);
    mergeSort(arr, 11);
    cout<<"Array after sorting : \n\n";
    display(arr, 11);
    return 0;
}
