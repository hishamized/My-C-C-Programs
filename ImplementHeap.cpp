#include<iostream>
#include<conio.h>
using namespace std;
void maxHeapify(int *a, int i, int n)
{
    int temp, j;
    temp = a[i];
    j = 2*i;
    while( j <= n)
    {
        if(j<n && a[j+1] < a[j])
        {
            j = j + 1;
        }
        if(temp > a[j])
        {
            break;
        }
        else if(temp < a[j])
        {
            a[j/2] = a[j];
            j = 2*j;
        }
    }
    a[j/2] = temp;
    return;
}
void buildMaxHeap(int *a, int n)
{
    int i;
    for(i = n/2; i<=n; i++)
    {
        maxHeapify(a, i, n);
    }
}
int main()
{
    int i, x, n;
    cout<<"\n\nEnter the number of elements in the array.\n";
    cin>>n;
    int a[n];
    for(i=0; i<n; i++)
    {
        cout<<"\nEnter the element "<<(i)<<"\n";
        cin>>a[i];
    }
    buildMaxHeap(a, n);
    cout<<"\nMax Heap : \n";
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<a[i];
    }
    return 0;
}
