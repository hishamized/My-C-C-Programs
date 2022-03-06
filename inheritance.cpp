/* Virtual Destructor in C++*/
#include<iostream>
using namespace std;
class A
{
  int a;
public:
  void f1(){}
};
class B: public A
{
  int b;
public:
   void f2(){}
};
int fun();
int fun()
{
  A *p=new B;
  p->f1(); //correct
 /*p->f2();*/ //error
 delete p;
}
int main()
{
  fun();

}
