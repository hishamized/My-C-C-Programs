/* C++ Program to implement Simple Class Design in C++, name spaces and object creations
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
};
int main()
{
    randomClass myObject;
    cout<<"Enter your number.\n";
    cin>>myObject.mynum;
    cout<<"Your number is : "<<myObject.mynum;
    return 0;
}
