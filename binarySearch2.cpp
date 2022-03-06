#include<iostream>
using namespace std;
int display(int A[], int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"\t"<<A[i];
    }
}
void mBubbleSort(int A[], int n)
{
    int temp, i, round, flag;
    for(round = 1; round < n; round++)
        {
            flag = 0;
            for(i=0; i < n - round; i++)
            {
                if(A[i] > A[i+1])
                {
                    temp = A[i];
                    A[i] = A[i+1];
                    A[i+1] = temp;
                    flag = 1;
                }
            }
            if(flag == 0)
               {
                 cout<<"\n\nArray already sorted at round : \t"<<round<<endl;
                 return;
               }
            }
}
void binarySearch(int A[], int n, int item)
{
    int l = 0;
    int u = n-1;
    int m;
    while(l <= m)
    {
      m = (l + u)/2;
      if(A[m] == item)
      {
          cout<<"Search Successful!\n";
          cout<<"The item "<<item<<" is located at the index "<<m<<" of the array.\n\n";
          return;
      }
      else if(A[m] > item)
      {
          u = m - 1;
      }
      else if(A[m] < item)
      {
          l = m + 1;
      }
    }
    cout<<"Search unsuccessful!\n";
}

int main()
{
  int arr[10], x;
  cout<<"Enter 10 elements for the array.\n\n";
  for(int j=0; j<10; j++)
  {
      cin>>arr[j];
  }
  cout<<"Enter the item that you're looking for : \n\n";
  cin>>x;
  mBubbleSort(arr, 10);
  binarySearch(arr, 10, x);
}
