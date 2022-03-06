#include<iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter any number"<<endl;
   cin>>n;
  for(int i=1; i<=n; i++)
  {
      for(int j=2; j<=i; j++)
      {
          if(n%j==0)
          {
              cout<<j<<endl;
              n = n/j;
          }
      }
  }
return 0;
}

