/* C++ Program to demonstrate run time polymorphism
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
class base
{
public:
    virtual void print()
    {
        cout<<"\n Print base class.\n";
    }
    void show()
    {
        cout<<"\n Show base class.\n";
    }
};
class derived : public base
{
    void print() // Already defined in base class
    {
        cout<<"\n Print derived class.\n";
    }
    void show() // Already defined in base class
    {
        cout<<"\n Show derived class.\n";
    }
};
int main()
{
    base *bptr;
    derived d;
    bptr = &d;
    bptr->print(); // Virtual function and run time polymorphism
    bptr->show(); // Non virtual function got overriden
    return 0;
}
