/* Virtual Destructor in C++*/
#include<iostream>
using namespace std;
class A
{
  int a;
public:
  void f1(){}
  virtual ~A (){}
};
class B: public A
{
  int b;
public:
   void f2(){}
   virtual ~B(){} //The Keyword virtual for late binding
};
int fun();
int fun()
{
  A *p=new B;
  p->f1(); //correct
 /* p->f2(); */ //error because of early binding
 delete p; // due to early binding only the destructor of A class will run so we need virtual destructor
}
int main()
{
  fun();

}
