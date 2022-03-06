/* C++ Program to implement Type Conversion Using Static Cast
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
    float f = 3.5;
    int b = static_cast<int>(f);
    cout<<"\n Floating Point Variable before type casting is : "<<f<<endl;
    cout<<"\n Floating Point Variable after being converted to int : "<<b<<endl;
    return 0;
}
