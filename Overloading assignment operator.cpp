/* C++ Program to implement overloading of assignment operator
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
class Int
{
    int i;
public:
    Int(int ii = 0) : i(ii) { }
    Int operator = (const Int& ii){ i = ii.i;}
    int get() {return i;};
    void Set(int ii) {i = ii;};
};
int main()
{
    Int a(10), b(20);
    cout<<"\nInitial Values : \n";
    cout<<"\n a::i = "<<a.get()<<endl;
    cout<<"\n b::i = "<<b.get()<<endl;
    cout<<"\nAfter applying the operator.\n";
    a = b;
    cout<<"\n a::i = "<<a.get()<<endl;
    cout<<"\n b::i = "<<b.get()<<endl;
}
