/* C++ Program to implement friend function
Author : Mohammad Hisham Mir
College Enroll : 8613
University Enroll : 19205135117
Semester : 3rd
Branch : CSE
Section : B
*/
#include<bits/stdc++.h>
using namespace std;
class Distance {
    private:
        int meter;
        friend int addFive(Distance);
    public:
        Distance() : meter(0) {}
};
int addFive(Distance d) {
    d.meter += 5;
    return d.meter;
}
int main() {
    Distance D;
    cout << "Distance: " << addFive(D);
    return 0;
}
