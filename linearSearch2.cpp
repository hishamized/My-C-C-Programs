#include<iostream>
using namespace std;
void linearSearch(int A[], int n, int item)
{
    int i;
    int flag = 1;
    for(i=0; i<n; i++)
    {
        if(A[i] == item)
        {
            flag = 0;
            cout<<"\n\nSearch Successful\n\n";
            cout<<"The element\t"<<item<<" is located at index : \t"<<i;
        }
    }
    if(flag == 1)
    {
        cout<<"Item not found! Search Unsuccessful!\n\n";
    }
}
int main()
{
    int arr[10], i, x;
    cout<<"Enter 10 elements for the array.\n\n";
    for(i=0; i<10; i++)
    {
        cin>>arr[i];
    }
    cout<<"The array is : \n\n";
    for(i=0; i<10; i++)
    {
        cout<<"\t"<<arr[i];
    }
    cout<<"Enter the item that you're looking for.\n\n";
    cin>>x;
    linearSearch(arr, 10, x);
    return 0;
}
