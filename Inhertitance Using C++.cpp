#include<iostream>
using namespace std;
class Parent
{
    public:
    int parent_id;
};
class Child : public Parent
{
    public:
    int child_id;
} ;
int main()
{
    Child object1;
    object1.parent_id = 55;
    object1.child_id = 21;
    cout<<"ID of parent is given as : "<<object1.parent_id<<endl;
    cout<<"ID of child is goven as : "<<object1.child_id;
    return 0;
}
