/* C++ Program to implement function overloading
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<iostream>
using namespace std;
int area(int, int); //Function named area
float area(int = 0); //Same function with different return type and a default arguement
int main()
{
    int r, l, b, a;
    cout<<"\nEnter the radius of the circle.\n";
    cin>>r;
    float A = area(r);
    cout<<"\nThe area of the circle is : "<<A<<endl;
    cout<<"\nEnter the length and breadth of the rectangle .\n";
    cin>>l>>b;
    a = area(l,b);
    cout<<"\nArea of the rectangle is : \n";
    cout<<a;
}
float area(int R)
{
    return (3.14*R*R);
}
int area(int L, int B)
{
    return(L*B);
}
