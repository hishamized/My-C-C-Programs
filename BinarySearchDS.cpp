/* DATA STRUCTURES BINARY SEARCH */
#include<iostream>
using namespace std;
void BinarySearch(int L[], int N, int item);
main()
{
    int A[9];
    int i, item;
    cout<<"Enter 10 numbers in  ascending order"<<endl;
    for(i=0; i<10; i++)
        cin>>A[i];
    cout<<"Enter the element you are looking for"<<endl;
    cin>>item;
    BinarySearch(A, 9, item);
}
void BinarySearch(int L[], int N, int item)
{
    int l=0, u = N - 1, m;
    while(l<=u)
    {
        m = (l + u)/2;
        if(item == L[m]){
            cout<<"Search successful"<<"Index :"<<m<<endl;
            return;
        }
        else if(item > L[m]){
            l = m + 1;
        }
        else
            u = m - 1;
    }
    cout<<"Search Unsuccessful"<<endl;
}
