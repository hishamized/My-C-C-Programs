/* C++ Program to demonstrate a constructor and destructor
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
     int mynum = 0;
     randomClass(); // Constructor
     ~randomClass(); //Destructor
};
randomClass::randomClass(void)
{
    cout<<"\nObject is being created so constructor was called.\n";
}
randomClass::~randomClass(void)
{
    cout<<"\nObject is being destroyed so destructor was called.\n";
}
int main()
{
    randomClass myObject;
    cout<<"Enter your number.\n";
    cin>>myObject.mynum;
    cout<<"Your number is : "<<myObject.mynum;
    return 0;
}

