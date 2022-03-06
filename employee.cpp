#include<iostream>
using namespace std;
void printinfo(struct employee e);
struct employee
{
    int code;
    char name[30];
    int date[3];
}
 work[50] = { 001, "Shahnawaz", 13, 1,2006,
004, "Amit Puri", 21, 6,2008,
102, "Irfan Moin", 12, 5, 2012,
131, "Shabnam", 16, 1, 2014
};
int main()
{
    int i, d[3];
    cout<<"Enter the current date in dd mm yy format.\n";
    cin>>d[0]>>d[1]>>d[2];
    for(i=0; i<4; i++)
    {
        if(d[2] - work[i].date[2] > 3)
        {
            printinfo(work[i]);
        }
        else if(d[2] - work[i].date[2] == 3)
        {
            printinfo(work[i]);
        }
        else if(d[2] - work[i].date[2] < 3)
            return 0;
    }
    return 0;
}
void printinfo(struct employee e)
{
  cout<<"\nName : "<<e.name;
  cout<<"\nCode : "<<e.code;
  cout<<"\nDate of joining : "<<e.date;
}
