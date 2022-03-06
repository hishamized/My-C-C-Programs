/* C++ Program to demostrate template design
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
template <typename kuchBhi>
kuchBhi maximum(kuchBhi x, kuchBhi y)
{
    return (x>y) ? x : y;
}
int main()
{
    cout<<maximum<int>(3,4)<<endl;
    cout<<maximum<double>(6.45,4.77)<<endl;
    cout<<maximum<char>('a', 'z')<<endl;
    return 0;
}
