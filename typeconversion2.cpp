#include<conio.h>
#include<iostream>
class complex
{
 private:
     int a,b;
 public:
    void setData(int x, int y)
    {a=x; b=y;}
    void showData()
    {cout<<"\na="<<a<<"b="<<b;}
    operator int() //casting operator
    {
      return(a);
    }
};
void main()
{
  clrscr();
  complex c1:
  c1.setData(3,4);
  c1.showdata();
  int x;
  x=c1; //x=c1.operator int();
  cout<<"\nx="<<x;
  getch();
}
