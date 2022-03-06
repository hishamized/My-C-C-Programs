/* C++ Program to implement operator overloading
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<bits/stdc++.h>
using namespace std;
class Complex
{
private:
    int a, b;
public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void showData()
    {
        cout<<"\na = "<<a<<"\tb = "<<b<<endl;
    }
  Complex operator +(Complex c)
  {
      Complex temp;
      temp.a = a + c.a;
      temp.b = b + c.b;
      return(temp);
  }
};
int main()
{
    Complex  c1, c2, c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3 = c1.operator+(c2); // c3 = c1 + c2
    c3.showData();
}
