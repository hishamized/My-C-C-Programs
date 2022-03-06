#include<conio.h>
#include<iostream>
class complex
{
 private:
  int a,b;
 public:
  complex() {} //default constructor
  complex(int k)
  {a=k; b=0; }
  void setData(int x, int y)
   {a=x; b=y;}
  void showData()
   { cout<<"\na="<<a<<"b="<<b; }
};
void main()
{
 clrscr();
 complex c1:;
 int x=5;
 c1=x; //error then c1.complex(x)
 c1.showData();
 getch();
}
