#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char x[50] = "a";
   char y[50] = "b";
   char z[50];
   int i, n;
   cout<<"Enter the numbewr of terms up to which you want the fibonacci words to be printed\n";
   cin>>n;
   for(i=0; i<=n; i++)
   {
       cout<<x<<"\t";
       strcpy(z,x);
       strcpy(x,y);
       strcat(y,z);
   }
   return 0;
}
