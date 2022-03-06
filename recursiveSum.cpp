#include<iostream>
using namespace std;
int add(int a)
{
    int sum = 0;
    if(a == 1)
    {
        return(a);
    }
    sum = a +  add(a-1);
    return(sum);
}
int main()
{
  int a, k;
  cout<<"\n\nEnter a number up to which you wish to sum the natural numbers.\n\n";
  cin>>a;
  k = add(a);
  cout<<"\n\nThe sum is : "<<k;
  return 0;
}
