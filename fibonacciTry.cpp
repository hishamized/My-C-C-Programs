#include<iostream>
using namespace std;
int main(){
 int t1 = 0;
 int t2 = 1;
 int next = t1;
 int t;
 cout<<"\nEnter the term up to which you would to print the fibonacci sequence.\n";
 cin>>t;
 cout<<"\nPrinting the first "<<t<<" terms of the fibonacci sequence\n";
 for(int i=0; i <= t-1; i++)
 {
   cout<<next<<endl;
   t1 = t2;
   t2 = next;
   next = t1 + t2;
 }
 return 0;
}
