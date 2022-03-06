/* C++ Program to demonstrate exceptionhandling
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
int main()
{
    cout<<"\n Let us assume we have 50 lines of executable code.\n";
    int x = -1;
    try
    {
        cout<<"\n We are inside try right now.\n";
        if(x<0)
        {
            throw(x);
            cout<<"\n After throw it is never executed.\n";
        }
    }
    catch(int x)
    {
        cout<<"\n Exception has been caught.\n ";
    }
    cout<<"\n After catch the code will be executed.\n";
    return 0;
}
