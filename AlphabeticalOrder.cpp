#include<iostream>
#include<string.h>
#include<vector>
using namespace std;
int main()
{
    int x, y, z;
    char name1[x + 1];
    char name2[y + 1];
    char name3[z + 1];
    //first name
    cout<<"01 Enter the number of characters in your name : \n";
    cin>>x;
    cout<<"Enter name 1 : \n";
    gets(name1);
    cout<<"02 Enter the number of characters in your name : \n";
    cin>>y;
    cout<<"Enter name 2 : \n";
    gets(name2);
    cout<<"03 Enter the number of characters in your name : \n";
    cin>>z;
    cout<<"Enter name 3 : \n";
    gets(name3);
    if(int(name1[0]) < int(name2[0]) && int(name1[0]) < int(name3[0]))
    {
        cout<<name1<<endl;
      if(int(name2[0]) < int(name3[0]))
      {
          cout<<name2<<"\n";
          cout<<name3<<"\n";
      }
      if(int(name3[0]) < int(name2[0]))
      {
        cout<<name3<<"\n";
          cout<<name2<<"\n";
      }
    }
     if(int(name2[0]) < int(name1[0]) && int(name2[0]) < int(name3[0]))
     {
       cout<<name2<<endl;
        if(int(name1[0]) < int(name3[0]))
      {
          cout<<name1<<"\n";
          cout<<name3<<"\n";
      }
      if(int(name3[0]) < int(name1[0]))
      {
        cout<<name3<<"\n";
          cout<<name1<<"\n";
      }
     }
     if(int(name3[0]) < int(name1[0]) && int(name3[0]) < int(name1[0]))
     {
        cout<<name3<<endl;
         if(int(name1[0]) < int(name2[0]))
      {
          cout<<name1<<"\n";
          cout<<name2<<"\n";
      }
      if(int(name2[0]) < int(name1[0]))
      {
        cout<<name2<<"\n";
          cout<<name1<<"\n";
      }
     }
     return 0;
}
