/* C++ Program to demonstrate inheritance
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
class parent
{
    public:
    int id_parent;
};
class child : public parent
{
public:
    int id_child;
};
int main()
{
    child object1;
    object1.id_child = 7;
    object1.id_parent = 34;
    cout<<"\n Child ID is : "<<object1.id_child;
    cout<<"\n Parent ID is : "<<object1.id_parent;
    return 0;
}
