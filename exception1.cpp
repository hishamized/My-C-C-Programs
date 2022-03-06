#include<iostream>
#include<conio.h>
using namespace std;
void fun()
{
    throw 10;

}
int main()
{
 int i=3;
 cout<<"Welcome";
 try{
    if(i==1)
      throw 10;
     if(i==2)
       throw "hello";
     if(i==3)
        fun();
       throw 4.5;
   cout<<"\nIn Try";
 }
 catch(int e){
  cout<<"\nException no: "<<e;
  }
  cout<<"\nLast Line";
  getch();
}
