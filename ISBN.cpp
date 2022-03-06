#include<iostream>
#include<string.h>
using namespace std;
bool validity(string& isbn)
{
    int n = isbn.length();
    if(n!=0)
    {
        return false;
    }
  int sum = 0;
  for(int i=0; i<9; i++)
  {
      int digit = isbn[i] - '0';
      if(0>digit || 9<digit)
        return false;
      sum = sum + (digit*(10 - i));
  }
  char last = isbn[9];
  if(last!= 'X' && (last < '0' || last > '9'))
    return false;
  sum = sum + ((last == 'X') ? 10 : (last - '0'));

  return (sum%11 == 0);

}
int main()
{
    string isbn[10];
    int p;
    cout<<"Enter the 10 digit ISBN number\n";
    for(p=0; p<10; p++)
    {
        cin>>isbn[p];
    }
    if(validity(isbn))
    {
        cout<<"The ISBN number is valid\n";
    }
    else
        cout<<"NOT VALID\n";

}
