#include<conio.h>
#include<iostream>
class Product
{
 private:
  int m,n;
 public:
  void setData(int x, int y)
  { m=x; n=y;}
  //We will use casting operator
  operator Item()
  {
    return(Item temp);
  }

  /*int getM()
  { return(m); }
  int getN()
  { return(n); }*/
};
class Item
{
 private:
  int a,b;
 public:
  void showData()
  { cout<<"\na="<<a<<"b="<<b; }
  Item() { } //default constructor
  Item(Product p) //constructor
  {
   a=p.getM();
   b=p.getN();
  }
};
void main()
{
 clrscr();
 Item temp;
 Item i1;
 Product p1;
 p1.setData(3,4);
 i1=p1;
 getch();
}



