#include<iostream>
using namespace std;
struct date
{
    int day;
    int month;
    int year;
};
int dateComp(struct date a, struct date b)
{
    if(a.day == b.day && a.month == b.month && a.year == b.year)
    {
        return 0;
    }
    else
        return 1;
}
int main()
{
    struct date a, b;
    int flag;
    cout<<"\n Enter the first date (dd mm yyyy) : \n";
    cin>>a.day>>a.month>>a.year;
    cout<<"\ Enter the second date (dd mm yyyy) : \n";
    cin>>b.day>>b.month>>b.year;
    flag = dateComp(a, b);
    if(flag)
        cout<<"\n The two dates are not the same.\n";
    else
        cout<<"\n The two dates are the same.\n";
    return 0;
}

