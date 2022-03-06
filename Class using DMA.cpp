/* Class Design in C++ using Dynamic memory Allocation
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class randomClass
{
public:
    randomClass()
    {
        cout<<"\nConstructor Working.\n";
    }
    ~randomClass()
    {
        cout<<"\nDestructor worked.\n";
    }
};
int main()
{
    randomClass* ptr = new randomClass[4];
    delete [] ptr;
    return 0;
}
